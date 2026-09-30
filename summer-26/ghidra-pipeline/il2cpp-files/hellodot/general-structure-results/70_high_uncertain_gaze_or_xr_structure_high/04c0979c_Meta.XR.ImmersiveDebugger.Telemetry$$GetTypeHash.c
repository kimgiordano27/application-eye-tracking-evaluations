/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 04c0979c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_044a8fc8();
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000000;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_0335fe6c(unaff_x19 + 2);
  }
  else {
    lVar2 = FUN_044a9014();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar6 = *(long **)(unaff_x20 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar6;
    uVar8 = *(undefined8 *)(unaff_x19 + 8);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065e38c8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04c09880;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e38c8,0);
LAB_04c09880:
    (*(code *)*puVar3)(plVar6,uVar8,uVar7,puVar3[1]);
    FUN_04bdea6c(lVar2,*(undefined8 *)(unaff_x19 + 8),0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04e5a1e4(unaff_x19 + 2,0);
  }
  return;
}


