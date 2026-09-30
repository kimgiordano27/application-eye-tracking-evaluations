/*
FUNCTION_NAME: FUN_0358ba64
ENTRY_POINT: 0358ba64
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_file_logging_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0358bd74) */

void FUN_0358ba64(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  if ((DAT_086d843b & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086d843b = 1;
  }
  if (*(char *)(param_4 + 0x11e) == '\0') {
    return;
  }
  uVar9 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a119fc(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    uVar9 = *(undefined8 *)(param_4 + 0xd0);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = FUN_07a119fc(uVar9,0,0);
    if ((uVar7 & 1) == 0) {
      lVar10 = *(long *)(param_4 + 0xd0);
      if (lVar10 == 0) goto LAB_0358c3c8;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar10 = (*DAT_086ef190)(lVar10);
      if (lVar10 == 0) goto LAB_0358c3c8;
      if (DAT_086ef288 == (code *)0x0) {
        DAT_086ef288 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeInHierarchy()");
      }
      uVar7 = (*DAT_086ef288)(lVar10);
      if ((uVar7 & 1) != 0) {
        lVar10 = *(long *)(param_4 + 0xd0);
        if (lVar10 == 0) goto LAB_0358c3c8;
        if (DAT_086ef160 == (code *)0x0) {
          DAT_086ef160 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_enabled()");
        }
        uVar7 = (*DAT_086ef160)(lVar10);
        if ((uVar7 & 1) != 0) goto LAB_0358bba8;
      }
    }
    FUN_0358b67c(param_4);
  }
LAB_0358bba8:
  uVar9 = *(undefined8 *)(param_4 + 0x40);
  uVar11 = *(undefined8 *)(param_4 + 200);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar9,uVar11,0);
  if ((uVar7 & 1) != 0) {
    FUN_0358a0b8(param_4);
  }
  if (*(char *)(param_4 + 0x11c) != '\0') {
    uVar9 = *(undefined8 *)(param_4 + 200);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = FUN_07a119fc(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      FUN_035891ec(param_4);
    }
  }
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a119fc(uVar9,0,0);
  fVar12 = 0.0;
  if ((uVar7 & 1) == 0) {
    if ((*(long *)(param_4 + 0xa0) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_4 + 0xa0) + 0x2b8), lVar10 == 0)) goto LAB_0358c3c8;
    fVar12 = (float)FUN_07a18d2c(lVar10,0);
    if (*(long *)(param_4 + 0xc0) == 0) goto LAB_0358c3c8;
    fVar17 = param_3;
    fVar14 = param_2;
    fVar13 = (float)FUN_07a18d2c(*(long *)(param_4 + 0xc0),0);
    if (DAT_086d7ff6 == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7ff6 = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar12 = SQRT((param_3 - fVar17) * (param_3 - fVar17) +
                  (fVar12 - fVar13) * (fVar12 - fVar13) + (param_2 - fVar14) * (param_2 - fVar14));
  }
  *(float *)(param_4 + 0x60) = fVar12;
  if (*(float *)(param_4 + 0xf8) < 0.0) {
    *(float *)(param_4 + 0xf8) = fVar12;
  }
  if (DAT_086ef698 == (code *)0x0) {
    DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
  }
  fVar12 = (float)(*DAT_086ef698)();
  if (0.0 < fVar12) {
    fVar12 = *(float *)(param_4 + 0xf8);
    fVar17 = *(float *)(param_4 + 0x60);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar14 = (float)(*DAT_086ef698)();
    fVar13 = *(float *)(param_4 + 0xfc);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar15 = (float)(*DAT_086ef698)();
    fVar15 = fVar15 + fVar15;
    if (fVar15 < 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(param_4 + 0xfc) = fVar13 + ((fVar12 - fVar17) / fVar14 - fVar13) * fVar15;
  }
  uVar5 = FUN_0358a780(param_4);
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cf7d8);
  }
  uVar6 = FUN_07a0d2c4(uVar9,0,0);
  if ((uVar5 & uVar6 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(float *)(param_4 + 0x60) < *(float *)(param_4 + 0x30);
  }
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4(uVar9,0,0);
  if ((uVar5 & uVar6 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(float *)(param_4 + 0x60) < *(float *)(param_4 + 0x34);
  }
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
LAB_0358bf28:
    bVar1 = false;
  }
  else {
    if (bVar1) {
      if (DAT_086ef688 == (code *)0x0) {
        DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
      }
      fVar17 = (float)(*DAT_086ef688)();
      fVar12 = DAT_012eda8c;
      if ((DAT_012eda8c < fVar17 - *(float *)(param_4 + 0x10c)) && (*(int *)(param_4 + 0x130) != 0))
      {
        if (DAT_086ef688 == (code *)0x0) {
          DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
        }
        uVar16 = (*DAT_086ef688)();
        fVar14 = (*(float *)(param_4 + 0x30) - *(float *)(param_4 + 0x60)) /
                 *(float *)(param_4 + 0x30);
        fVar17 = fVar14;
        if (1.0 < fVar14) {
          fVar17 = 1.0;
        }
        fVar17 = fVar17 * DAT_012edd54 + fVar12;
        if (fVar14 < 0.0) {
          fVar17 = fVar12;
        }
        *(undefined4 *)(param_4 + 0x10c) = uVar16;
        if ((0.0 < *(float *)(param_4 + 0xfc)) && (1.0 < *(float *)(param_4 + 0x114))) {
          if (DAT_086ef0a8 == (code *)0x0) {
            DAT_086ef0a8 = (code *)FUN_033d1b68("UnityEngine.Random::get_value()");
          }
          fVar12 = (float)(*DAT_086ef0a8)();
          bVar1 = fVar12 < fVar17;
          goto LAB_0358bf2c;
        }
      }
      goto LAB_0358bf28;
    }
    fVar12 = *(float *)(param_4 + 0x114);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar17 = (float)(*DAT_086ef698)();
    bVar1 = false;
    *(float *)(param_4 + 0x114) = fVar12 + fVar17;
  }
LAB_0358bf2c:
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    bVar3 = false;
  }
  else {
    if (bVar2) {
      fVar12 = *(float *)(param_4 + 0x118);
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar17 = (float)(*DAT_086ef698)();
      fVar14 = (*(float *)(param_4 + 0x34) - *(float *)(param_4 + 0x60)) /
               (*(float *)(param_4 + 0x34) * 0.5);
      bVar3 = fVar14 < 0.0;
      if (1.0 < fVar14) {
        fVar14 = 1.0;
      }
      if (bVar3) {
        fVar14 = 0.0;
      }
      fVar12 = fVar12 + fVar17 * fVar14;
      bVar3 = 1.0 <= fVar12;
      *(float *)(param_4 + 0x118) = fVar12;
      if (*(char *)(param_4 + 0x11f) == '\0') {
        if (*(long *)(param_4 + 0x78) == 0) goto LAB_0358c3c8;
        FUN_07a22574(*(long *)(param_4 + 0x78),0);
      }
    }
    else {
      bVar3 = false;
      *(undefined4 *)(param_4 + 0x118) = 0;
    }
    *(bool *)(param_4 + 0x11f) = bVar2;
  }
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  bVar4 = FUN_07a0d2c4(uVar9,0,0);
  if (((bVar3 & bVar4) == 1) && (*(int *)(param_4 + 0x130) != 3)) {
    FUN_0358af88(param_4);
    return;
  }
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar9,0,0);
  if (((uVar7 & 1) == 0) || (*(float *)(param_4 + 0x2c) <= 0.0)) {
LAB_0358c2ac:
    bVar2 = false;
  }
  else {
    uVar9 = *(undefined8 *)(param_4 + 0xc0);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = FUN_07a0d2c4(uVar9,0,0);
    if ((uVar7 & 1) == 0) goto LAB_0358c2ac;
    if (*(long *)(param_4 + 0xa0) == 0) goto LAB_0358c3c8;
    fVar17 = (float)FUN_036bf16c(*(long *)(param_4 + 0xa0),*(undefined8 *)(param_4 + 0xc0),0);
    uVar6 = FUN_0358a88c(param_4);
    fVar12 = *(float *)(param_4 + 0x100);
    if ((uVar5 & uVar6 & 1) == 0) {
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar17 = (float)(*DAT_086ef698)();
      fVar12 = fVar12 - fVar17;
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
    }
    else {
      fVar17 = cosf(fVar17 * DAT_012edabc);
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar14 = (float)(*DAT_086ef698)();
      fVar12 = fVar12 + fVar17 * fVar14;
      if (10.0 < fVar12) {
        fVar12 = 10.0;
      }
    }
    *(float *)(param_4 + 0x100) = fVar12;
    if (*(long *)(param_4 + 0xa0) == 0) goto LAB_0358c3c8;
    if (*(int *)(*(long *)(param_4 + 0xa0) + 0x3a8) == 7) goto LAB_0358c2ac;
    fVar12 = *(float *)(param_4 + 0x108);
    if (0.0 < fVar12) {
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar17 = (float)(*DAT_086ef698)();
      fVar12 = fVar12 - fVar17;
      *(float *)(param_4 + 0x108) = fVar12;
    }
    if (0.0 < fVar12) {
LAB_0358c224:
      uVar5 = 0;
    }
    else {
      if (DAT_086ef688 == (code *)0x0) {
        DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
      }
      fVar12 = (float)(*DAT_086ef688)();
      if ((fVar12 - *(float *)(param_4 + 0x110) <= DAT_012eda8c) ||
         (*(float *)(param_4 + 0x100) <= 4.0)) goto LAB_0358c224;
      plVar8 = *(long **)(param_4 + 0xa0);
      if (plVar8 == (long *)0x0) goto LAB_0358c3c8;
      uVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      uVar5 = uVar5 & 1;
    }
    if ((uVar5 & uVar6 & 1) == 0) goto LAB_0358c2ac;
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    uVar16 = (*DAT_086ef688)();
    fVar17 = *(float *)(param_4 + 0x100);
    *(undefined4 *)(param_4 + 0x110) = uVar16;
    fVar12 = *(float *)(param_4 + 0x2c);
    if (10.0 < fVar17) {
      fVar17 = 10.0;
    }
    if (DAT_086ef0a8 == (code *)0x0) {
      DAT_086ef0a8 = (code *)FUN_033d1b68("UnityEngine.Random::get_value()");
    }
    fVar14 = (float)(*DAT_086ef0a8)();
    bVar2 = fVar14 < ((fVar12 + fVar12) * (fVar17 + -4.0)) / 6.0;
  }
  if (0.0 <= *(float *)(param_4 + 0x104)) {
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    fVar12 = (float)(*DAT_086ef688)();
    if (*(float *)(param_4 + 0x104) <= fVar12) {
      plVar8 = *(long **)(param_4 + 0xa0);
      if (plVar8 == (long *)0x0) {
LAB_0358c3c8:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar7 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if ((uVar7 & 1) != 0) {
        FUN_0358b99c(param_4,bVar3);
        return;
      }
    }
  }
  uVar9 = *(undefined8 *)(param_4 + 0xc0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar7 = FUN_07a0d2c4(uVar9,0,0);
  if ((bVar2 || bVar1) && ((uVar7 & 1) != 0)) {
    fVar17 = *(float *)(param_4 + 0x38);
    fVar14 = *(float *)(param_4 + 0x3c);
    fVar12 = fVar17;
    if (fVar14 <= fVar17) {
      fVar12 = fVar14;
    }
    if (fVar17 <= fVar14) {
      fVar17 = fVar14;
    }
    if (DAT_086ef098 == (code *)0x0) {
      DAT_086ef098 = (code *)FUN_033d1b68("UnityEngine.Random::Range(System.Single,System.Single)");
    }
    uVar9 = (*DAT_086ef098)(fVar12,fVar17);
    FUN_0358a94c(uVar9,DAT_012ede0c,param_4);
  }
  *(undefined4 *)(param_4 + 0xf8) = *(undefined4 *)(param_4 + 0x60);
  return;
}


