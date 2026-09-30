/*
FUNCTION_NAME: OVRPlugin$$CalculateLayerDesc
ENTRY_POINT: 0566b334
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CalculateLayerDesc(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long *plVar7;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) != 0) {
    FUN_056873ac();
    if (*(int *)(unaff_x19 + 0xc0) != 0) {
      if (*(char *)(unaff_x19 + 0x2d1) == '\0') {
        FUN_0566bddc();
      }
      lVar2 = *(long *)(*unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) goto LAB_0566b560;
      FUN_05685fec();
    }
    if (*(long *)(unaff_x19 + 600) != 0) {
      FUN_0565e768(*(long *)(unaff_x19 + 600),0);
      FUN_0566d5d0();
      FUN_0566d6ac();
    }
    puVar1 = System_Collections_Generic_List<ERVSData>_TypeInfo;
    *(undefined8 *)(unaff_x19 + 0x26c) = 0xffffffffffffffff;
    if (*(int *)(unaff_x19 + 0xc0) != 0) {
      FUN_0566d7bc();
    }
    lVar6 = *(long *)puVar1;
    *(undefined4 *)(unaff_x19 + 0x1a0) = 0;
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    *(undefined4 *)(unaff_x19 + 0x1b8) = 0;
    lVar2 = *(long *)(lVar6 + 0x38);
    if (lVar2 == 0) {
      FUN_02dcfd74(lVar6);
      lVar2 = *(long *)(lVar6 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    *(undefined8 *)(unaff_x19 + 0xe0) = **(undefined8 **)(lVar2 + 0xb8);
    LeanTween__value((undefined8 *)(unaff_x19 + 0xe0));
    if (*(long *)(unaff_x19 + 0x2c8) != 0) {
      FUN_04e93778(*(long *)(unaff_x19 + 0x2c8),
                   *(undefined8 *)System_Collections_Generic_List<EasingFunction>_TypeInfo);
      if (*(long *)(unaff_x19 + 0x1f8) != 0) {
        FUN_04df8778(*(long *)(unaff_x19 + 0x1f8),
                     *(undefined8 *)System_Collections_Generic_List<EdgeER>_TypeInfo);
        plVar7 = *(long **)(unaff_x19 + 0x198);
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_0566b514;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
LAB_0566b514:
          (*(code *)*puVar3)(plVar7,puVar3[1]);
        }
        *(undefined8 *)(unaff_x19 + 0x198) = 0;
        LeanTween__value(unaff_x19 + 0x198,0);
        FUN_0566d838();
        *(undefined8 *)(unaff_x19 + 0x180) = 0;
        LeanTween__value(unaff_x19 + 0x180,0);
        *(undefined8 *)(unaff_x19 + 0x210) = 0;
        *(undefined8 *)(unaff_x19 + 0x208) = 0;
        *(undefined8 *)(unaff_x19 + 0x200) = 0;
        return;
      }
    }
  }
LAB_0566b560:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


