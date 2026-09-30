/*
FUNCTION_NAME: OVRPlugin$$GetFaceVisemesState
ENTRY_POINT: 0567c110
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetFaceVisemesState(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar7;
  long *plVar8;
  
  if (param_1 == 0) {
LAB_0567c220:
    FUN_056760f8();
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x252) = 1;
    uVar2 = FUN_05675778();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
    LeanTween__value();
    puVar7 = (undefined8 *)(unaff_x19 + 0x20);
    plVar8 = (long *)*puVar7;
    if (plVar8 == (long *)0x0) {
LAB_0567c278:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0567c1a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff8,0);
LAB_0567c1a4:
    uVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == 0) goto LAB_0567c278;
      if (*(char *)(unaff_x20 + 0x252) != '\0') {
        *puVar7 = 0;
        LeanTween__value(puVar7,0);
        goto LAB_0567c220;
      }
      *(undefined8 *)(unaff_x19 + 0x10) = DAT_010fc4e0;
    }
    else {
      plVar8 = (long *)*puVar7;
      if (plVar8 == (long *)0x0) goto LAB_0567c278;
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0567c24c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar8,*(long *)
                                    System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                            ,0);
LAB_0567c24c:
      uVar1 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      *(undefined4 *)(unaff_x19 + 0x10) = 3;
      *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


