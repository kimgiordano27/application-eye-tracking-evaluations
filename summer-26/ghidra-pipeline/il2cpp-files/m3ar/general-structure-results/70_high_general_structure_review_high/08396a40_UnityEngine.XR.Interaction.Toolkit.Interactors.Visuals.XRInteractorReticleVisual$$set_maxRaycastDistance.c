/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual$$set_maxRaycastDistance
ENTRY_POINT: 08396a40
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorReticleVisual__set_maxRaycastDistance
               (void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x22;
  long unaff_x24;
  
  FUN_0403162c(PTR_DAT_08ffc1b8);
  FUN_0403162c(PTR_DAT_08ffc1c0);
  FUN_0403162c(PTR_DAT_08ffc1c8);
  FUN_0403162c(PTR_DAT_08ffc1d0);
  FUN_0403162c(PTR_DAT_08ffc1d8);
  FUN_0403162c(PTR_DAT_08ffc1e0);
  FUN_0403162c(PTR_DAT_08ffc1e8);
  FUN_0403162c(PTR_DAT_08ffc1f0);
  FUN_0403162c(PTR_DAT_08ffc1f8);
  FUN_0403162c(PTR_DAT_08ffc200);
  FUN_0403162c(PTR_DAT_08ffc208);
  FUN_0403162c(PTR_DAT_08ffc210);
  FUN_0403162c(PTR_DAT_08ffc218);
  FUN_0403162c(PTR_DAT_08ffc220);
  FUN_0403162c(PTR_DAT_08ffc228);
  FUN_0403162c(PTR_DAT_08ffc230);
  FUN_0403162c(PTR_DAT_08ffc238);
  FUN_0403162c(PTR_DAT_08ffc240);
  FUN_0403162c(PTR_DAT_08ffc248);
  FUN_0403162c(PTR_DAT_08ffc250);
  FUN_0403162c(PTR_DAT_08ffc258);
  FUN_0403162c(PTR_DAT_08ffc260);
  FUN_0403162c(PTR_DAT_08ffc268);
  FUN_0403162c(PTR_DAT_08ffc270);
  FUN_0403162c(PTR_DAT_08ffc278);
  FUN_0403162c(PTR_DAT_08ffc280);
  FUN_0403162c(PTR_DAT_08ffc288);
  FUN_0403162c(PTR_DAT_08ffc290);
  FUN_0403162c(PTR_DAT_08ffc298);
  FUN_0403162c(PTR_DAT_08ffc2a0);
  FUN_0403162c(PTR_DAT_08ffc2a8);
  FUN_0403162c(PTR_DAT_08ffc2b0);
  FUN_0403162c(PTR_DAT_08ffc2b8);
  FUN_0403162c(PTR_DAT_08ffc2c0);
  FUN_0403162c(PTR_DAT_08ffc2c8);
  FUN_0403162c(PTR_DAT_08ffc2d0);
  FUN_0403162c(PTR_DAT_08ffc2d8);
  FUN_0403162c(PTR_DAT_08ffc2e0);
  FUN_0403162c(PTR_DAT_08ffc2e8);
  FUN_0403162c(PTR_DAT_08ffc2f0);
  FUN_0403162c(PTR_DAT_08ffc2f8);
  FUN_0403162c(PTR_DAT_08ffc300);
  FUN_0403162c(PTR_DAT_08ffc308);
  FUN_0403162c(PTR_DAT_08ffc310);
  FUN_0403162c(PTR_DAT_08ffc318);
  FUN_0403162c(PTR_DAT_08ffc320);
  FUN_0403162c(PTR_DAT_08ffc328);
  FUN_0403162c(PTR_DAT_08ffc330);
  FUN_0403162c(PTR_DAT_08ffc338);
  FUN_0403162c(PTR_DAT_08ffc340);
  FUN_0403162c(PTR_DAT_08ffc348);
  FUN_0403162c(PTR_DAT_08ffc350);
  FUN_0403162c(PTR_DAT_08ffc358);
  FUN_0403162c(PTR_DAT_08ffbff0);
  FUN_0403162c(PTR_DAT_08ffbfe8);
  FUN_0403162c(PTR_DAT_08faa7a8);
  FUN_0403162c(PTR_DAT_08fc3130);
  *(undefined1 *)(unaff_x24 + 0xfc6) = 1;
  FUN_08361f80();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar1 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  if (puVar3[1] == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ed0);
    FUN_0534ff0c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffbff8,0);
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = uVar2;
  }
  if (unaff_x19 != 0) {
    FUN_04a1d708();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[2] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ff0);
      FUN_05350660(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc098,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar2;
    }
    FUN_04a1ea10();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[3] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d50);
      FUN_053502e0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0f0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = uVar2;
    }
    FUN_04a1e08c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[4] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9df8);
      FUN_053508b8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc148,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = uVar2;
    }
    FUN_04a1f068();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[5] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d80);
      FUN_0535040c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1a0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar2;
    }
    FUN_04a1e3b8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[6] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9cc0);
      FUN_053509e4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1f8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30) = uVar2;
    }
    FUN_04a1f394();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[7] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d78);
      System_Action<int,_object,_float>__BeginInvoke(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc250,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38) = uVar2;
    }
    FUN_04a1e6e4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[8] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e98);
      FUN_05350b10(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2a8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40) = uVar2;
    }
    FUN_04a1f6c0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[9] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d38);
      FUN_0535078c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc300,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48) = uVar2;
    }
    FUN_04a1ed3c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[10] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e58);
      FUN_05350038(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc358,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50) = uVar2;
    }
    FUN_04a1da34();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0xb] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9db8);
      FUN_053501b4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc048,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x58) = uVar2;
    }
    FUN_04a1dd60();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0xc] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ef0);
      FUN_05358930(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc050,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60) = uVar2;
    }
    FUN_04a29558();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0xd] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f08);
      FUN_05359084(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc058,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x68) = uVar2;
    }
    FUN_04a2a860();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0xe] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9eb8);
      FUN_05358d04(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc060,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x70) = uVar2;
    }
    FUN_04a29edc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0xf] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ee8);
      FUN_053592dc(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc068,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78) = uVar2;
    }
    FUN_04a2aeb8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x10] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9dd8);
      FUN_05358e30(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc070,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80) = uVar2;
    }
    FUN_04a2a208();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x11] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d40);
      FUN_05359408(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc078,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x88) = uVar2;
    }
    FUN_04a2b1e4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x12] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d90);
      FUN_05358f5c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc080,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x90) = uVar2;
    }
    FUN_04a2a534();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x13] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ef8);
      FUN_053591b0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc088,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x98) = uVar2;
    }
    FUN_04a2ab8c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x14] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fc0);
      FUN_05358a5c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc090,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa0) = uVar2;
    }
    FUN_04a29884();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x15] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ffa000);
      FUN_05358bd8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0a0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xa8) = uVar2;
    }
    FUN_04a29bb0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x16] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9cf0);
      FUN_05352c74(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0a8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb0) = uVar2;
    }
    FUN_04a23630();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x17] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d30);
      FUN_053533c8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0b0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xb8) = uVar2;
    }
    FUN_04a24938();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x18] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fa8);
      FUN_05353048(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0b8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc0) = uVar2;
    }
    FUN_04a23fb4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x19] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f00);
      FUN_05353620(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0c0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 200) = uVar2;
    }
    FUN_04a24f90();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x1a] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9eb0);
      FUN_05353174(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0c8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0) = uVar2;
    }
    FUN_04a242e0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x1b] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e40);
      FUN_0535374c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0d0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd8) = uVar2;
    }
    FUN_04a252bc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x1c] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f90);
      FUN_053532a0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0d8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe0) = uVar2;
    }
    FUN_04a2460c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x1d] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ffa010);
      FUN_053534f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0e0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe8) = uVar2;
    }
    FUN_04a24c64();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x1e] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d20);
      FUN_05352da0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0e8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf0) = uVar2;
    }
    FUN_04a2395c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x1f] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f60);
      FUN_05352f1c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc0f8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0xf8) = uVar2;
    }
    FUN_04a23c88();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x20] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d00);
      FUN_0535a9e0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc100,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x100) = uVar2;
    }
    FUN_04a2d4c8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x21] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e70);
      FUN_0535b134(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc108,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x108) = uVar2;
    }
    FUN_04a2e7d0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x22] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d58);
      FUN_0535adb4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc110,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x110) = uVar2;
    }
    FUN_04a2de4c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x23] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e68);
      FUN_0535b38c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc118,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x118) = uVar2;
    }
    FUN_04a2ee28();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x24] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fb0);
      FUN_0535aee0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc120,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x120) = uVar2;
    }
    FUN_04a2e178();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x25] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e90);
      FUN_0535b4b8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc128,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x128) = uVar2;
    }
    FUN_04a2f154();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x26] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e18);
      FUN_0535b00c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc130,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x130) = uVar2;
    }
    FUN_04a2e4a4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x27] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ff8);
      FUN_0535b5e4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc138,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x138) = uVar2;
    }
    FUN_04a2f480();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x28] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f48);
      FUN_0535b260(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc140,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x140) = uVar2;
    }
    FUN_04a2eafc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x29] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9cc8);
      FUN_0535ab0c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc150,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x148) = uVar2;
    }
    FUN_04a2d7f4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x2a] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d08);
      FUN_0535ac88(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc158,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x150) = uVar2;
    }
    FUN_04a2db20();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x2b] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f40);
      FUN_05353878(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc160,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x158) = uVar2;
    }
    FUN_04a255e8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x2c] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e38);
      FUN_053544a4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc168,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x160) = uVar2;
    }
    FUN_04a268f0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x2d] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ec8);
      FUN_05353c4c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc170,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x168) = uVar2;
    }
    FUN_04a25f6c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x2e] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e50);
      FUN_053546fc(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc178,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x170) = uVar2;
    }
    FUN_04a26f48();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x2f] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f18);
      FUN_05353ebc(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc180,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x178) = uVar2;
    }
    FUN_04a26298();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x30] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d18);
      FUN_05354828(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc188,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x180) = uVar2;
    }
    FUN_04a27274();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x31] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9cf8);
      FUN_05353fe4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc190,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x188) = uVar2;
    }
    FUN_04a265c4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x32] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d48);
      FUN_053545d0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc198,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 400) = uVar2;
    }
    FUN_04a26c1c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x33] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9de8);
      FUN_053539a4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1a8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x198) = uVar2;
    }
    FUN_04a25914();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x34] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f20);
      FUN_05353b20(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1b0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0) = uVar2;
    }
    FUN_04a25c40();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x35] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ffa020);
      FUN_0535b70c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1b8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a8) = uVar2;
    }
    FUN_04a2f7ac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x36] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ec0);
      FUN_0535be5c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1c0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0) = uVar2;
    }
    FUN_04a30ab4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x37] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9dc8);
      FUN_0535bae0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1c8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b8) = uVar2;
    }
    FUN_04a30130();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x38] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9df0);
      FUN_0535c0b4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1d0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c0) = uVar2;
    }
    FUN_04a3110c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x39] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9cd8);
      FUN_0535bc0c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1d8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c8) = uVar2;
    }
    FUN_04a3045c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x3a] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f28);
      FUN_0535c1e0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1e0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d0) = uVar2;
    }
    FUN_04a31438();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x3b] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d68);
      FUN_0535bd34(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1e8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8) = uVar2;
    }
    FUN_04a30788();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x3c] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e48);
      UnityEngine_UIElements_StylePropertyAnimationSystem_AnimationDataSet<StylePropertyAnimationSystem_Values_EmptyData<Color>,_Color>__set_capacity
                (uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc1f0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1e0) = uVar2;
    }
    FUN_04a31764();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x3d] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ce8);
      FUN_0535bf88(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc200,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1e8) = uVar2;
    }
    FUN_04a30de0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x3e] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f50);
      FUN_0535b838(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc208,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1f0) = uVar2;
    }
    FUN_04a2fad8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x3f] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ed8);
      FUN_0535b9b4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc210,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1f8) = uVar2;
    }
    FUN_04a2fe04();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x40] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d60);
      FUN_05354c14(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc218,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x200) = uVar2;
    }
    FUN_04a275a0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x41] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9dc0);
      FUN_05355358(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc220,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x208) = uVar2;
    }
    FUN_04a288a8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x42] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f80);
      FUN_05354fe0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc228,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x210) = uVar2;
    }
    FUN_04a27f24();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x43] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e08);
      FUN_053555a8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc230,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x218) = uVar2;
    }
    FUN_04a28f00();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x44] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ea0);
      FUN_05355108(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc238,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x220) = uVar2;
    }
    FUN_04a28250();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x45] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d28);
      FUN_053556d0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc240,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x228) = uVar2;
    }
    FUN_04a2922c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x46] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e60);
      FUN_05355230(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc248,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x230) = uVar2;
    }
    FUN_04a2857c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x47] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ffa018);
      FUN_05355480(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc258,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x238) = uVar2;
    }
    FUN_04a28bd4();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x48] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e10);
      FUN_05354d3c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc260,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x240) = uVar2;
    }
    FUN_04a278cc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x49] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d70);
      FUN_05354eb8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc268,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x248) = uVar2;
    }
    FUN_04a27bf8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x4a] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f68);
      FUN_0535c430(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc270,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x250) = uVar2;
    }
    FUN_04a31a90();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x4b] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d88);
      FUN_0535cde0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc278,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 600) = uVar2;
    }
    FUN_04a33574();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x4c] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fe0);
      FUN_0535cf08(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc280,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x260) = uVar2;
    }
    FUN_04a338a0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x4d] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ea8);
      FUN_0535d030(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc288,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x268) = uVar2;
    }
    FUN_04a33bcc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x4e] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9da0);
      FUN_0535ccb8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc290,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x270) = uVar2;
    }
    FUN_04a33248();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x4f] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f58);
      FUN_0535c69c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc298,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x278) = uVar2;
    }
    FUN_04a31dbc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x50] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e00);
      FUN_0535c818(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2a0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x280) = uVar2;
    }
    FUN_04a320e8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x51] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9da8);
      FUN_0535969c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2b0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x288) = uVar2;
    }
    FUN_04a2b510();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x52] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f78);
      FUN_05359c74(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2b8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x290) = uVar2;
    }
    FUN_04a2c4ec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x53] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fe8);
      FUN_053598f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2c0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x298) = uVar2;
    }
    FUN_04a2bb68();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x54] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ffa008);
      FUN_0535a150(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2c8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2a0) = uVar2;
    }
    FUN_04a2cb44();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x55] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f38);
      FUN_05359a20(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2d0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2a8) = uVar2;
    }
    FUN_04a2be94();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x56] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9de0);
      FUN_0535a27c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2d8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2b0) = uVar2;
    }
    FUN_04a2ce70();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x57] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9cd0);
      FUN_05359b4c(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2e0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2b8) = uVar2;
    }
    FUN_04a2c1c0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x58] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e88);
      FUN_0535a3a8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2e8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2c0) = uVar2;
    }
    FUN_04a2d19c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x59] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e30);
      FUN_05359ee4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2f0,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2c8) = uVar2;
    }
    FUN_04a2c818();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x5a] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fd8);
      FUN_053597c8(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc2f8,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2d0) = uVar2;
    }
    FUN_04a2b83c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x5b] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fc8);
      FUN_05350f04(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc308,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2d8) = uVar2;
    }
    FUN_04a1f9ec();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x5c] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fb8);
      FUN_05351668(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc310,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2e0) = uVar2;
    }
    FUN_04a209c8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x5d] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e80);
      FUN_053511f4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc318,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2e8) = uVar2;
    }
    FUN_04a20044();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x5e] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d98);
      FUN_053517e4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc320,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2f0) = uVar2;
    }
    Unity_Services_Analytics_Event__BakeEnum2String<Int32Enum>();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x5f] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9d10);
      FUN_05351370(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc328,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x2f8) = uVar2;
    }
    FUN_04a20370();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x60] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f30);
      FUN_05351960(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc330,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x300) = uVar2;
    }
    FUN_04a21020();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x61] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e28);
      FUN_053514ec(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc338,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x308) = uVar2;
    }
    FUN_04a2069c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x62] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9dd0);
      FUN_05351adc(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc340,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x310) = uVar2;
    }
    FUN_04a2134c();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[99] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9db0);
      FUN_05351080(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc348,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x318) = uVar2;
    }
    FUN_04a1fd18();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[100] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f70);
      FUN_05351c58(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc350,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 800) = uVar2;
    }
    FUN_04a21678();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x65] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e20);
      FUN_05352230(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc000,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x328) = uVar2;
    }
    FUN_04a22654();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x66] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ce0);
      FUN_05351eb0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc008,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x330) = uVar2;
    }
    FUN_04a21cd0();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x67] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9ee0);
      System_Action<object,_double,_long,_int>___ctor(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc010,0)
      ;
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x338) = uVar2;
    }
    FUN_04a22cac();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x68] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f98);
      FUN_05351fdc(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc018,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x340) = uVar2;
    }
    FUN_04a21ffc();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x69] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fd0);
      FUN_053525b4(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc020,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x348) = uVar2;
    }
    FUN_04a22fd8();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x6a] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f10);
      FUN_05352108(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc028,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x350) = uVar2;
    }
    FUN_04a22328();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x6b] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9fa0);
      FUN_053526e0(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc030,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x358) = uVar2;
    }
    FUN_04a23304();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x6c] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9f88);
      System_Action<int,_object,_int,_int>__Invoke(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc038,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x360) = uVar2;
    }
    FUN_04a22980();
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar1 = *unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb8);
    if (puVar3[0x6d] == 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
      }
      uVar4 = *puVar3;
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08ff9e78);
      FUN_05351d84(uVar2,uVar4,*(undefined8 *)PTR_DAT_08ffc040,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x368) = uVar2;
    }
    FUN_04a219a4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


