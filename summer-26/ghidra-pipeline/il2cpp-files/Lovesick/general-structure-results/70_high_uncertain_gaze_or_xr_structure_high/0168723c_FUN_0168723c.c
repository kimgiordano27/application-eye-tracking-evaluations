/*
FUNCTION_NAME: FUN_0168723c
ENTRY_POINT: 0168723c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_0168723c(long param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined4 local_24;
  
  if ((DAT_037784f5 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    DAT_037784f5 = 1;
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  switch(param_2) {
  case 1:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016fcc9c(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 == (long *)0x0) break;
    uVar2 = uVar2 & 1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x1b8);
    uVar4 = *(undefined8 *)(*plVar6 + 0x1c0);
    goto LAB_01687798;
  case 2:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016fdb94(param_3,uVar4,0);
    goto LAB_01687784;
  case 3:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = NaughtyAttributes_Test_EnumFlagsNest2___ctor(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x208);
      uVar4 = *(undefined8 *)(*plVar6 + 0x210);
      goto LAB_01687798;
    }
    break;
  default:
    uVar4 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar4 = FUN_00da4fb8(uVar4,1);
    local_24 = param_2;
    uVar5 = thunk_FUN_00d48444(
                              RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_TypeInfo
                              );
    uVar5 = thunk_FUN_00d61fa0(uVar5,&local_24);
    uVar5 = FUN_017a7f78(uVar5,0);
    FUN_00ac2be8(uVar4);
    FUN_00acb0b4(uVar4,uVar5);
    FUN_00adb25c(uVar4,0,uVar5);
    uVar5 = thunk_FUN_00d48444(Method_OVRResult<OVRPlugin_Result>_From__);
    uVar4 = FUN_017b63dc(uVar5,uVar4,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar5,uVar4,0);
    uVar4 = thunk_FUN_00d48444(PTR_DAT_033ec1c8);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar4);
  case 5:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    auVar7 = FUN_017004ec(param_3,uVar4,0);
    FUN_0168d748(param_1,auVar7._0_8_,auVar7._8_8_);
    return;
  case 6:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_01700318(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01687654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      return;
    }
    break;
  case 7:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016fe1b4(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x248);
      uVar4 = *(undefined8 *)(*plVar6 + 0x250);
      goto LAB_01687798;
    }
    break;
  case 8:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016fec00(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x268);
      uVar4 = *(undefined8 *)(*plVar6 + 0x270);
      goto LAB_01687798;
    }
    break;
  case 9:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar4 = FUN_016ff5a8(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x288);
      uVar5 = *(undefined8 *)(*plVar6 + 0x290);
LAB_01687804:
                    /* WARNING: Could not recover jumptable at 0x01687814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar6,uVar4,uVar5);
      return;
    }
    break;
  case 10:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016fd544(param_3,uVar4,0);
LAB_01687784:
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x1c8);
      uVar4 = *(undefined8 *)(*plVar6 + 0x1d0);
LAB_01687798:
                    /* WARNING: Could not recover jumptable at 0x016877a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar6,uVar2,uVar4);
      return;
    }
    break;
  case 0xb:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_016fffd0(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01687424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
      return;
    }
    break;
  case 0xc:
    if (param_3 != (long *)0x0) {
      if (*(long *)(*param_3 + 0x40) ==
          *(long *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0x40)) {
        puVar3 = (undefined8 *)thunk_FUN_00d624a0(param_3);
        FUN_0168d8e4(param_1,*puVar3);
        return;
      }
LAB_016878d8:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_3);
    }
    break;
  case 0xd:
    if (param_3 != (long *)0x0) {
      if (*(long *)(*param_3 + 0x40) == *(long *)(*(long *)StringLiteral_2672 + 0x40)) {
        puVar3 = (undefined8 *)thunk_FUN_00d624a0(param_3);
        FUN_0168d95c(param_1,*puVar3);
        return;
      }
      goto LAB_016878d8;
    }
    break;
  case 0xe:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016fe6b4(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 600);
      uVar4 = *(undefined8 *)(*plVar6 + 0x260);
      goto LAB_01687798;
    }
    break;
  case 0xf:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar2 = FUN_016ff06c(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x278);
      uVar4 = *(undefined8 *)(*plVar6 + 0x280);
      goto LAB_01687798;
    }
    break;
  case 0x10:
    if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar4 = FUN_016ffa8c(param_3,uVar4,0);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x298);
      uVar5 = *(undefined8 *)(*plVar6 + 0x2a0);
      goto LAB_01687804;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


