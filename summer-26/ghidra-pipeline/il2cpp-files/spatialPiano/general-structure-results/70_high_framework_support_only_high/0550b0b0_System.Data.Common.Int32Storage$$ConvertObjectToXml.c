/*
FUNCTION_NAME: System.Data.Common.Int32Storage$$ConvertObjectToXml
ENTRY_POINT: 0550b0b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Data_Common_Int32Storage__ConvertObjectToXml
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  code *pcVar6;
  uint in_w10;
  long unaff_x19;
  undefined8 uVar7;
  long lVar8;
  
  if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
                    /* try { // try from 0550b0cc to 0560b10f has its CatchHandler @ 0550c680 */
  uVar7 = *(undefined8 *)OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar1 = (long *)FUN_050e4454(uVar7,0);
  if ((unaff_x19 != 0) && (plVar2 = *(long **)(unaff_x19 + 0x18), plVar2 != (long *)0x0)) {
    uVar7 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 0550b12c to 0560b12f has its CatchHandler @ 0550bd00 */
                    /* try { // try from 0550b130 to 0560b177 has its CatchHandler @ 0550aaa8 */
      uVar3 = (**(code **)(*plVar1 + 0x298))(plVar1,uVar7,*(undefined8 *)(*plVar1 + 0x2a0));
      plVar1 = *(long **)(unaff_x19 + 0x18);
      if ((uVar3 & 1) == 0) {
        if (plVar1 != (long *)0x0) {
          pcVar6 = *(code **)(*plVar1 + 0x188);
          uVar7 = *(undefined8 *)(*plVar1 + 400);
LAB_0550b230:
          uVar7 = (*pcVar6)(plVar1,uVar7);
          if (*(int *)(*(long *)PTR_DAT_067cbc88 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc88);
          }
          FUN_0552e020(uVar7,0);
          FUN_05508c0c();
          return;
        }
      }
      else if (plVar1 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
        lVar8 = *(long *)PTR_DAT_067cd360;
        lVar5 = *(long *)(lVar8 + 0x38);
        if (lVar5 == 0) {
          FUN_02f41ef8(lVar8);
          lVar5 = *(long *)(lVar8 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        if (lVar4 != 0) {
          plVar1 = (long *)FUN_050ef718(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo,
                                        **(undefined8 **)(lVar5 + 0xb8),0);
          uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
          }
          FUN_054d1144(uVar7,plVar1,0);
          if (plVar1 != (long *)0x0) {
            pcVar6 = *(code **)(*plVar1 + 0x3d8);
            uVar7 = *(undefined8 *)(*plVar1 + 0x3e0);
            goto LAB_0550b230;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


