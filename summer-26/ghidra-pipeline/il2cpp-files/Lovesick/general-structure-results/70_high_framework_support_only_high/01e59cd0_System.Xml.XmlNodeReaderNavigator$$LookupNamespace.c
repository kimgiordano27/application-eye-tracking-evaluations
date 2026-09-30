/*
FUNCTION_NAME: System.Xml.XmlNodeReaderNavigator$$LookupNamespace
ENTRY_POINT: 01e59cd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Xml_XmlNodeReaderNavigator__LookupNamespace(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x23;
  undefined *puVar4;
  
  iVar1 = (**(code **)(param_1 + 0x268))(param_2,*(undefined8 *)(param_1 + 0x270));
  if (iVar1 == 1) {
    if (*(long *)(unaff_x20 + 8) == 0) {
LAB_01e59d80:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(*(long *)(unaff_x20 + 8) + 0x30) == 0) {
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      uVar2 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar4 = OVRPlugin_OVRP_1_118_0_TypeInfo;
LAB_01e59dc8:
      uVar3 = thunk_FUN_00d48444(puVar4);
      FUN_01ebead4(uVar2,uVar3);
      uVar3 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,uVar3);
    }
  }
  else if (iVar1 == 2) {
    if (*(long *)(unaff_x20 + 8) == 0) goto LAB_01e59d80;
    if (*(uint *)(*(long *)(unaff_x20 + 8) + 0x30) < 2) {
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      uVar2 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar4 = Meta_Voice_Audio_IAudioClipProvider_TypeInfo;
      goto LAB_01e59dc8;
    }
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01e5b674();
  return;
}


