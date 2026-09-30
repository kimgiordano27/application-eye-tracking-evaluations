/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$.ctor
ENTRY_POINT: 06dc5bbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported___ctor(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  void *__s;
  long lVar12;
  long lVar13;
  size_t unaff_x20;
  undefined8 unaff_x21;
  code *pcVar14;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  pcVar14 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x30);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_03d8f26c(param_1);
  }
  uVar5 = thunk_FUN_03db67a8();
  lVar12 = *unaff_x26;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
  }
  uVar6 = (*pcVar14)(uVar5,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x30));
  lVar12 = *unaff_x26;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
  }
  if ((uVar6 & 1) == 0) {
LAB_06dc6320:
    __s = (void *)thunk_FUN_03db67a8();
    memset(__s,0,unaff_x20);
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_037fabd8();
    uVar5 = 0;
    goto LAB_06dc6430;
  }
  lVar13 = *unaff_x26;
  uVar3 = *(ushort *)(lVar13 + 0x135);
  uVar5 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
  lVar12 = lVar13;
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_03d8f26c(lVar13);
    uVar3 = *(ushort *)(*unaff_x26 + 0x135);
    lVar12 = *unaff_x26;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x40);
  if ((uVar3 & 1) == 0) {
    FUN_03d8f26c(lVar12);
  }
  uVar7 = thunk_FUN_03db67a8();
  (**(code **)(lVar13 + 0x10))(uVar5,lVar13,uVar7,0,unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
  lVar13 = *unaff_x26;
  uVar3 = *(ushort *)(lVar13 + 0x135);
  lVar12 = lVar13;
  if ((uVar3 & 1) == 0) {
    lVar13 = FUN_03d8f26c(lVar13);
    uVar3 = *(ushort *)(*unaff_x26 + 0x135);
    lVar12 = *unaff_x26;
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x50);
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x50);
  (**(code **)(lVar12 + 0x10))(uVar5,lVar12,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_037fac54();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  plVar8 = (long *)thunk_FUN_03db67a8();
  if (*plVar8 == 0) {
LAB_06dc6460:
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar5 = thunk_FUN_03d2ef40();
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_09200520);
    Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5);
  }
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  piVar9 = (int *)thunk_FUN_03db67a8();
  iVar1 = *piVar9;
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar10 = (undefined8 *)thunk_FUN_03db67a8();
  plVar8 = (long *)*puVar10;
  if (plVar8 == (long *)0x0) {
LAB_06dc645c:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar12 = *unaff_x26;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x68);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
  }
  lVar13 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar12) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06dc5e6c;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar10 = (undefined8 *)FUN_03d8f370(plVar8,lVar12,0);
LAB_06dc5e6c:
  iVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
  if (iVar1 < iVar4) {
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar10 = (undefined8 *)thunk_FUN_03db67a8();
    plVar8 = (long *)*puVar10;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar11 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar8 == (long *)0x0) goto LAB_06dc645c;
    lVar12 = *unaff_x26;
    uVar2 = *puVar11;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar13 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar12) goto LAB_06dc6374;
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    do {
      lVar13 = *unaff_x26;
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar12 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_03d8f26c(lVar13);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar12 = *unaff_x26;
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x30);
      if ((uVar3 & 1) == 0) {
        FUN_03d8f26c(lVar12);
      }
      uVar5 = thunk_FUN_03db67a8();
      lVar12 = *unaff_x26;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
      }
      uVar6 = (*pcVar14)(uVar5,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x30));
      lVar12 = *unaff_x26;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
      }
      if ((uVar6 & 1) == 0) goto LAB_06dc6320;
      lVar13 = *unaff_x26;
      uVar3 = *(ushort *)(lVar13 + 0x135);
      uVar5 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
      lVar12 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_03d8f26c(lVar13);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar12 = *unaff_x26;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_03d8f26c(lVar12);
      }
      uVar7 = thunk_FUN_03db67a8();
      (**(code **)(lVar13 + 0x10))(uVar5,lVar13,uVar7,0,unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
      lVar13 = *unaff_x26;
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar12 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_03d8f26c(lVar13);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar12 = *unaff_x26;
      }
      uVar5 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x50);
      (**(code **)(lVar12 + 0x10))(uVar5,lVar12,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_037fac54();
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_037fce78();
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      plVar8 = (long *)thunk_FUN_03db67a8();
      if (*plVar8 == 0) goto LAB_06dc6460;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      piVar9 = (int *)thunk_FUN_03db67a8();
      iVar1 = *piVar9;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      puVar10 = (undefined8 *)thunk_FUN_03db67a8();
      plVar8 = (long *)*puVar10;
      if (plVar8 == (long *)0x0) goto LAB_06dc645c;
      lVar12 = *unaff_x26;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x68);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
      }
      lVar13 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06dc623c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)FUN_03d8f370(plVar8,lVar12,0);
LAB_06dc623c:
      iVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    } while (iVar4 <= iVar1);
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar10 = (undefined8 *)thunk_FUN_03db67a8();
    plVar8 = (long *)*puVar10;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar11 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar8 == (long *)0x0) goto LAB_06dc645c;
    lVar12 = *unaff_x26;
    uVar2 = *puVar11;
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar13 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar12) goto LAB_06dc6374;
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
  }
  lVar12 = FUN_03d8f370(plVar8,lVar12,0);
LAB_06dc6380:
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x1c;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  lVar12 = *(long *)(lVar12 + 8);
  (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar8,unaff_x29 + -0x18);
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_03d2d2d4();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  thunk_FUN_03db67a8();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_037fce78();
  uVar5 = 1;
LAB_06dc6430:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
LAB_06dc6374:
  lVar12 = lVar13 + (long)*piVar9 * 0x10 + 0x138;
  goto LAB_06dc6380;
}


