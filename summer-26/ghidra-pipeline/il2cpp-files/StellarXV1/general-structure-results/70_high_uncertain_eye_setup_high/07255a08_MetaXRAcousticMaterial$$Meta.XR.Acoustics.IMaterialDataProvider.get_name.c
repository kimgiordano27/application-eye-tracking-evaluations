/*
FUNCTION_NAME: MetaXRAcousticMaterial$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 07255a08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MetaXRAcousticMaterial__Meta_XR_Acoustics_IMaterialDataProvider_get_name(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long lVar5;
  
  uVar2 = FUN_07242784(param_1,0);
  if (((uVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0xa8) != '\0')) {
    plVar3 = *(long **)(unaff_x19 + 0x58);
    if (plVar3 == (long *)0x0) goto LAB_07255be0;
    lVar5 = *(long *)(unaff_x19 + 0xb8);
    lVar4 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    *(long *)(unaff_x19 + 0xb8) = lVar4 + lVar5;
  }
  if (*(long *)(unaff_x25 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    if (*(long **)(unaff_x19 + 0x58) == (long *)0x0) goto LAB_07255be0;
    (**(code **)(**(long **)(unaff_x19 + 0x58) + 0x398))();
    iVar1 = (int)*(undefined8 *)(unaff_x25 + 0x18);
  }
  *(long *)(unaff_x19 + 0x98) =
       *(long *)(unaff_x19 + 0x98) + (long)(*(int *)(unaff_x24 + 0x18) + iVar1 + 0x1e);
  iVar1 = FUN_07242630();
  if (0 < iVar1) {
    lVar4 = *(long *)(unaff_x19 + 0x98);
    iVar1 = FUN_07242d58();
    *(long *)(unaff_x19 + 0x98) = lVar4 + iVar1;
  }
  *(undefined8 *)(unaff_x19 + 0x80) = unaff_x20;
  thunk_FUN_040ec700();
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_07272510(*(long *)(unaff_x19 + 0x78),0);
    if (unaff_w23 != 8) {
LAB_07255afc:
      *(undefined8 *)(unaff_x19 + 0x90) = 0;
      uVar2 = FUN_072424ac();
      if ((uVar2 & 1) == 0) {
        return;
      }
      iVar1 = FUN_07242630();
      if (0 < iVar1) {
        FUN_07256784();
        return;
      }
      lVar4 = FUN_07242b84();
      if (lVar4 < 0) {
        FUN_0724286c();
      }
      else {
        FUN_07242b84();
      }
      FUN_07256804();
      return;
    }
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_07256748();
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        FUN_07255174(*(long *)(unaff_x19 + 0x50),unaff_w21);
        goto LAB_07255afc;
      }
    }
  }
LAB_07255be0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


