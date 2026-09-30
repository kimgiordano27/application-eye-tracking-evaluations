/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ToggleGlobalMeshCollisions
ENTRY_POINT: 014958c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__ToggleGlobalMeshCollisions(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x19;
  long lVar10;
  long unaff_x20;
  double dVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xd8));
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                    );
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
  thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_720);
  thunk_FUN_00d48444(StringLiteral_10091);
  *(undefined1 *)(unaff_x19 + 0xc4d) = 1;
  puVar5 = StringLiteral_2672;
  in_stack_00000008 = 0;
  lVar10 = *(long *)(unaff_x20 + 0x20);
  if (*(int *)(unaff_x20 + 0x10) == 1) {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0174f858(0);
    puVar1 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
    plVar9 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    plVar2 = (long *)Newtonsoft_Json_Linq_JToken_TypeInfo;
    plVar3 = (long *)StringLiteral_720;
    puVar4 = (undefined8 *)StringLiteral_10091;
  }
  else {
    if (*(int *)(unaff_x20 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0174f858(0);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    puVar1 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
    plVar9 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    plVar2 = (long *)Newtonsoft_Json_Linq_JToken_TypeInfo;
    plVar3 = (long *)StringLiteral_720;
    puVar4 = (undefined8 *)StringLiteral_10091;
  }
  System_Runtime_InteropServices_InAttribute_TypeInfo = (undefined *)puVar1;
  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo = (undefined *)plVar9;
  Newtonsoft_Json_Linq_JToken_TypeInfo = (undefined *)plVar2;
  StringLiteral_720 = (undefined *)plVar3;
  StringLiteral_10091 = (undefined *)puVar4;
  if (lVar10 != 0) {
    while( true ) {
      uVar7 = FUN_01494e80(lVar10);
      uVar8 = FUN_015ff8a0(uVar7,0);
      if ((uVar8 & 1) == 0) break;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000008 = FUN_017511f4(uVar6,uVar7,0);
      if (*(int *)(*plVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar2);
      }
      dVar11 = (double)FUN_01788a00(&stack0x00000008,0);
      if ((double)*(float *)(lVar10 + 0x9c) <= dVar11) break;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000008 = FUN_017511f4(uVar6,uVar7,0);
      if (*(int *)(*plVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar2);
      }
      dVar11 = (double)FUN_01788a00(&stack0x00000008,0);
      if (0.5 < dVar11) {
        *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
        FUN_014955c4(lVar10);
        if (*(long *)(lVar10 + 0xa8) == 0) goto LAB_01495bcc;
        if ((0 < *(int *)(*(long *)(lVar10 + 0xa8) + 0x18)) && (*(int *)(lVar10 + 0xb0) < 0)) {
          *(undefined4 *)(lVar10 + 0xb0) = 0;
        }
      }
      uVar7 = FUN_01494e80(lVar10);
      uVar8 = FUN_015ff8a0(uVar7,0);
      if ((uVar8 & 1) != 0) {
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        *(undefined4 *)(unaff_x20 + 0x10) = 1;
        return 1;
      }
    }
    uVar6 = FUN_01494e80(lVar10);
    uVar8 = FUN_015ff8a0(uVar6,0);
    if ((uVar8 & 1) == 0) {
      FUN_014950d8(lVar10);
      uVar6 = *(undefined8 *)(lVar10 + 0x90);
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_0268b4e0(uVar6,0,0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
    else {
      plVar9 = (long *)thunk_FUN_00d93c64(lVar10,0);
      if (plVar9 == (long *)0x0) goto LAB_01495bcc;
      uVar6 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      in_stack_00000000._4_4_ = *(undefined4 *)(lVar10 + 0x9c);
      uVar7 = thunk_FUN_00d61fa0(*puVar1,(long)&stack0x00000000 + 4);
      uVar7 = FUN_015f6780(*puVar4,uVar7,0);
      if (*(int *)(*plVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar3);
      }
      FUN_014deea0(uVar6,uVar7,0,0);
    }
    FUN_014921ec(lVar10,0,0);
    return 0;
  }
LAB_01495bcc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


