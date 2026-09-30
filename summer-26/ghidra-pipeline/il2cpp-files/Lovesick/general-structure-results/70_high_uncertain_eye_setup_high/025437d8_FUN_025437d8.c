/*
FUNCTION_NAME: FUN_025437d8
ENTRY_POINT: 025437d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_025437d8(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined1 auVar13 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  local_68 = param_5;
  if ((DAT_03782bca & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<RenderQueueRange>__ctor__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_108_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8811);
    thunk_FUN_00d48444(StringLiteral_11970);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_3926);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7710);
    thunk_FUN_00d48444(MessengerInternal_ListenerException_TypeInfo);
    DAT_03782bca = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = 
    Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass45_1_<SetExtensionDataDelegates>b__0__
    ;
  }
  else {
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0268b4e0(param_3,0,0);
    if ((uVar6 & 1) == 0) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      puVar1 = Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__;
      puVar9 = OVRPlugin_OVRP_1_108_0_TypeInfo;
      if ((uVar6 & 1) != 0) {
        auVar13 = FUN_01149a68(param_3,*(undefined8 *)MessengerInternal_ListenerException_TypeInfo);
        FUN_01342490(&local_80,auVar13._0_8_,auVar13._8_8_,4,*(undefined8 *)puVar9);
        local_88 = 0;
        local_90 = 0;
        lVar7 = *(long *)(*(long *)puVar1 + 0x20);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        pcVar8 = (char *)thunk_FUN_00d32ed4(&local_68,*(undefined8 *)(lVar7 + 0x80));
        puVar9 = StringLiteral_3926;
        if (*pcVar8 != '\0') {
          FUN_01347408(&local_68,&local_100,*(undefined8 *)StringLiteral_3926);
          fVar2 = (float)local_100;
          FUN_01347408(&local_68,&local_100,*(undefined8 *)puVar9);
          iVar3 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
          iVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
          local_100 = CONCAT44(((float)local_100 * (float)iVar3) / (float)iVar4,fVar2);
          FUN_01347274(&local_90,&local_100,*(undefined8 *)StringLiteral_11970);
        }
        puVar9 = StringLiteral_7710;
        if (*(int *)(*(long *)StringLiteral_7710 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03782bd4 == '\0') {
          thunk_FUN_00d48444(StringLiteral_7710);
          DAT_03782bd4 = '\x01';
        }
        lVar7 = *(long *)puVar9;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar9;
          cVar12 = DAT_03782bd4;
        }
        else {
          cVar12 = '\x01';
        }
        puVar1 = StringLiteral_7710;
        uVar10 = **(undefined8 **)(lVar7 + 0xb8);
        uVar11 = (*(undefined8 **)(lVar7 + 0xb8))[1];
        if (cVar12 == '\0') {
          thunk_FUN_00d48444(StringLiteral_7710);
          lVar7 = *(long *)puVar1;
          DAT_03782bd4 = '\x01';
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar9;
        }
        FUN_02556870(&local_d0,uVar10,uVar11,**(undefined8 **)(lVar7 + 0xb8),
                     (*(undefined8 **)(lVar7 + 0xb8))[1],local_90,local_88,param_4,param_3,0);
        auVar13 = FUN_0134423c(local_80,uStack_78,*(undefined8 *)StringLiteral_8811);
        uVar6 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
        lVar7 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
        uVar5 = FUN_026709f8(param_3,0);
        uStack_128 = uStack_b8;
        local_130 = local_c0;
        uStack_118 = uStack_a8;
        uStack_120 = local_b0;
        uStack_138 = uStack_c8;
        local_140 = local_d0;
        uStack_108 = uStack_98;
        local_110 = local_a0;
        FUN_025551fc(&local_100,param_2,auVar13._0_8_,auVar13._8_8_,
                     uVar6 & 0xffffffff | lVar7 << 0x20,uVar5,&local_140,param_6,param_7,0);
        uStack_d8 = uStack_f8;
        local_e0 = local_100;
        local_100 = local_80;
        uStack_f8 = uStack_78;
        FUN_010ec2cc(&local_100,local_f0,uStack_e8,
                     *(undefined8 *)Method_System_Nullable<RenderQueueRange>__ctor__);
        param_1[2] = local_f0;
        param_1[3] = uStack_e8;
        param_1[1] = uStack_d8;
        *param_1 = local_e0;
        return;
      }
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar10 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar11 = thunk_FUN_00d48444(PTR_DAT_033ee518);
      FUN_017713a8(uVar10,uVar11,0);
      goto LAB_02543c48;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = 
    Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Add__
    ;
  }
  uVar11 = thunk_FUN_00d48444(puVar9);
  FUN_016ec5b8(uVar10,uVar11,0);
LAB_02543c48:
  uVar11 = thunk_FUN_00d48444(
                             Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_7__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar11);
}


