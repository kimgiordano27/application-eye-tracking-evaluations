/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$SetOcclusionShaderKeywords
ENTRY_POINT: 06dc5d20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  void *__s;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  size_t unaff_x20;
  undefined8 unaff_x21;
  code *pcVar14;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_037fac54();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  plVar5 = (long *)thunk_FUN_03db67a8();
  if (*plVar5 == 0) {
LAB_06dc6460:
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar11 = thunk_FUN_03d2ef40();
    uVar10 = thunk_FUN_03d1e194(PTR_DAT_09200520);
    Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar11);
  }
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  piVar6 = (int *)thunk_FUN_03db67a8();
  iVar1 = *piVar6;
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar7 = (undefined8 *)thunk_FUN_03db67a8();
  plVar5 = (long *)*puVar7;
  if (plVar5 == (long *)0x0) {
LAB_06dc645c:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *unaff_x26;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x68);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c(lVar8);
  }
  lVar12 = *plVar5;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar6 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06dc5e6c;
      }
      uVar13 = uVar13 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370(plVar5,lVar8,0);
LAB_06dc5e6c:
  iVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
  if (iVar1 < iVar4) {
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar7 = (undefined8 *)thunk_FUN_03db67a8();
    plVar5 = (long *)*puVar7;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar9 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar5 == (long *)0x0) goto LAB_06dc645c;
    lVar8 = *unaff_x26;
    uVar2 = *puVar9;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c(lVar8);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar6 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar8) goto LAB_06dc6374;
        uVar13 = uVar13 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar13 != 0);
    }
  }
  else {
    do {
      lVar12 = *unaff_x26;
      uVar3 = *(ushort *)(lVar12 + 0x135);
      lVar8 = lVar12;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar8 = *unaff_x26;
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
      if ((uVar3 & 1) == 0) {
        FUN_03d8f26c(lVar8);
      }
      uVar11 = thunk_FUN_03db67a8();
      lVar8 = *unaff_x26;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
      }
      uVar13 = (*pcVar14)(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30));
      lVar8 = *unaff_x26;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
      }
      if ((uVar13 & 1) == 0) {
        __s = (void *)thunk_FUN_03db67a8();
        memset(__s,0,unaff_x20);
        if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        FUN_037fabd8();
        uVar11 = 0;
        goto LAB_06dc6430;
      }
      lVar12 = *unaff_x26;
      uVar3 = *(ushort *)(lVar12 + 0x135);
      uVar11 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      lVar8 = lVar12;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar8 = *unaff_x26;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_03d8f26c(lVar8);
      }
      uVar10 = thunk_FUN_03db67a8();
      (**(code **)(lVar12 + 0x10))(uVar11,lVar12,uVar10,0,unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
      lVar12 = *unaff_x26;
      uVar3 = *(ushort *)(lVar12 + 0x135);
      lVar8 = lVar12;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar8 = *unaff_x26;
      }
      uVar11 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x50);
      (**(code **)(lVar8 + 0x10))(uVar11,lVar8,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
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
      plVar5 = (long *)thunk_FUN_03db67a8();
      if (*plVar5 == 0) goto LAB_06dc6460;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      piVar6 = (int *)thunk_FUN_03db67a8();
      iVar1 = *piVar6;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      puVar7 = (undefined8 *)thunk_FUN_03db67a8();
      plVar5 = (long *)*puVar7;
      if (plVar5 == (long *)0x0) goto LAB_06dc645c;
      lVar8 = *unaff_x26;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x68);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar6 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06dc623c;
          }
          uVar13 = uVar13 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_03d8f370(plVar5,lVar8,0);
LAB_06dc623c:
      iVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    } while (iVar4 <= iVar1);
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar7 = (undefined8 *)thunk_FUN_03db67a8();
    plVar5 = (long *)*puVar7;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar9 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar5 == (long *)0x0) goto LAB_06dc645c;
    lVar8 = *unaff_x26;
    uVar2 = *puVar9;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c(lVar8);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar6 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar8) goto LAB_06dc6374;
        uVar13 = uVar13 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar13 != 0);
    }
  }
  lVar8 = FUN_03d8f370(plVar5,lVar8,0);
LAB_06dc6380:
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x1c;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  lVar8 = *(long *)(lVar8 + 8);
  (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar5,unaff_x29 + -0x18);
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
  uVar11 = 1;
LAB_06dc6430:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
LAB_06dc6374:
  lVar8 = lVar12 + (long)*piVar6 * 0x10 + 0x138;
  goto LAB_06dc6380;
}


