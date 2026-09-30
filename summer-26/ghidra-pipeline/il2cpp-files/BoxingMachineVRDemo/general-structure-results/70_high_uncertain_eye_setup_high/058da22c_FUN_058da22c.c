/*
FUNCTION_NAME: FUN_058da22c
ENTRY_POINT: 058da22c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_058da22c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  
  if ((DAT_06b80b28 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067860c8);
    FUN_02d6084c(PTR_DAT_067860d0);
    FUN_02d6084c(PTR_DAT_067860d8);
    FUN_02d6084c(PTR_DAT_067860e0);
    FUN_02d6084c(PTR_DAT_067860e8);
    FUN_02d6084c(PTR_DAT_067860f0);
    FUN_02d6084c(PTR_DAT_067860f8);
    FUN_02d6084c(PTR_DAT_06786100);
    FUN_02d6084c(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(PTR_DAT_067685a0);
    FUN_02d6084c(PTR_DAT_067685a8);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b80b28 = 1;
  }
  puVar3 = PTR_DAT_0675e1b8;
  if (param_3 == 0) goto LAB_058daad0;
  lVar11 = *(long *)(param_3 + 0x50);
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_0606a004(lVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar11 == 0) goto LAB_058daad0;
    uVar6 = FUN_0606a288(lVar11,0);
    uVar5 = FUN_058daf80(param_1,uVar6);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  if ((*(uint *)(param_2 + 4) & 0xfffffffd) == 0) {
    plVar13 = (long *)**(undefined8 **)(*(long *)PTR_DAT_067685a8 + 0xb8);
    if (plVar13 == (long *)0x0) goto LAB_058daad0;
    lVar9 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067685a0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
          goto FUN_058da3e4;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_067685a0,0x15);
FUN_058da3e4:
    uVar16 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    *(undefined4 *)(param_2 + 8) = uVar16;
    if (DAT_06b7297d == '\0') {
      FUN_02d6084c(PTR_DAT_06762360);
      DAT_06b7297d = '\x01';
    }
    uVar6 = **(undefined8 **)(*(long *)PTR_DAT_06762360 + 0xb8);
    *(undefined1 *)(param_3 + 0x145) = 0;
    *(undefined8 *)(param_3 + 0x10c) = uVar6;
    *(undefined8 *)(param_3 + 0x114) = *(undefined8 *)(param_3 + 0x104);
    memcpy((void *)(param_3 + 0xa0),(void *)(param_3 + 0x50),0x50);
    thunk_FUN_02dd37b4((void *)(param_3 + 0xa0),0);
    *(undefined1 *)(param_3 + 0xf8) = 1;
    *(undefined1 *)(param_3 + 0x144) = 1;
    puVar4 = PTR_DAT_06767fc8;
    if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_033c441c(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_058daad0;
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(uVar6,uVar14,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0606a004(uVar6,0,0);
      if (((uVar5 & 1) != 0) || (*(char *)(param_1 + 200) != '\0')) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_058daad0;
        FUN_0636a1c8(*(long *)(param_1 + 0x38),0,param_3,0);
      }
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7c2c3 == '\0') {
      FUN_02d6084c(PTR_DAT_06767fc8);
      DAT_06b7c2c3 = '\x01';
    }
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar9 = *(long *)puVar4;
    }
    uVar6 = FUN_033c4160(lVar11,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18),
                         *(undefined8 *)PTR_DAT_067860d0);
    uVar14 = FUN_033c441c(lVar11,*(undefined8 *)PTR_DAT_06786100);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar3);
    }
    uVar5 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
    uVar15 = *(undefined8 *)(param_3 + 0x30);
    uVar1 = uVar14;
    if ((uVar5 & 1) == 0) {
      uVar1 = uVar6;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar3);
    }
    uVar5 = UnityEngine_Font__add_textureRebuilt(uVar1,uVar15,0);
    fVar2 = DAT_01208660;
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x91) = 0;
      if (0 < *(int *)(param_3 + 0x138)) goto LAB_058da628;
    }
    else {
      fVar17 = *(float *)(param_2 + 8) - *(float *)(param_3 + 0x134);
      *(bool *)(param_2 + 0x91) = fVar17 <= DAT_01208660;
      if ((0 < *(int *)(param_3 + 0x138)) && (fVar2 < fVar17)) {
LAB_058da628:
        *(undefined8 *)(param_3 + 0x134) = 0;
      }
    }
    FUN_0636a964(param_3,uVar1,0);
    *(undefined8 *)(param_3 + 0x48) = uVar14;
    thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x48),uVar14);
    *(long *)(param_3 + 0x38) = lVar11;
    thunk_FUN_02dd37b4((long *)(param_3 + 0x38),lVar11);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_033c441c(lVar11,*(undefined8 *)PTR_DAT_067860f8);
    puVar7 = (undefined8 *)(param_3 + 0x40);
    *puVar7 = uVar6;
    thunk_FUN_02dd37b4(puVar7,uVar6);
    uVar6 = *puVar7;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = *puVar7;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b7c2c4 == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b7c2c4 = '\x01';
      }
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar9 = *(long *)puVar4;
      }
      FUN_033c3938(uVar6,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30),
                   *(undefined8 *)PTR_DAT_067860e0);
    }
  }
  puVar4 = PTR_DAT_06767fc8;
  if (1 < *(int *)(param_2 + 4) - 1U) goto LAB_058daa20;
  if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_033c441c(lVar11,*(undefined8 *)PTR_DAT_06786100);
  uVar14 = *(undefined8 *)(param_3 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar3);
  }
  uVar5 = FUN_0606a004(uVar14,0,0);
  if ((uVar5 & 1) == 0) {
LAB_058da7d8:
    bVar12 = true;
  }
  else {
    uVar14 = *(undefined8 *)(param_3 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = UnityEngine_Font__add_textureRebuilt(uVar14,uVar6,0);
    if (((uVar5 & 1) == 0) || (*(char *)(param_3 + 0xf8) == '\0')) goto LAB_058da7d8;
    if (*(char *)(param_2 + 0x91) == '\0') {
      iVar8 = 1;
    }
    else {
      iVar8 = *(int *)(param_3 + 0x138) + 1;
    }
    *(int *)(param_3 + 0x138) = iVar8;
    plVar13 = (long *)**(undefined8 **)(*(long *)PTR_DAT_067685a8 + 0xb8);
    if (plVar13 == (long *)0x0) {
LAB_058daad0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067685a0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
          goto LAB_058daab8;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)PTR_DAT_067685a0,0x15);
LAB_058daab8:
    uVar16 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    bVar12 = false;
    *(undefined4 *)(param_3 + 0x134) = uVar16;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b7c2c5 == '\0') {
    FUN_02d6084c(PTR_DAT_06767fc8);
    DAT_06b7c2c5 = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar9 = *(long *)puVar4;
  }
  FUN_033c3938(uVar6,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20),
               *(undefined8 *)PTR_DAT_067860f0);
  if (bVar12) {
    if (*(char *)(param_3 + 0x145) != '\0') {
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0606a004(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b7c2c7 == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b7c2c7 = '\x01';
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)puVar4;
        }
        FUN_033c4160(lVar11,param_3,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x50),
                     *(undefined8 *)PTR_DAT_067860c8);
      }
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7c2c6 == '\0') {
      FUN_02d6084c(PTR_DAT_06767fc8);
      DAT_06b7c2c6 = '\x01';
    }
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    FUN_033c3938(uVar6,param_3,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28),
                 *(undefined8 *)PTR_DAT_067860e8);
  }
  *(undefined1 *)(param_3 + 0xf8) = 0;
  FUN_0636a964(param_3,0,0);
  *(undefined8 *)(param_3 + 0x38) = 0;
  thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x38),0);
  if (*(char *)(param_3 + 0x145) != '\0') {
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b7c2c8 == '\0') {
        FUN_02d6084c(PTR_DAT_06767fc8);
        DAT_06b7c2c8 = '\x01';
      }
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar11 = *(long *)puVar4;
      }
      FUN_033c3938(uVar6,param_3,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x48),
                   *(undefined8 *)PTR_DAT_067860d8);
    }
  }
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined1 *)(param_3 + 0x145) = 0;
  thunk_FUN_02dd37b4((undefined8 *)(param_3 + 0x40),0);
  *(undefined1 *)(param_2 + 0x92) = 0;
LAB_058daa20:
  FUN_058db99c(param_2,param_3);
  return;
}


