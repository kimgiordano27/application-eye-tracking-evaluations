/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 06d088a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeToken(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x24;
  
  FUN_03c8f898(PTR_DAT_08e8c808);
  FUN_03c8f898(PTR_DAT_08e8c810);
  FUN_03c8f898(PTR_DAT_08e8c818);
  FUN_03c8f898(PTR_DAT_08e8c820);
  FUN_03c8f898(PTR_DAT_08e8c828);
  FUN_03c8f898(PTR_DAT_08e8c830);
  FUN_03c8f898(PTR_DAT_08e8c838);
  *(undefined1 *)(unaff_x20 + 0x69c) = 1;
  lVar8 = *unaff_x24;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e8c7d0;
  lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  puVar2 = PTR_DAT_08e68f00;
  uVar3 = FUN_0861ce54(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    plVar9 = (long *)(unaff_x19 + 0x50);
    lVar5 = *plVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar3 = FUN_085dfaac(lVar5,0,0);
    puVar1 = PTR_DAT_08e6f5f8;
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06d09614;
      plVar10 = *(long **)(unaff_x19 + 0x48);
      lVar5 = FUN_0469ce58(*(long *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_08e6f5f8);
      if ((lVar5 == 0) || (uVar4 = FUN_085dbb98(lVar5,0), plVar10 == (long *)0x0))
      goto LAB_06d09614;
      uVar3 = (**(code **)(*plVar10 + 600))(plVar10,uVar4,*(undefined8 *)(*plVar10 + 0x260));
      if ((uVar3 & 1) != 0) {
        lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6c3c0,1);
        if (((*plVar9 == 0) || (lVar8 = FUN_0469ce58(*plVar9,*(undefined8 *)puVar1), lVar8 == 0)) ||
           (uVar4 = FUN_085dbb98(lVar8,0), lVar5 == 0)) goto LAB_06d09614;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06d09618;
        *(undefined8 *)(lVar5 + 0x20) = uVar4;
        thunk_FUN_03d233cc();
        plVar10 = *(long **)(unaff_x19 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_06d09614;
        (**(code **)(*plVar10 + 0x218))(plVar10,0,lVar5,1,*(undefined8 *)(*plVar10 + 0x220));
        plVar10 = *(long **)(unaff_x19 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_06d09614;
        (**(code **)(*plVar10 + 0x238))(plVar10,0,*(undefined8 *)(*plVar10 + 0x240));
        lVar5 = *plVar9;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085e3508(lVar5,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085a3c50(*(undefined8 *)PTR_DAT_08e8c7d8,0);
        *plVar9 = 0;
        thunk_FUN_03d233cc(plVar9,0);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06d09614;
      FUN_085dee20(*(long *)(unaff_x19 + 0x40),0);
      uVar4 = FUN_06d0961c();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar2);
      }
      lVar5 = FUN_0476e7ec(uVar11,*(undefined8 *)PTR_DAT_08e69dd0);
      *plVar9 = lVar5;
      thunk_FUN_03d233cc(plVar9,lVar5);
      if ((*plVar9 == 0) || (lVar5 = FUN_085dee20(*plVar9,0), lVar5 == 0)) goto LAB_06d09614;
      FUN_085eba08(lVar5,uVar4,0);
      if (*plVar9 == 0) goto LAB_06d09614;
      lVar5 = FUN_085dee20(*plVar9,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      puVar1 = PTR_DAT_08e68e18;
      if (lVar5 == 0) goto LAB_06d09614;
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      FUN_085ea6e8(*puVar6,puVar6[1],puVar6[2],lVar5,0);
      if (*plVar9 == 0) goto LAB_06d09614;
      lVar5 = FUN_085dee20(*plVar9,0);
      if (DAT_0940fffc == '\0') {
        FUN_03c8f898(PTR_DAT_08e69f40);
        DAT_0940fffc = '\x01';
      }
      if (lVar5 == 0) goto LAB_06d09614;
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
      FUN_085eb51c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (*plVar9 == 0) goto LAB_06d09614;
      lVar5 = FUN_085dee20(*plVar9,0);
      if (DAT_0940fff0 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff0 = '\x01';
      }
      if (lVar5 == 0) goto LAB_06d09614;
      lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_085eb934(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x14),lVar5,0);
      if (((*plVar9 == 0) ||
          (lVar5 = FUN_0469ce58(*plVar9,*(undefined8 *)PTR_DAT_08e6f5f8), lVar5 == 0)) ||
         (lVar8 = FUN_085dbb98(lVar5,0), lVar8 == 0)) goto LAB_06d09614;
      FUN_085e2a7c(lVar8,*(undefined8 *)PTR_DAT_08e8c820,0);
      lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6c3c0,1);
      uVar4 = FUN_085dbb98(lVar5,0);
      if (lVar8 == 0) goto LAB_06d09614;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06d09618;
      *(undefined8 *)(lVar8 + 0x20) = uVar4;
      thunk_FUN_03d233cc();
      plVar9 = *(long **)(unaff_x19 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_06d09614;
      (**(code **)(*plVar9 + 0x218))(plVar9,lVar8,0,1,*(undefined8 *)(*plVar9 + 0x220));
      plVar9 = *(long **)(unaff_x19 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_06d09614;
      (**(code **)(*plVar9 + 0x238))(plVar9,0,*(undefined8 *)(*plVar9 + 0x240));
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085a3c50(*(undefined8 *)PTR_DAT_08e8c7e8,0);
    }
  }
  lVar8 = *unaff_x24;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e8c828;
  lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar3 = FUN_0861ce54(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    plVar9 = (long *)(unaff_x19 + 0x60);
    lVar5 = *plVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar3 = FUN_085dfaac(lVar5,0,0);
    puVar1 = PTR_DAT_08e6f5f8;
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06d09614;
      plVar10 = *(long **)(unaff_x19 + 0x48);
      lVar5 = FUN_0469ce58(*(long *)(unaff_x19 + 0x60),*(undefined8 *)PTR_DAT_08e6f5f8);
      if ((lVar5 == 0) || (uVar4 = FUN_085dbb98(lVar5,0), plVar10 == (long *)0x0))
      goto LAB_06d09614;
      uVar3 = (**(code **)(*plVar10 + 600))(plVar10,uVar4,*(undefined8 *)(*plVar10 + 0x260));
      if ((uVar3 & 1) != 0) {
        lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6c3c0,1);
        if (((*plVar9 == 0) || (lVar8 = FUN_0469ce58(*plVar9,*(undefined8 *)puVar1), lVar8 == 0)) ||
           (uVar4 = FUN_085dbb98(lVar8,0), lVar5 == 0)) goto LAB_06d09614;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06d09618;
        *(undefined8 *)(lVar5 + 0x20) = uVar4;
        thunk_FUN_03d233cc();
        plVar10 = *(long **)(unaff_x19 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_06d09614;
        (**(code **)(*plVar10 + 0x218))(plVar10,0,lVar5,1,*(undefined8 *)(*plVar10 + 0x220));
        plVar10 = *(long **)(unaff_x19 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_06d09614;
        (**(code **)(*plVar10 + 0x238))(plVar10,0,*(undefined8 *)(*plVar10 + 0x240));
        lVar5 = *plVar9;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085e3508(lVar5,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085a3c50(*(undefined8 *)PTR_DAT_08e8c800,0);
        *plVar9 = 0;
        thunk_FUN_03d233cc(plVar9,0);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06d09614;
      FUN_085dee20(*(long *)(unaff_x19 + 0x40),0);
      uVar4 = FUN_06d0961c();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar2);
      }
      lVar5 = FUN_0476e7ec(uVar11,*(undefined8 *)PTR_DAT_08e69dd0);
      *plVar9 = lVar5;
      thunk_FUN_03d233cc(plVar9,lVar5);
      if ((*plVar9 == 0) || (lVar5 = FUN_085dee20(*plVar9,0), lVar5 == 0)) goto LAB_06d09614;
      FUN_085eba08(lVar5,uVar4,0);
      if (*plVar9 == 0) goto LAB_06d09614;
      lVar5 = FUN_085dee20(*plVar9,0);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      puVar1 = PTR_DAT_08e68e18;
      if (lVar5 == 0) goto LAB_06d09614;
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      FUN_085ea6e8(*puVar6,puVar6[1],puVar6[2],lVar5,0);
      if (*plVar9 == 0) goto LAB_06d09614;
      lVar5 = FUN_085dee20(*plVar9,0);
      if (DAT_0940fffc == '\0') {
        FUN_03c8f898(PTR_DAT_08e69f40);
        DAT_0940fffc = '\x01';
      }
      if (lVar5 == 0) goto LAB_06d09614;
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
      FUN_085eb51c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (*plVar9 == 0) goto LAB_06d09614;
      lVar5 = FUN_085dee20(*plVar9,0);
      if (DAT_0940fff0 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff0 = '\x01';
      }
      if (lVar5 == 0) goto LAB_06d09614;
      lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_085eb934(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x14),lVar5,0);
      if (((*plVar9 == 0) ||
          (lVar5 = FUN_0469ce58(*plVar9,*(undefined8 *)PTR_DAT_08e6f5f8), lVar5 == 0)) ||
         (lVar8 = FUN_085dbb98(lVar5,0), lVar8 == 0)) goto LAB_06d09614;
      FUN_085e2a7c(lVar8,*(undefined8 *)PTR_DAT_08e8c838,0);
      lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6c3c0,1);
      uVar4 = FUN_085dbb98(lVar5,0);
      if (lVar8 == 0) goto LAB_06d09614;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06d09618;
      *(undefined8 *)(lVar8 + 0x20) = uVar4;
      thunk_FUN_03d233cc();
      plVar9 = *(long **)(unaff_x19 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_06d09614;
      (**(code **)(*plVar9 + 0x218))(plVar9,lVar8,0,1,*(undefined8 *)(*plVar9 + 0x220));
      plVar9 = *(long **)(unaff_x19 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_06d09614;
      (**(code **)(*plVar9 + 0x238))(plVar9,0,*(undefined8 *)(*plVar9 + 0x240));
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085a3c50(*(undefined8 *)PTR_DAT_08e8c818,0);
    }
  }
  lVar8 = *unaff_x24;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e8c830;
  lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar3 = FUN_0861ce54(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar9 = (long *)(unaff_x19 + 0x58);
  lVar5 = *plVar9;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_085dfaac(lVar5,0,0);
  puVar1 = PTR_DAT_08e6f5f8;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      plVar10 = *(long **)(unaff_x19 + 0x48);
      lVar5 = FUN_0469ce58(*(long *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_08e6f5f8);
      if ((lVar5 != 0) && (uVar4 = FUN_085dbb98(lVar5,0), plVar10 != (long *)0x0)) {
        uVar3 = (**(code **)(*plVar10 + 600))(plVar10,uVar4,*(undefined8 *)(*plVar10 + 0x260));
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6c3c0,1);
        if (((*plVar9 != 0) && (lVar8 = FUN_0469ce58(*plVar9,*(undefined8 *)puVar1), lVar8 != 0)) &&
           (uVar4 = FUN_085dbb98(lVar8,0), lVar5 != 0)) {
          if (*(int *)(lVar5 + 0x18) == 0) {
LAB_06d09618:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(undefined8 *)(lVar5 + 0x20) = uVar4;
          thunk_FUN_03d233cc();
          plVar10 = *(long **)(unaff_x19 + 0x48);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x218))(plVar10,0,lVar5,1,*(undefined8 *)(*plVar10 + 0x220));
            plVar10 = *(long **)(unaff_x19 + 0x48);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x238))(plVar10,0,*(undefined8 *)(*plVar10 + 0x240));
              lVar5 = *plVar9;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_085e3508(lVar5,0);
              *plVar9 = 0;
              thunk_FUN_03d233cc(plVar9,0);
              puVar7 = (undefined8 *)PTR_DAT_08e8c7e0;
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                puVar7 = (undefined8 *)PTR_DAT_08e8c7e0;
              }
LAB_06d095e4:
              FUN_085a3c50(*puVar7,0);
              return;
            }
          }
        }
      }
    }
  }
  else if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_085dee20(*(long *)(unaff_x19 + 0x40),0);
    uVar4 = FUN_06d0961c();
    uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar2);
    }
    lVar5 = FUN_0476e7ec(uVar11,*(undefined8 *)PTR_DAT_08e69dd0);
    *plVar9 = lVar5;
    thunk_FUN_03d233cc(plVar9,lVar5);
    if ((*plVar9 != 0) && (lVar5 = FUN_085dee20(*plVar9,0), lVar5 != 0)) {
      FUN_085eba08(lVar5,uVar4,0);
      if (*plVar9 != 0) {
        lVar5 = FUN_085dee20(*plVar9,0);
        if (DAT_0940fff5 == '\0') {
          FUN_03c8f898(PTR_DAT_08e68e18);
          DAT_0940fff5 = '\x01';
        }
        puVar1 = PTR_DAT_08e68e18;
        if (lVar5 != 0) {
          puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
          FUN_085ea6e8(*puVar6,puVar6[1],puVar6[2],lVar5,0);
          if (*plVar9 != 0) {
            lVar5 = FUN_085dee20(*plVar9,0);
            if (DAT_0940fffc == '\0') {
              FUN_03c8f898(PTR_DAT_08e69f40);
              DAT_0940fffc = '\x01';
            }
            if (lVar5 != 0) {
              puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
              FUN_085eb51c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
              if (*plVar9 != 0) {
                lVar5 = FUN_085dee20(*plVar9,0);
                if (DAT_0940fff0 == '\0') {
                  FUN_03c8f898(PTR_DAT_08e68e18);
                  DAT_0940fff0 = '\x01';
                }
                if (lVar5 != 0) {
                  lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
                  FUN_085eb934(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                               *(undefined4 *)(lVar8 + 0x14),lVar5,0);
                  if (((*plVar9 != 0) &&
                      (lVar5 = FUN_0469ce58(*plVar9,*(undefined8 *)PTR_DAT_08e6f5f8), lVar5 != 0))
                     && (lVar8 = FUN_085dbb98(lVar5,0), lVar8 != 0)) {
                    FUN_085e2a7c(lVar8,*(undefined8 *)PTR_DAT_08e8c7c8,0);
                    lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6c3c0,1);
                    uVar4 = FUN_085dbb98(lVar5,0);
                    if (lVar8 != 0) {
                      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06d09618;
                      *(undefined8 *)(lVar8 + 0x20) = uVar4;
                      thunk_FUN_03d233cc();
                      plVar9 = *(long **)(unaff_x19 + 0x48);
                      if (plVar9 != (long *)0x0) {
                        (**(code **)(*plVar9 + 0x218))
                                  (plVar9,lVar8,0,1,*(undefined8 *)(*plVar9 + 0x220));
                        plVar9 = *(long **)(unaff_x19 + 0x48);
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x238))(plVar9,0,*(undefined8 *)(*plVar9 + 0x240));
                          puVar7 = (undefined8 *)PTR_DAT_08e8c7f0;
                          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                            thunk_FUN_03cd7500();
                            puVar7 = (undefined8 *)PTR_DAT_08e8c7f0;
                          }
                          goto LAB_06d095e4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06d09614:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


