/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_OcclusionShadersMode
ENTRY_POINT: 06dc5c9c
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_OcclusionShadersMode(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  void *__s;
  long lVar11;
  ulong uVar12;
  size_t unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar13;
  long unaff_x24;
  code *pcVar14;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  thunk_FUN_03db67a8();
  (**(code **)(unaff_x24 + 0x10))();
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
  lVar11 = *unaff_x26;
  uVar3 = *(ushort *)(lVar11 + 0x135);
  lVar5 = lVar11;
  if ((uVar3 & 1) == 0) {
    lVar11 = FUN_03d8f26c(lVar11);
    uVar3 = *(ushort *)(*unaff_x26 + 0x135);
    lVar5 = *unaff_x26;
  }
  uVar13 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x50);
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x50);
  (**(code **)(lVar5 + 0x10))(uVar13,lVar5,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_037fac54();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  plVar6 = (long *)thunk_FUN_03db67a8();
  if (*plVar6 == 0) {
LAB_06dc6460:
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar13 = thunk_FUN_03d2ef40();
    uVar10 = thunk_FUN_03d1e194(PTR_DAT_09200520);
    Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar13,uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar13);
  }
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  piVar7 = (int *)thunk_FUN_03db67a8();
  iVar1 = *piVar7;
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar8 = (undefined8 *)thunk_FUN_03db67a8();
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) {
LAB_06dc645c:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *unaff_x26;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  lVar11 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar5) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06dc5e6c;
      }
      uVar12 = uVar12 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_03d8f370(plVar6,lVar5,0);
LAB_06dc5e6c:
  iVar4 = (*(code *)*puVar8)(plVar6,puVar8[1]);
  if (iVar1 < iVar4) {
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar8 = (undefined8 *)thunk_FUN_03db67a8();
    plVar6 = (long *)*puVar8;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar9 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar6 == (long *)0x0) goto LAB_06dc645c;
    lVar5 = *unaff_x26;
    uVar2 = *puVar9;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) goto LAB_06dc6374;
        uVar12 = uVar12 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
    do {
      lVar11 = *unaff_x26;
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar5 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_03d8f26c(lVar11);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar5 = *unaff_x26;
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x30);
      if ((uVar3 & 1) == 0) {
        FUN_03d8f26c(lVar5);
      }
      uVar13 = thunk_FUN_03db67a8();
      lVar5 = *unaff_x26;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c(lVar5);
      }
      uVar12 = (*pcVar14)(uVar13,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30));
      lVar5 = *unaff_x26;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c(lVar5);
      }
      if ((uVar12 & 1) == 0) {
        __s = (void *)thunk_FUN_03db67a8();
        memset(__s,0,unaff_x20);
        if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        FUN_037fabd8();
        uVar13 = 0;
        goto LAB_06dc6430;
      }
      lVar11 = *unaff_x26;
      uVar3 = *(ushort *)(lVar11 + 0x135);
      uVar13 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x40);
      lVar5 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_03d8f26c(lVar11);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar5 = *unaff_x26;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_03d8f26c(lVar5);
      }
      uVar10 = thunk_FUN_03db67a8();
      (**(code **)(lVar11 + 0x10))(uVar13,lVar11,uVar10,0,unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
      lVar11 = *unaff_x26;
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar5 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_03d8f26c(lVar11);
        uVar3 = *(ushort *)(*unaff_x26 + 0x135);
        lVar5 = *unaff_x26;
      }
      uVar13 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x50);
      if ((uVar3 & 1) == 0) {
        lVar5 = FUN_03d8f26c(lVar5);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x50);
      (**(code **)(lVar5 + 0x10))(uVar13,lVar5,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
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
      plVar6 = (long *)thunk_FUN_03db67a8();
      if (*plVar6 == 0) goto LAB_06dc6460;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      piVar7 = (int *)thunk_FUN_03db67a8();
      iVar1 = *piVar7;
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      puVar8 = (undefined8 *)thunk_FUN_03db67a8();
      plVar6 = (long *)*puVar8;
      if (plVar6 == (long *)0x0) goto LAB_06dc645c;
      lVar5 = *unaff_x26;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c(lVar5);
      }
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06dc623c;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_03d8f370(plVar6,lVar5,0);
LAB_06dc623c:
      iVar4 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    } while (iVar4 <= iVar1);
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar8 = (undefined8 *)thunk_FUN_03db67a8();
    plVar6 = (long *)*puVar8;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar9 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar6 == (long *)0x0) goto LAB_06dc645c;
    lVar5 = *unaff_x26;
    uVar2 = *puVar9;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) goto LAB_06dc6374;
        uVar12 = uVar12 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar12 != 0);
    }
  }
  lVar5 = FUN_03d8f370(plVar6,lVar5,0);
LAB_06dc6380:
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x1c;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  lVar5 = *(long *)(lVar5 + 8);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar6,unaff_x29 + -0x18);
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
  uVar13 = 1;
LAB_06dc6430:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
LAB_06dc6374:
  lVar5 = lVar11 + (long)*piVar7 * 0x10 + 0x138;
  goto LAB_06dc6380;
}


