/*
FUNCTION_NAME: Zenject.ConventionAssemblySelectionBinder.<>c__DisplayClass12_0$$.ctor
ENTRY_POINT: 06064558
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Zenject_ConventionAssemblySelectionBinder_<>c__DisplayClass12_0___ctor(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ddab0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ddab8);
  AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_TextureRequest_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (UnityEngine_Experimental_Rendering_RenderGraphModule_TexturePool_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_TextureRequestPromiseKeeper_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x896) = 1;
  if (*(long *)(unaff_x19 + 0x408) == 0) goto LAB_060658b4;
  iVar5 = FUN_060d4a90(*(long *)(unaff_x19 + 0x408),0);
  puVar4 = PTR_DAT_065e02c0;
  if (iVar5 != 2) {
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05eb30e4(*(undefined8 *)
                  UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_TypeInfo,0);
    return;
  }
  lVar14 = *(long *)(unaff_x19 + 0x3f8);
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e02c0);
  FUN_04a03924();
  if (lVar14 == 0) goto LAB_060658b4;
  FUN_0338dbd0(lVar14,uVar6,0,*(undefined8 *)PTR_DAT_065e02f8);
  uVar7 = FUN_04db9688(*(undefined8 *)(unaff_x19 + 0x58),0);
  lVar14 = 0x418;
  if ((uVar7 & 1) == 0) {
    lVar14 = 1000;
  }
  if ((*(float *)(unaff_x19 + lVar14) < 0.0) &&
     (*(float *)(unaff_x19 + 1000) != *(float *)(unaff_x19 + 0x418))) {
    *(float *)(unaff_x19 + 1000) = *(float *)(unaff_x19 + 0x418);
    FUN_060d0838();
  }
  uVar7 = FUN_04db9688(*(undefined8 *)(unaff_x19 + 0x58),0);
  lVar14 = 0x418;
  if ((uVar7 & 1) == 0) {
    lVar14 = 1000;
  }
  uVar20 = *(undefined4 *)(unaff_x19 + lVar14);
  FUN_06065c20();
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  auVar22 = FUN_060dad7c(1,0);
  puVar3 = PTR_DAT_065ddab8;
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065ddab8) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
        goto LAB_06064750;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065ddab8,0x13);
LAB_06064750:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  uVar6 = FUN_060dadec(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
        goto LAB_060647dc;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x16);
LAB_060647dc:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  uVar6 = FUN_060dadec(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
        goto LAB_06064864;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x15);
LAB_06064864:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  uVar6 = FUN_060dadec(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
        goto LAB_060648ec;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x15);
LAB_060648ec:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  uVar6 = FUN_060dadec(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
        goto Zenject_ConventionBindInfo_<>c__DisplayClass7_0___ctor;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x16);
Zenject_ConventionBindInfo_<>c__DisplayClass7_0___ctor:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  auVar22 = FUN_060dad7c(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
        goto LAB_06064a04;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x13);
LAB_06064a04:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  auVar22 = FUN_060dad7c(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
        goto LAB_06064a98;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x36);
LAB_06064a98:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  auVar22 = FUN_060dad7c(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
        goto LAB_06064b2c;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x18);
LAB_06064b2c:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  auVar22 = FUN_060dad7c(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
        goto LAB_06064bc0;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x36);
LAB_06064bc0:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  auVar22 = FUN_060dad7c(1,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
        goto Zenject_ConventionFilterTypesBinder__DerivingFrom;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x18);
Zenject_ConventionFilterTypesBinder__DerivingFrom:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  iVar5 = *(int *)(unaff_x19 + 0x410);
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  if (iVar5 == 0) {
    auVar22 = FUN_060dca64(uVar20,0);
    if (plVar8 == (long *)0x0) goto LAB_060658b4;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
          goto LAB_06064dd4;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x36);
LAB_06064dd4:
    (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
    plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
    auVar22 = FUN_060dad7c(1,0);
    uVar6 = auVar22._0_8_;
    if (plVar8 == (long *)0x0) goto LAB_060658b4;
    lVar13 = *plVar8;
    lVar14 = *(long *)puVar3;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar15 = auVar22._8_8_ & 0xffffffff;
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) goto LAB_06064e58;
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    auVar22 = FUN_060dad7c(1,0);
    if (plVar8 == (long *)0x0) goto LAB_060658b4;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
          goto LAB_06064d4c;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x36);
LAB_06064d4c:
    (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
    plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
    auVar22 = FUN_060dca64(uVar20,0);
    uVar6 = auVar22._0_8_;
    if (plVar8 == (long *)0x0) goto LAB_060658b4;
    lVar13 = *plVar8;
    lVar14 = *(long *)puVar3;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar15 = auVar22._8_8_ & 0xffffffff;
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) goto LAB_06064e58;
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,lVar14,0x18);
  goto LAB_06064e68;
LAB_06064e58:
  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
LAB_06064e68:
  (*(code *)*puVar9)(plVar8,uVar6,uVar15,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  uVar6 = FUN_060dc324(0,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
        goto LAB_06064ef4;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x16);
LAB_06064ef4:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3d8),0);
  uVar6 = FUN_060dc324(0,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
        goto LAB_06064f7c;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x15);
LAB_06064f7c:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  uVar6 = FUN_060dc324(0x3f800000,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
        goto LAB_06065004;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x15);
LAB_06065004:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  uVar6 = FUN_060dc324(0,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
        goto LAB_0606508c;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x16);
LAB_0606508c:
  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3e0),0);
  auVar22 = FUN_060dca64(0,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
        goto LAB_0606511c;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x13);
LAB_0606511c:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3f8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3f8),0);
  auVar22 = FUN_060dca64(0,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x19) * 0x10 + 0x138);
        goto LAB_060651b0;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x19);
LAB_060651b0:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3f8) == 0) goto LAB_060658b4;
  plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3f8),0);
  auVar22 = FUN_060dca64(0,0);
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar14 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x2d) * 0x10 + 0x138);
        goto LAB_06065244;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0x2d);
LAB_06065244:
  (*(code *)*puVar9)(plVar8,auVar22._0_8_,auVar22._8_8_ & 0xffffffff,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x3d8) == 0) goto LAB_060658b4;
  iVar5 = *(int *)(unaff_x19 + 0x410);
  plVar8 = (long *)FUN_060c6ca4(*(long *)(unaff_x19 + 0x3d8),0);
  puVar2 = PTR_DAT_065ddab0;
  if (plVar8 == (long *)0x0) goto LAB_060658b4;
  lVar13 = *plVar8;
  uVar1 = *(ushort *)(lVar13 + 0x12e);
  uVar7 = (ulong)uVar1;
  lVar14 = *(long *)PTR_DAT_065ddab0;
  if (iVar5 == 0) {
    if (uVar1 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
          goto LAB_06065560;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,lVar14,0x16);
LAB_06065560:
    fVar16 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((*(long *)(unaff_x19 + 0x3d8) == 0) ||
       (plVar8 = (long *)FUN_060c6ca4(*(long *)(unaff_x19 + 0x3d8),0), plVar8 == (long *)0x0))
    goto LAB_060658b4;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
          goto LAB_060655d8;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0x17);
LAB_060655d8:
    fVar17 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x3f8) == 0) goto LAB_060658b4;
    iVar5 = *(int *)(unaff_x19 + 0x414);
    plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3f8),0);
    if (iVar5 == 0) {
      auVar22 = FUN_060dca64(fVar16 + fVar17 + *(float *)(unaff_x19 + 0x418),0);
      uVar6 = auVar22._0_8_;
      if (plVar8 == (long *)0x0) goto LAB_060658b4;
      lVar13 = *plVar8;
      lVar14 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar15 = auVar22._8_8_ & 0xffffffff;
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar14) goto LAB_060657a8;
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
    }
    else {
      plVar10 = (long *)FUN_060c6ca4();
      if (plVar10 == (long *)0x0) goto LAB_060658b4;
      lVar14 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x2c) * 0x10 + 0x138);
            goto LAB_060656bc;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,0x2c);
LAB_060656bc:
      fVar18 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (*(long *)(unaff_x19 + 0x3f8) == 0) goto LAB_060658b4;
      fVar21 = *(float *)(unaff_x19 + 0x418);
      plVar10 = (long *)FUN_060c6ca4(*(long *)(unaff_x19 + 0x3f8),0);
      if (plVar10 == (long *)0x0) goto LAB_060658b4;
      lVar14 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x2c) * 0x10 + 0x138);
            goto LAB_06065738;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,0x2c);
LAB_06065738:
      fVar19 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
      auVar22 = FUN_060dca64(((fVar18 - (fVar16 + fVar17)) - fVar21) - fVar19,0);
      uVar6 = auVar22._0_8_;
      if (plVar8 == (long *)0x0) goto LAB_060658b4;
      lVar13 = *plVar8;
      lVar14 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar15 = auVar22._8_8_ & 0xffffffff;
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar14) goto LAB_060657a8;
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
    }
    uVar11 = 0x19;
  }
  else {
    if (uVar1 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
          goto LAB_06065304;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,lVar14,0x18);
LAB_06065304:
    fVar16 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((*(long *)(unaff_x19 + 0x3d8) == 0) ||
       (plVar8 = (long *)FUN_060c6ca4(*(long *)(unaff_x19 + 0x3d8),0), plVar8 == (long *)0x0))
    goto LAB_060658b4;
    lVar14 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
          goto LAB_0606537c;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0x15);
LAB_0606537c:
    fVar17 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x3f8) == 0) goto LAB_060658b4;
    iVar5 = *(int *)(unaff_x19 + 0x414);
    plVar8 = (long *)FUN_060ca43c(*(long *)(unaff_x19 + 0x3f8),0);
    if (iVar5 == 0) {
      auVar22 = FUN_060dca64(fVar16 + fVar17 + *(float *)(unaff_x19 + 0x418),0);
      uVar6 = auVar22._0_8_;
      if (plVar8 == (long *)0x0) goto LAB_060658b4;
      lVar13 = *plVar8;
      lVar14 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar15 = auVar22._8_8_ & 0xffffffff;
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar14) goto LAB_06065544;
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
    }
    else {
      plVar10 = (long *)FUN_060c6ca4();
      if (plVar10 == (long *)0x0) goto LAB_060658b4;
      lVar14 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
            goto LAB_06065460;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,0x13);
LAB_06065460:
      fVar18 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (*(long *)(unaff_x19 + 0x3f8) == 0) goto LAB_060658b4;
      fVar21 = *(float *)(unaff_x19 + 0x418);
      plVar10 = (long *)FUN_060c6ca4(*(long *)(unaff_x19 + 0x3f8),0);
      if (plVar10 == (long *)0x0) goto LAB_060658b4;
      lVar14 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
            goto LAB_060654dc;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,0x13);
LAB_060654dc:
      fVar19 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
      auVar22 = FUN_060dca64(((fVar18 - (fVar16 + fVar17)) - fVar21) - fVar19,0);
      uVar6 = auVar22._0_8_;
      if (plVar8 == (long *)0x0) goto LAB_060658b4;
      lVar13 = *plVar8;
      lVar14 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar15 = auVar22._8_8_ & 0xffffffff;
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar14) goto LAB_06065544;
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
    }
    uVar11 = 0x2d;
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,lVar14,uVar11);
  goto LAB_060657b8;
LAB_060657a8:
  iVar5 = *piVar12 + 0x19;
  goto LAB_060657b0;
LAB_06065544:
  iVar5 = *piVar12 + 0x2d;
LAB_060657b0:
  puVar9 = (undefined8 *)(lVar13 + (long)iVar5 * 0x10 + 0x138);
LAB_060657b8:
  (*(code *)*puVar9)(plVar8,uVar6,uVar15,puVar9[1]);
  if (*(long *)(unaff_x19 + 0x420) != 0) {
    FUN_05ff0cb0(*(undefined8 *)(unaff_x19 + 0x3f8),*(long *)(unaff_x19 + 0x420),0);
  }
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)Niantic_Peridot_TextureRequest_TypeInfo);
  FUN_06065c94();
  *(undefined8 *)(unaff_x19 + 0x420) = uVar6;
  FUN_05ff0c04(*(undefined8 *)(unaff_x19 + 0x3f8),uVar6,0);
  thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_04a03924();
  puVar3 = PTR_DAT_065e02b8;
  FUN_0338d850();
  lVar14 = *(long *)(unaff_x19 + 0x3f8);
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_04a03924();
  if (lVar14 != 0) {
    FUN_0338d850(lVar14,uVar6,0,*(undefined8 *)puVar3);
    return;
  }
LAB_060658b4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


