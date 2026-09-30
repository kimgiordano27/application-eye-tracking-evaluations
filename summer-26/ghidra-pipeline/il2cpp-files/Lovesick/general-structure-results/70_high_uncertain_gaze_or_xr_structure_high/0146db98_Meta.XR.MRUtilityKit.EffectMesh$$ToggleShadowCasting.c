/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ToggleShadowCasting
ENTRY_POINT: 0146db98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__ToggleShadowCasting(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = FUN_02681b9c(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    uVar3 = thunk_FUN_00d61fa0(*unaff_x24);
    if (lVar6 == 0) goto LAB_0146dd88;
    plVar4 = (long *)FUN_0146a764(lVar6,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                                  ,uVar3,0);
    if (plVar4 == (long *)0x0) goto LAB_0146dd88;
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x24 + 0x40)) goto LAB_0146dd8c;
    puVar5 = (undefined4 *)thunk_FUN_00d624a0();
    FUN_0267f168(*puVar5);
  }
  uVar3 = FUN_0267dbbc();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x23);
  }
  FUN_02681b9c(uVar3,0,0);
  FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x68));
  uVar3 = FUN_0267dbbc();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x23);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
  uVar2 = FUN_02681b9c(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    FUN_0267e350();
    lVar6 = *(long *)(unaff_x20 + 0x10);
    uVar3 = thunk_FUN_00d61fa0(*unaff_x22);
    if ((lVar6 == 0) ||
       (plVar4 = (long *)FUN_0146a764(lVar6,*(undefined8 *)puVar1,uVar3,0), plVar4 == (long *)0x0))
    {
LAB_0146dd88:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
LAB_0146dd8c:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar5 = (undefined4 *)thunk_FUN_00d624a0();
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
  }
  else {
    FUN_0267e30c();
    uVar7 = 0x3f800000;
    uVar8 = uVar7;
    uVar9 = uVar7;
    uVar10 = uVar7;
  }
  FUN_0267da4c(uVar7,uVar8,uVar9,uVar10);
  return;
}


