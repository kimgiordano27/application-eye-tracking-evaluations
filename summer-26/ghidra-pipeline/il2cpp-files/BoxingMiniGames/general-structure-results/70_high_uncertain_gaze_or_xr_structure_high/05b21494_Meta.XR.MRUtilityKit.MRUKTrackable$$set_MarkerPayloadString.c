/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$set_MarkerPayloadString
ENTRY_POINT: 05b21494
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MRUtilityKit_MRUKTrackable__set_MarkerPayloadString(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_03642964();
  FUN_03642964(PTR_DAT_079fd458);
  FUN_03642964(PTR_DAT_07a03020);
  FUN_03642964(PTR_DAT_07a03028);
  FUN_03642964(PTR_DAT_079f7098);
  *(undefined1 *)(unaff_x20 + 0xd76) = 1;
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  puVar3 = PTR_DAT_079f4610;
  uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
  }
  puVar4 = PTR_DAT_079fd458;
  plVar7 = (long *)FUN_05e26f18(uVar13,0);
  if (plVar7 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_05b21abc;
  }
  uVar13 = FUN_05e26f18(*(long *)(puVar3 + 0x18) + 0x20,0);
  uVar8 = FUN_05e30794(plVar7,uVar13,0);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(puVar3 + 0x90);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_05e26f18(lVar6 + 0x20,0);
    uVar8 = FUN_05e30794(plVar7,uVar13,0);
    if ((uVar8 & 1) != 0) {
      plVar7 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(plVar7,0);
      goto LAB_05b215e4;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(puVar3 + 0xe0));
    }
    plVar11 = (long *)FUN_05e26f18(uVar13,0);
    if (plVar11 == (long *)0x0) {
LAB_05b21ac4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar8 = (**(code **)(*plVar11 + 0x298))(plVar11,plVar7,*(undefined8 *)(*plVar11 + 0x2a0));
    if ((uVar8 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_05b21ac4;
      uVar8 = (**(code **)(*plVar7 + 0x3b8))(plVar7,*(undefined8 *)(*plVar7 + 0x3c0));
      if ((uVar8 & 1) != 0) {
        uVar13 = (**(code **)(*plVar7 + 0x438))(plVar7,*(undefined8 *)(*plVar7 + 0x440));
        uVar14 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(puVar3 + 0xe0));
        }
        uVar14 = FUN_05e26f18(uVar14,0);
        uVar8 = FUN_05e30794(uVar13,uVar14,0);
        if ((uVar8 & 1) != 0) {
          lVar6 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
          if (lVar6 == 0) goto LAB_05b21ac4;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05b21ac8:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar11 = *(long **)(lVar6 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar11);
            }
          }
          uVar13 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar9 = (long *)FUN_05e26f18(uVar13,0);
          plVar10 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar10 == (long *)0x0) goto LAB_05b21ac4;
          if ((plVar11 != (long *)0x0) &&
             (lVar6 = thunk_FUN_0367fd24(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
            uVar13 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar13,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_05b21ac8;
          plVar10[4] = (long)plVar11;
          thunk_FUN_036b7ad0(plVar10 + 4,plVar11);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x948))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x950)),
             plVar9 == (long *)0x0)) goto LAB_05b21ac4;
          uVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2a0));
          if ((uVar8 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar13 = FUN_05e26f18(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)puVar4);
            }
            goto LAB_05b219f8;
          }
        }
      }
      uVar8 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0));
      if ((uVar8 & 1) == 0) goto LAB_05b21a58;
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_05e4c8a4(plVar7,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(puVar3 + 0xe0));
      }
      uVar5 = FUN_05e32ff8(uVar13,0);
      if (uVar5 < 0xd) {
        uVar2 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar5 != 7) goto LAB_05b219a8;
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_07a03028;
          }
          else {
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_07a03010;
          }
        }
        else {
          lVar6 = *(long *)(puVar3 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_07a02ff0;
        }
      }
      else {
LAB_05b219a8:
        if (uVar5 != 5) {
LAB_05b21a58:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar7 = (long *)thunk_FUN_0367fe20();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0367c9fc(lVar6);
          }
          FUN_04a663d8(plVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar7;
        }
        lVar6 = *(long *)(puVar3 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar13 = *puVar12;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_05e26f18(uVar13,0);
      plVar11 = plVar7;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar4);
      }
LAB_05b219f8:
      uVar13 = FUN_05e59d90(uVar13,plVar11,0);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      plVar7 = (long *)FUN_03156018(uVar13,lVar6);
      return plVar7;
    }
    uVar13 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_05e26f18(uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar4);
    }
    plVar7 = (long *)FUN_05e59d90(uVar13,plVar7,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar7 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar7,0);
LAB_05b215e4:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar11;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_05b21abc:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar7);
    }
  }
  return plVar7;
}


