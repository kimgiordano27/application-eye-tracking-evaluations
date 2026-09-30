/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 053160f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__get_nativeSDKVersion(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_03bce0dc();
  puVar6 = UnityEngine_Rendering_Universal_DebugPostProcessingMode_TypeInfo;
  puVar5 = System_Xml_Schema_Datatype_untypedAtomicType_TypeInfo;
  puVar4 = System_Xml_Schema_Datatype_unsignedShort_TypeInfo;
  if ((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x130) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_03ac039c(&stack0x00000048,*(long *)(unaff_x19 + 0x130),
               *(undefined8 *)System_Xml_Schema_Datatype_year_TypeInfo);
  while( true ) {
    uVar7 = FUN_04aff1b0(&stack0x00000048,*(undefined8 *)puVar5);
    if ((uVar7 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000048,*(undefined8 *)puVar4);
      uVar11 = *(undefined4 *)(unaff_x19 + 0xdc);
      uVar1 = *(undefined4 *)(unaff_x19 + 0xe4);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x128);
      *unaff_x20 = param_1;
      *(undefined4 *)(unaff_x20 + 2) = uVar11;
      uVar13 = *(undefined8 *)(unaff_x19 + 0xf0);
      uVar12 = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      *(undefined4 *)((long)unaff_x20 + 0xc) = uVar2;
      uVar9 = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)((long)unaff_x20 + 0x1c) = uVar13;
      *(undefined8 *)((long)unaff_x20 + 0x14) = uVar12;
      uVar13 = *(undefined8 *)(unaff_x19 + 0x108);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)((long)unaff_x20 + 0x24) = uVar9;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x110);
      *(undefined8 *)((long)unaff_x20 + 0x34) = uVar13;
      *(undefined8 *)((long)unaff_x20 + 0x2c) = uVar12;
      *(undefined8 *)((long)unaff_x20 + 0x3c) = uVar9;
      *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
      return;
    }
    FUN_05315cb4(&stack0x00000060,in_stack_00000058);
    if (param_1 == 0) break;
    lVar8 = *(long *)(param_1 + 0x10);
    lVar10 = *(long *)puVar6;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar3 * 0x30;
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000068;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000060;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000078;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000070;
      *(undefined8 *)(lVar8 + 0x48) = in_stack_00000088;
      *(undefined8 *)(lVar8 + 0x40) = in_stack_00000080;
    }
    else {
      FUN_03bce988(param_1,&stack0x00000060,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


