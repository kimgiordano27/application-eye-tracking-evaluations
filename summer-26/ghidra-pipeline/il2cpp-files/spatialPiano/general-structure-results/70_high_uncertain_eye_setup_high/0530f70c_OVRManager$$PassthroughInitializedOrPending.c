/*
FUNCTION_NAME: OVRManager$$PassthroughInitializedOrPending
ENTRY_POINT: 0530f70c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__PassthroughInitializedOrPending(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined4 uVar9;
  
  FUN_02f08768();
  FUN_02f08768(System_Xml_Schema_Datatype_nonPositiveInteger_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x1b7) = 1;
  puVar1 = System_Xml_Schema_Datatype_nonPositiveInteger_TypeInfo;
  puVar2 = System_Predicate<TextSpan>_TypeInfo;
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Predicate<TextSpan>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_0530f7a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0530f7a0:
    (*(code *)*puVar4)();
    FUN_0531231c();
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0530f80c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0530f80c:
    (*(code *)*puVar4)();
    puVar1 = System_Predicate<StyleSelectorPart>_TypeInfo;
    if (unaff_x21 != (long *)0x0) {
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)System_Predicate<StyleSelectorPart>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0530f874;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0530f874:
      plVar5 = (long *)(*(code *)*puVar4)();
      puVar3 = System_Predicate<DebugUI_Panel>_TypeInfo;
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Predicate<DebugUI_Panel>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_0530f8e0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_02f421d0(plVar5,*(long *)System_Predicate<DebugUI_Panel>_TypeInfo,4);
LAB_0530f8e0:
        uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        lVar6 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0530f93c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0530f93c:
        plVar5 = (long *)(*(code *)*puVar4)();
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0530f99c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar3,0);
LAB_0530f99c:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
          lVar6 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                goto LAB_0530f9fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_02f421d0();
LAB_0530f9fc:
          (*(code *)*puVar4)(uVar9);
          if (*unaff_x19 != 0) {
            return *(undefined4 *)(*unaff_x19 + 0x3c);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


