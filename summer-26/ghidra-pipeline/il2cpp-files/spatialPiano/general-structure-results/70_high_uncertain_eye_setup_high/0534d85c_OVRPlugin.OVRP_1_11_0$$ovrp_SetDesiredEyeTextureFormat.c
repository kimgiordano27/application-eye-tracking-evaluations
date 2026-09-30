/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_SetDesiredEyeTextureFormat
ENTRY_POINT: 0534d85c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_11_0__ovrp_SetDesiredEyeTextureFormat(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  uVar7 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f245c(uVar7,0,0);
  puVar1 = System_Xml_Schema_Datatype_anyAtomicType_TypeInfo;
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar9 = *(long *)(unaff_x19 + 0x80);
  if ((lVar9 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x88), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0534d8e8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar8,*(long *)System_Xml_Schema_Datatype_anyAtomicType_TypeInfo,1);
LAB_0534d8e8:
    (*(code *)*puVar3)(plVar8,lVar9 + 0x24,puVar3[1]);
    lVar9 = *(long *)(unaff_x19 + 0x80);
    if ((lVar9 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x90), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)Unity_AppUI_UI_BaseTextElement_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0534d960;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)Unity_AppUI_UI_BaseTextElement_TypeInfo,1)
      ;
LAB_0534d960:
      (*(code *)*puVar3)(plVar8,lVar9 + 0x18,puVar3[1]);
      uVar2 = 0;
      while (lVar9 = *(long *)(unaff_x19 + 0xa0), lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar4 = *(long *)(unaff_x19 + 0x80);
        if ((lVar4 == 0) || (plVar8 = *(long **)(lVar9 + uVar2 * 8 + 0x20), plVar8 == (long *)0x0))
        break;
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0534d9ec;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,1);
LAB_0534d9ec:
        (*(code *)*puVar3)(plVar8,lVar4 + 0x30,puVar3[1]);
        uVar2 = uVar2 + 1;
        if (uVar2 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


