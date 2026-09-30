/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetPositions
ENTRY_POINT: 0145f1e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetPositions(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x22;
  long *unaff_x23;
  float unaff_s8;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    FUN_01458618(param_2,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x48),
                 *(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0x78));
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (DAT_028aa3e4,*(undefined8 *)(lVar2 + 0x40),
                 *(undefined8 *)UnityEngine_GUIStyle___TypeInfo,*(undefined8 *)(lVar2 + 0x28));
    }
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_0143f4b4(*(long *)(unaff_x19 + 0x40),0);
      plVar5 = *(long **)(unaff_x19 + 0x50);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)StringLiteral_2590) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
              goto LAB_0145f3e8;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_2590,1);
LAB_0145f3e8:
        (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
      }
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if ((plVar5 != (long *)0x0) && (2 < *(int *)(unaff_x19 + 0x28))) {
        uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x22);
        }
        FUN_02660dac(uVar6,0);
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
        lVar2 = FUN_020407b0(*(long *)(unaff_x19 + 0x70),0);
        in_stack_00000010 = (float)lVar2 - unaff_s8;
        uVar6 = FUN_017841b4(&stack0x00000010,*(undefined8 *)StringLiteral_12992,0);
        uVar6 = FUN_015f5b28(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo,
                             uVar6,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x22);
        }
        FUN_02660dac(uVar6,0);
        if (3 < *(int *)(unaff_x19 + 0x28)) {
          if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
          in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x70),0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x23);
          }
          uVar6 = FUN_01789268(&stack0x00000018,0);
          uVar6 = FUN_015f5b28(*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                               ,uVar6,0);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x22);
          }
          FUN_02660dac(uVar6,0);
        }
      }
      return 0;
    }
  }
LAB_0145f564:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


