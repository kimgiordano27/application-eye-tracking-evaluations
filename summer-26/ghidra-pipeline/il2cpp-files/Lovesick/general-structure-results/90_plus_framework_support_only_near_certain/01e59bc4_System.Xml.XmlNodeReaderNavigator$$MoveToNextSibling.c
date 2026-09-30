/*
FUNCTION_NAME: System.Xml.XmlNodeReaderNavigator$$MoveToNextSibling
ENTRY_POINT: 01e59bc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Xml_XmlNodeReaderNavigator__MoveToNextSibling(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uVar2 = thunk_FUN_015fe514(param_2,*param_1);
  if ((uVar2 & 1) == 0) {
    uVar2 = thunk_FUN_015fe514(*(undefined8 *)(unaff_x19 + 0x50),
                               *(undefined8 *)
                                Method_System_Linq_Expressions_PrimitiveParameterExpression<object[]>__ctor__
                               ,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = thunk_FUN_015fe514(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)OVRBounded3D_var,0
                                );
      if ((uVar2 & 1) == 0) {
        FUN_00ac2be8();
        uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar3 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar4 = thunk_FUN_00d48444(
                                  FullSerializer_Internal_fsPortableReflection_AttributeQueryComparator_TypeInfo
                                  );
        FUN_01ebeb58(uVar3,uVar4,uVar8);
        uVar4 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,uVar4);
      }
      lVar6 = unaff_x20[1];
      if (lVar6 == 0) goto LAB_01e59d80;
      uVar7 = 2;
    }
    else {
      lVar6 = unaff_x20[1];
      if (lVar6 == 0) goto LAB_01e59d80;
      uVar7 = 1;
    }
  }
  else {
    lVar6 = unaff_x20[1];
    if (lVar6 == 0) goto LAB_01e59d80;
    uVar7 = 0;
  }
  *(undefined4 *)(lVar6 + 0x30) = uVar7;
  if ((*(byte *)((long)unaff_x20 + 0x14) >> 5 & 1) != 0) {
    plVar9 = (long *)*unaff_x20;
    if (plVar9 == (long *)0x0) goto LAB_01e59d80;
    lVar6 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
    puVar5 = PTR_DAT_033f3eb0;
    if (lVar6 == 0) goto LAB_01e59d80;
    uStack000000000000000c = *(undefined4 *)(lVar6 + 0x30);
    uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f3eb0,(long)&stack0x00000008 + 4);
    if (unaff_x20[1] == 0) goto LAB_01e59d80;
    uStack0000000000000008 = *(undefined4 *)(unaff_x20[1] + 0x30);
    uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000008);
    uVar2 = (**(code **)(*plVar9 + 0x2a8))(plVar9,uVar3,uVar4,*(undefined8 *)(*plVar9 + 0x2b0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar5 = StringLiteral_6133;
      goto LAB_01e59dc8;
    }
  }
  plVar9 = (long *)*unaff_x20;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    if ((*(byte *)(unaff_x20 + 2) >> 5 & 1) == 0) {
      iVar1 = (**(code **)(lVar6 + 0x268))(plVar9,*(undefined8 *)(lVar6 + 0x270));
    }
    else {
      lVar6 = (**(code **)(lVar6 + 0x208))(plVar9,*(undefined8 *)(lVar6 + 0x210));
      if (lVar6 == 0) goto LAB_01e59d80;
      iVar1 = *(int *)(lVar6 + 0x30);
    }
    if (iVar1 == 1) {
      if (unaff_x20[1] == 0) goto LAB_01e59d80;
      if (*(int *)(unaff_x20[1] + 0x30) == 0) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar3 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar5 = OVRPlugin_OVRP_1_118_0_TypeInfo;
LAB_01e59dc8:
        uVar4 = thunk_FUN_00d48444(puVar5);
        FUN_01ebead4(uVar3,uVar4);
        uVar4 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,uVar4);
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20[1] == 0) goto LAB_01e59d80;
      if (*(uint *)(unaff_x20[1] + 0x30) < 2) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar3 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar5 = Meta_Voice_Audio_IAudioClipProvider_TypeInfo;
        goto LAB_01e59dc8;
      }
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01e5b674();
    return;
  }
LAB_01e59d80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


