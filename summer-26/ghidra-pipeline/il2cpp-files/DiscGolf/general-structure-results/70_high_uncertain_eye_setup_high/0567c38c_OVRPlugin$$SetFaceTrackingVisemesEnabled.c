/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 0567c38c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetFaceTrackingVisemesEnabled(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(unaff_x19 + 0x18);
  if (in_w8 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  }
  else {
    if (in_w8 == 1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    }
    else {
      if (in_w8 != 0) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      if (lVar7 == 0) goto LAB_0567c52c;
      uVar2 = FUN_0567564c(lVar7,0);
      *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
      LeanTween__value();
    }
    plVar8 = *(long **)(unaff_x19 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_0567c52c;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0567c440;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff8,0);
LAB_0567c440:
    uVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)
                 System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0567c508;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_02dd004c(plVar8,*(long *)
                                      System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                              ,0);
LAB_0567c508:
        uVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
        return 1;
      }
      goto LAB_0567c52c;
    }
    if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0563c9e8(0);
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = DAT_010fc988;
      return 1;
    }
  }
  if (lVar7 != 0) {
    FUN_05675f1c(lVar7,0);
    FUN_0563e294(lVar7 + 0xd8,0);
    return 0;
  }
LAB_0567c52c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


