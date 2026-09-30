/*
FUNCTION_NAME: FUN_01b61784
ENTRY_POINT: 01b61784
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2
*/


void FUN_01b61784(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((DAT_0377e456 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ValueTask<int>_AsTask__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_DB047CC748613CCCB120DE7385E37D542A79C3BF8F0E64FE6DAD349B4D26E5D7
                      );
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName__ctor__
                      );
    thunk_FUN_00d48444(
                      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<SubtitleManager_SubtitleDataObjectPair>_get_Count__
                      );
    thunk_FUN_00d48444(System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
    DAT_0377e456 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_80._8_8_ = 0;
  local_70 = 0;
  local_90._8_8_ = 0;
  local_80._0_8_ = 0;
  local_90._0_8_ = 0;
  auVar4 = ZEXT816(0);
  if (*param_1 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 10);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    uStack_48 = 0;
    local_40 = 0;
    local_50 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack_c8 = uStack_48;
    local_d0 = local_50;
    local_c0 = local_40;
    uStack_a8 = uStack_98;
    local_b0 = local_a0;
    uStack_b8 = uVar2;
    local_90 = FUN_01a92b9c(uVar1,&local_d0,0,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__
                        );
    }
    local_80 = FUN_01353c78(local_90,*(undefined8 *)
                                      System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    uVar7 = FUN_011cf2a4(local_80,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__
                        );
    auVar4 = local_90;
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      puVar5 = 
      Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OpenCloseStateBuilder>_TypeInfo
      ;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_80;
      FUN_0109f4f0(param_1 + 2,local_80,param_1,*(undefined8 *)puVar5);
      goto LAB_01b619a8;
    }
  }
  local_90 = auVar4;
  FUN_011cf420(local_80,&local_50,
               *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__);
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  FUN_0134cc4c(&local_70,&local_50,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_DB047CC748613CCCB120DE7385E37D542A79C3BF8F0E64FE6DAD349B4D26E5D7
              );
  FUN_01b5d678(local_50 & 0xffffffff);
  uVar6 = FUN_0134cb6c(&local_70,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName__ctor__
                      );
  puVar5 = 
  Method_System_Collections_Generic_List<SubtitleManager_SubtitleDataObjectPair>_get_Count__;
  *param_1 = -2;
  local_50 = CONCAT71(local_50._1_7_,uVar6) & 0xffffffffffffff01;
  FUN_0134f59c(param_1 + 2,&local_50,*(undefined8 *)puVar5);
LAB_01b619a8:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


