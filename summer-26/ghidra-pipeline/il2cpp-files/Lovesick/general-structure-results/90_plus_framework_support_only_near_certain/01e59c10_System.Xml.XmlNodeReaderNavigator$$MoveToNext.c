/*
FUNCTION_NAME: System.Xml.XmlNodeReaderNavigator$$MoveToNext
ENTRY_POINT: 01e59c10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Xml_XmlNodeReaderNavigator__MoveToNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uVar2 = thunk_FUN_015fe514(*(undefined8 *)(unaff_x19 + 0x50),**(undefined8 **)(param_1 + 0x668),0)
  ;
  if ((uVar2 & 1) == 0) {
    FUN_00ac2be8();
    uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
    thunk_FUN_00d48444(PTR_DAT_033ec070);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(
                              FullSerializer_Internal_fsPortableReflection_AttributeQueryComparator_TypeInfo
                              );
    FUN_01ebeb58(uVar4,uVar5,uVar7);
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  if (unaff_x20[1] == 0) goto LAB_01e59d80;
  *(undefined4 *)(unaff_x20[1] + 0x30) = 2;
  if ((*(byte *)((long)unaff_x20 + 0x14) >> 5 & 1) != 0) {
    plVar8 = (long *)*unaff_x20;
    if (plVar8 == (long *)0x0) goto LAB_01e59d80;
    lVar3 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
    puVar6 = PTR_DAT_033f3eb0;
    if (lVar3 == 0) goto LAB_01e59d80;
    uStack000000000000000c = *(undefined4 *)(lVar3 + 0x30);
    uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f3eb0,(long)&stack0x00000008 + 4);
    if (unaff_x20[1] == 0) goto LAB_01e59d80;
    uStack0000000000000008 = *(undefined4 *)(unaff_x20[1] + 0x30);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&stack0x00000008);
    uVar2 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar4,uVar5,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      uVar4 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar6 = StringLiteral_6133;
      goto LAB_01e59dc8;
    }
  }
  plVar8 = (long *)*unaff_x20;
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    if ((*(byte *)(unaff_x20 + 2) >> 5 & 1) == 0) {
      iVar1 = (**(code **)(lVar3 + 0x268))(plVar8,*(undefined8 *)(lVar3 + 0x270));
    }
    else {
      lVar3 = (**(code **)(lVar3 + 0x208))(plVar8,*(undefined8 *)(lVar3 + 0x210));
      if (lVar3 == 0) goto LAB_01e59d80;
      iVar1 = *(int *)(lVar3 + 0x30);
    }
    if (iVar1 == 1) {
      if (unaff_x20[1] == 0) goto LAB_01e59d80;
      if (*(int *)(unaff_x20[1] + 0x30) == 0) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar4 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar6 = OVRPlugin_OVRP_1_118_0_TypeInfo;
LAB_01e59dc8:
        uVar5 = thunk_FUN_00d48444(puVar6);
        FUN_01ebead4(uVar4,uVar5);
        uVar5 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar4,uVar5);
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x20[1] == 0) goto LAB_01e59d80;
      if (*(uint *)(unaff_x20[1] + 0x30) < 2) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar4 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar6 = Meta_Voice_Audio_IAudioClipProvider_TypeInfo;
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


