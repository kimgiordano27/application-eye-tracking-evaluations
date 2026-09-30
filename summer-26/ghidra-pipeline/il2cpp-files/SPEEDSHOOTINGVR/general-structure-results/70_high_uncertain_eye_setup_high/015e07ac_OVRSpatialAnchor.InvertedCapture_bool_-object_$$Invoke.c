/*
FUNCTION_NAME: OVRSpatialAnchor.InvertedCapture<bool,-object>$$Invoke
ENTRY_POINT: 015e07ac
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * OVRSpatialAnchor_InvertedCapture<bool,_object>__Invoke(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0234cf48);
  FUN_00fdc2e4(PTR_DAT_0234cf50);
  FUN_00fdc2e4(PTR_DAT_0234cb98);
  FUN_00fdc2e4(PTR_DAT_0234bce0);
  FUN_00fdc2e4(PTR_DAT_0234cf58);
  FUN_00fdc2e4(PTR_DAT_0234cf60);
  FUN_00fdc2e4(PTR_DAT_0234bda8);
  FUN_00fdc2e4(PTR_DAT_0234c5a8);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  *(undefined1 *)(unaff_x20 + 0x7fd) = 1;
  puVar2 = PTR_DAT_0234bc58;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_0234bce0;
  plVar6 = (long *)FUN_01d5e86c(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_015e0d5c;
  }
  uVar12 = FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd38,0);
  uVar7 = FUN_01d603ec(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_DAT_0234bda8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar12 = FUN_01d5e86c(uVar12,0);
    uVar7 = FUN_01d603ec(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf40);
      FUN_01d33adc(plVar6,0);
      goto LAB_015e0940;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_01d5e86c(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_015e0d64:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x290));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_015e0d64;
      uVar7 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
      if ((uVar7 & 1) == 0) {
LAB_015e0c40:
        uVar7 = (**(code **)(*plVar6 + 0x568))(plVar6,*(undefined8 *)(*plVar6 + 0x570));
        if ((uVar7 & 1) == 0) {
switchD_015e0cc0_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          plVar6 = (long *)thunk_FUN_010400dc();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244(lVar5);
          }
          FUN_0195849c(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        uVar12 = OVRPlugin__get_positionSupported(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar2);
        }
        uVar4 = FUN_01d62dc0(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_0234cf58;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_0234cf28;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_0234cf60;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_0234cf48;
          break;
        default:
          goto switchD_015e0cc0_default;
        }
        goto LAB_015e09b8;
      }
      uVar12 = (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
      uVar13 = *(undefined8 *)PTR_DAT_0234cb98;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar2);
      }
      uVar13 = FUN_01d5e86c(uVar13,0);
      uVar7 = FUN_01d603ec(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_015e0c40;
      lVar5 = (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
      if (lVar5 == 0) goto LAB_015e0d64;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_015e0d68:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_DAT_0234cf38;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      plVar8 = (long *)FUN_01d5e86c(uVar12,0);
      plVar9 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c5a8,1);
      if (plVar9 == (long *)0x0) goto LAB_015e0d64;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_0103ffe0(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_015e0d68;
      plVar9[4] = (long)plVar10;
      thunk_FUN_0106e12c(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x898))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x8a0)),
         plVar8 == (long *)0x0)) goto LAB_015e0d64;
      uVar7 = (**(code **)(*plVar8 + 0x288))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x290));
      if ((uVar7 & 1) == 0) goto LAB_015e0c40;
      uVar12 = *(undefined8 *)PTR_DAT_0234cf50;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar12 = FUN_01d5e86c(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)PTR_DAT_0234cf30;
LAB_015e09b8:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar12 = FUN_01d5e86c(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_01d8868c(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234cf20);
    FUN_01d339dc(plVar6,0);
LAB_015e0940:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_015e0d5c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar6);
    }
  }
  return plVar6;
}


