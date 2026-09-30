/*
FUNCTION_NAME: FUN_060003bc
ENTRY_POINT: 060003bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint FUN_060003bc(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000007a46904 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f2f78);
    FUN_031f20f4(PTR_DAT_075f2f80);
    FUN_031f20f4(PTR_DAT_075f2f60);
    bRam0000000007a46904 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (param_1 == (long *)0x0) {
OVROverlay__SubmitLayer:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075f2f60) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
        goto LAB_0600047c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8(param_1,*(long *)PTR_DAT_075f2f60,4);
LAB_0600047c:
  lVar9 = (*(code *)*puVar8)(param_1,puVar8[1]);
  if (lVar9 == 0) goto OVROverlay__SubmitLayer;
  uVar3 = FUN_06020dfc(lVar9,0);
  uVar4 = OVRPlugin__GetRenderModelProperties(lVar9,0);
  puVar2 = PTR_DAT_075f2f80;
  if (param_2 == (long *)0x0) goto OVROverlay__SubmitLayer;
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075f2f80) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_06000508;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)PTR_DAT_075f2f80,7);
LAB_06000508:
  iVar5 = (*(code *)*puVar8)(param_2,puVar8[1]);
  puVar1 = PTR_DAT_075f2f78;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_075f2f78 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (cRam0000000007a46a0e == '\0') {
      FUN_031f20f4(PTR_DAT_075f2f78);
      cRam0000000007a46a0e = '\x01';
    }
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar10 = *(long *)puVar1;
    }
    lVar10 = *(long *)(lVar10 + 0xb8);
    uStack_50 = *(undefined8 *)(lVar10 + 0x40);
    uStack_58 = *(undefined8 *)(lVar10 + 0x38);
    uStack_60 = *(undefined8 *)(lVar10 + 0x30);
    uVar11 = FUN_06020f08(lVar9,&uStack_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if (cRam0000000007a46a0e == '\0') {
        FUN_031f20f4(PTR_DAT_075f2f78);
        cRam0000000007a46a0e = '\x01';
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      uStack_70 = *(undefined8 *)(lVar10 + 0x40);
      uStack_78 = *(undefined8 *)(lVar10 + 0x38);
      uStack_80 = *(undefined8 *)(lVar10 + 0x30);
      uVar11 = FUN_06020f08(lVar9,&uStack_80,uVar4,0);
      if ((uVar11 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_06000654;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar2,7);
LAB_06000654:
  uVar6 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_0600092c(param_1,uVar6);
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_060006c0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar2,8);
LAB_060006c0:
    (*(code *)*puVar8)(&uStack_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    uStack_60 = uStack_98;
    uStack_50 = uStack_88;
    uVar11 = FUN_06020f08(lVar9,&uStack_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_06000758;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar2,8);
LAB_06000758:
      (*(code *)*puVar8)(&uStack_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      uVar7 = FUN_06021424(lVar9,&uStack_80,0);
      uVar7 = uVar7 & 1;
      goto LAB_0600078c;
    }
  }
  uVar7 = 0;
LAB_0600078c:
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_060007dc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar2,7);
LAB_060007dc:
  uVar3 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_060009dc(param_1,uVar3);
  uVar13 = uVar7;
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_06000848;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar2,9);
LAB_06000848:
    (*(code *)*puVar8)(&uStack_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    uStack_60 = uStack_98;
    uStack_50 = uStack_88;
    uVar11 = FUN_06020f08(lVar9,&uStack_60,uVar4,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_060008d0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0322c1e8(param_2,*(long *)puVar2,9);
LAB_060008d0:
      (*(code *)*puVar8)(&uStack_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      uVar11 = FUN_06021818(lVar9,&uStack_80,0);
      uVar13 = uVar7 | 2;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar7;
      }
    }
  }
  return uVar13;
}


