/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$get_MaskBias
ENTRY_POINT: 06dc5fc4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__get_MaskBias(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  void *__s;
  long lVar11;
  long lVar12;
  size_t unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar13;
  code *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  do {
    uVar5 = (*unaff_x24)(param_2,*(undefined8 *)(param_1 + 0x30));
    lVar11 = *unaff_x26;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03d8f26c(lVar11);
    }
    if ((uVar5 & 1) == 0) {
      __s = (void *)thunk_FUN_03db67a8();
      memset(__s,0,unaff_x20);
      if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_037fabd8();
      uVar13 = 0;
      goto LAB_06dc6430;
    }
    lVar12 = *unaff_x26;
    uVar3 = *(ushort *)(lVar12 + 0x135);
    uVar13 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x40);
    lVar11 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
      uVar3 = *(ushort *)(*unaff_x26 + 0x135);
      lVar11 = *unaff_x26;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x40);
    if ((uVar3 & 1) == 0) {
      FUN_03d8f26c(lVar11);
    }
    uVar6 = thunk_FUN_03db67a8();
    (**(code **)(lVar12 + 0x10))(uVar13,lVar12,uVar6,0,unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x10);
    lVar12 = *unaff_x26;
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar11 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
      uVar3 = *(ushort *)(*unaff_x26 + 0x135);
      lVar11 = *unaff_x26;
    }
    uVar13 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x50);
    if ((uVar3 & 1) == 0) {
      lVar11 = FUN_03d8f26c(lVar11);
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x50);
    (**(code **)(lVar11 + 0x10))(uVar13,lVar11,unaff_x29 + -0x30,0,unaff_x29 + -0x18);
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
    plVar7 = (long *)thunk_FUN_03db67a8();
    if (*plVar7 == 0) {
      thunk_FUN_03d1e194(PTR_DAT_091aa550);
      uVar13 = thunk_FUN_03d2ef40();
      uVar6 = thunk_FUN_03d1e194(PTR_DAT_09200520);
      Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar13,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar13);
    }
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    piVar8 = (int *)thunk_FUN_03db67a8();
    iVar1 = *piVar8;
    if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar9 = (undefined8 *)thunk_FUN_03db67a8();
    plVar7 = (long *)*puVar9;
    if (plVar7 == (long *)0x0) goto LAB_06dc645c;
    lVar11 = *unaff_x26;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03d8f26c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x68);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03d8f26c(lVar11);
    }
    lVar12 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc623c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar9 = (undefined8 *)FUN_03d8f370(plVar7,lVar11,0);
LAB_06dc623c:
    iVar4 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    if (iVar1 < iVar4) break;
    lVar12 = *unaff_x26;
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar11 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_03d8f26c(lVar12);
      uVar3 = *(ushort *)(*unaff_x26 + 0x135);
      lVar11 = *unaff_x26;
    }
    unaff_x24 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x30);
    if ((uVar3 & 1) == 0) {
      FUN_03d8f26c(lVar11);
    }
    param_2 = thunk_FUN_03db67a8();
    lVar11 = *unaff_x26;
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03d8f26c(lVar11);
    }
    param_1 = *(long *)(lVar11 + 0xc0);
  } while( true );
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar9 = (undefined8 *)thunk_FUN_03db67a8();
  plVar7 = (long *)*puVar9;
  if ((*(byte *)(*unaff_x26 + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  puVar10 = (undefined4 *)thunk_FUN_03db67a8();
  if (plVar7 == (long *)0x0) {
LAB_06dc645c:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar11 = *unaff_x26;
  uVar2 = *puVar10;
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03d8f26c();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03d8f26c(lVar11);
  }
  *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
  lVar12 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar11) {
        lVar11 = lVar12 + (long)*piVar8 * 0x10 + 0x138;
        goto LAB_06dc6380;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  lVar11 = FUN_03d8f370(plVar7,lVar11,0);
LAB_06dc6380:
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x1c;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
  lVar11 = *(long *)(lVar11 + 8);
  (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar7,unaff_x29 + -0x18);
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
}


