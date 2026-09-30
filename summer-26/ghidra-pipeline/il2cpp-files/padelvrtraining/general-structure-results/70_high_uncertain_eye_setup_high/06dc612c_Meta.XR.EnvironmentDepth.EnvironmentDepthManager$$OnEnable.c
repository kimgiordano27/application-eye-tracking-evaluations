/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$OnEnable
ENTRY_POINT: 06dc612c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__OnEnable(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
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
  
code_r0x06dc612c:
  FUN_037fce78();
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  plVar6 = (long *)thunk_FUN_03db67a8();
  if (*plVar6 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar11 = thunk_FUN_03d2ef40();
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_09200520);
    Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar11,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar11);
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
  lVar9 = *unaff_x26;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03d8f26c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x68);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03d8f26c(lVar9);
  }
  lVar12 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar9) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06dc623c;
      }
      uVar13 = uVar13 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_03d8f370(plVar6,lVar9,0);
LAB_06dc623c:
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
    puVar10 = (undefined4 *)thunk_FUN_03db67a8();
    if (plVar6 == (long *)0x0) goto LAB_06dc645c;
    lVar9 = *unaff_x26;
    uVar2 = *puVar10;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c(lVar9);
    }
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
    lVar12 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 == 0) goto LAB_06dc6310;
    piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    goto LAB_06dc62f8;
  }
  lVar12 = *unaff_x26;
  uVar3 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
    uVar3 = *(ushort *)(*unaff_x26 + 0x135);
    lVar9 = *unaff_x26;
  }
  pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
  if ((uVar3 & 1) == 0) {
    FUN_03d8f26c(lVar9);
  }
  uVar11 = thunk_FUN_03db67a8();
  lVar9 = *unaff_x26;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03d8f26c(lVar9);
  }
  uVar13 = (*pcVar14)(uVar11,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x30));
  lVar9 = *unaff_x26;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_03d8f26c(lVar9);
  }
  if ((uVar13 & 1) != 0) {
    lVar12 = *unaff_x26;
    uVar3 = *(ushort *)(lVar12 + 0x135);
    uVar11 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x40);
    lVar9 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
      uVar3 = *(ushort *)(*unaff_x26 + 0x135);
      lVar9 = *unaff_x26;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
    if ((uVar3 & 1) == 0) {
      FUN_03d8f26c(lVar9);
    }
    uVar5 = thunk_FUN_03db67a8();
    (**(code **)(lVar12 + 0x10))(uVar11,lVar12,uVar5,0,unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
    lVar12 = *unaff_x26;
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar9 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
      uVar3 = *(ushort *)(*unaff_x26 + 0x135);
      lVar9 = *unaff_x26;
    }
    uVar11 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_03d8f26c(lVar9);
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
    (**(code **)(lVar9 + 0x10))(uVar11,lVar9,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_037fac54();
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    goto code_r0x06dc612c;
  }
  __s = (void *)thunk_FUN_03db67a8();
  memset(__s,0,unaff_x20);
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_037fabd8();
  uVar11 = 0;
  goto LAB_06dc6430;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar7 = piVar7 + 4;
    if (uVar13 == 0) break;
LAB_06dc62f8:
    if (*(long *)(piVar7 + -2) == lVar9) {
      lVar9 = lVar12 + (long)*piVar7 * 0x10 + 0x138;
      goto LAB_06dc6380;
    }
  }
LAB_06dc6310:
  lVar9 = FUN_03d8f370(plVar6,lVar9,0);
LAB_06dc6380:
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x1c;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  lVar9 = *(long *)(lVar9 + 8);
  (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar6,unaff_x29 + -0x18);
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
}


