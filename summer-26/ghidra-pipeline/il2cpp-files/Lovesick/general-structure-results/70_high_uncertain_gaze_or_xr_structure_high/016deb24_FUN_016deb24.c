/*
FUNCTION_NAME: FUN_016deb24
ENTRY_POINT: 016deb24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_016deb24(long param_1,long *param_2,int param_3,byte param_4,int param_5,byte param_6,
                 uint param_7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int local_44;
  
  if ((DAT_037787d2 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2e38);
    DAT_037787d2 = 1;
  }
  local_44 = 0;
  if ((param_7 & 1) == 0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if ((uVar4 & 1) != 0) {
      uVar5 = thunk_FUN_00d48444(Method_System_Xml_Serialization_ClassMap_AddMember__);
      uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar6 = thunk_FUN_00d48444(
                                Method_MainStage_<ResetSequence>d__21_System_Collections_IEnumerator_Reset__
                                );
      FUN_016ec624(uVar5,uVar7,uVar6,0);
      goto FUN_016dedf4;
    }
  }
  puVar2 = PTR_DAT_033f2e38;
  if (param_3 - 1U < 3) {
    if ((param_5 < 1) && ((param_7 & 1) == 0)) {
      uVar5 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
      uVar7 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar6 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
      FUN_016efd4c(uVar5,uVar6,uVar7,0);
FUN_016dedf4:
      uVar7 = thunk_FUN_00d48444(
                                Method_DG_Tweening_TweenSettingsExtensions_OnUpdate<TweenerCore<Color,_Color,_ColorOptions>>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,uVar7);
    }
    if (*(int *)(*(long *)PTR_DAT_033f2e38 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar3 = FUN_016e053c(param_2,&local_44);
    iVar1 = local_44;
    if (local_44 == 0) {
      uVar8 = 1;
      if (iVar3 != 1) {
        if (iVar3 == 0) {
          thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector2>_CopyReplicate__);
          uVar7 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar5 = thunk_FUN_00d48444(Method_System_Xml_Serialization_ClassMap_AddMember__);
          FUN_016c0654(uVar7,uVar5,0);
          goto LAB_016ded88;
        }
        uVar8 = 0;
      }
      *(undefined1 *)(param_1 + 0x56) = uVar8;
      *(long **)(param_1 + 0x38) = param_2;
      *(undefined1 *)(param_1 + 0x40) = 1;
      FUN_016e0f68(param_1);
      FUN_016e0664(param_1,0,1);
      *(int *)(param_1 + 0x50) = param_3;
      *(byte *)(param_1 + 0x54) = param_4 & 1;
      *(byte *)(param_1 + 0x55) = param_6 & 1;
      *(undefined1 *)(param_1 + 0x57) = 0;
      if (*(char *)(param_1 + 0x56) == '\0') {
LAB_016dec64:
        *(undefined8 *)(param_1 + 0x48) = 0;
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_016e0918(param_2,0,1,&local_44);
      iVar1 = local_44;
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      if (local_44 == 0) goto LAB_016dec64;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_00d48444(PTR_DAT_033f2e38);
      FUN_00acb0a4();
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_00d48444(PTR_DAT_033f2e38);
      FUN_00acb0a4();
    }
    uVar7 = FUN_016dfe10(uVar5,iVar1);
  }
  else {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddq_s32__);
    FUN_016f44f8(uVar7,uVar5,0);
  }
LAB_016ded88:
  uVar5 = thunk_FUN_00d48444(
                            Method_DG_Tweening_TweenSettingsExtensions_OnUpdate<TweenerCore<Color,_Color,_ColorOptions>>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar5);
}


