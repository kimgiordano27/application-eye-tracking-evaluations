/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$BeginInvoke
ENTRY_POINT: 04c1c988
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  undefined8 unaff_x20;
  long unaff_x21;
  long *plVar7;
  long *unaff_x23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_04c1cb78;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar7 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
LAB_04c1cb78:
  uVar3 = (*(code *)*puVar2)();
  plVar7 = *(long **)(unaff_x21 + 0x10);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
    System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
              (lVar4,*(undefined8 *)PTR_DAT_065c9440);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
        }
        else {
          FUN_039683cc(lVar4);
        }
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_04c1cd4c;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x23,1);
LAB_04c1cd4c:
                    /* WARNING: Could not recover jumptable at 0x04c1cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar2)(plVar7);
          return;
        }
      }
    }
  }
  else if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1cca8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x23,0);
LAB_04c1cca8:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065c8e90) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_04c1cd18;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8e90,2);
LAB_04c1cd18:
                    /* WARNING: Could not recover jumptable at 0x04c1cd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


