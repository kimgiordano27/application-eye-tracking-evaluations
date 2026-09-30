/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XObjectWrapper$$get_Attributes
ENTRY_POINT: 017d8c94
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Converters_XObjectWrapper__get_Attributes(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x478));
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                    );
  *(undefined1 *)(unaff_x21 + 0x17d) = 1;
  FUN_017d8990();
  if (unaff_w19 < -1) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlByte_get_Value__);
    FUN_016f44f8(uVar8,uVar5,0);
    uVar5 = thunk_FUN_00d48444(
                              Field_<PrivateImplementationDetails>_5ADB7CA81690556AB2A3201A849839FA3562604BB469382C7D6D78AB426283E2
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar5);
  }
  iVar1 = *(int *)(unaff_x20 + 0x20);
  thunk_FUN_00d8e500();
  if (iVar1 < 2) {
    plVar6 = (long *)(unaff_x20 + 0x38);
    lVar7 = *plVar6;
    thunk_FUN_00d8e500();
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmuls_lane_f32__;
    puVar2 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__;
    if (lVar7 == 0) {
      lVar7 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmuls_lane_f32__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017e654c(lVar7,uVar8);
      thunk_FUN_00d8e500();
      lVar4 = FUN_00d744e8(plVar6,lVar7,0);
      if (lVar4 != 0) {
        FUN_017e6998(lVar7,0);
      }
    }
    lVar7 = *plVar6;
    thunk_FUN_00d8e500();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017e68c0(lVar7,unaff_w19,0xffffffff,0);
  }
  return;
}


