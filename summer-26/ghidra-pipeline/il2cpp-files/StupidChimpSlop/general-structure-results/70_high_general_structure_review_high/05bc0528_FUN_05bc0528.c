/*
FUNCTION_NAME: FUN_05bc0528
ENTRY_POINT: 05bc0528
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05bc0528(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_06a5749e & 1) == 0) {
    FUN_02d4dc40(Method_System_Net_FtpWebRequest_set_ContentOffset__);
    FUN_02d4dc40(PTR_DAT_0664b810);
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleFontDefinition,_FontDefinition>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleInt,_int>__
                );
    FUN_02d4dc40(Method_UnityEngine_Component_GetComponent<WebRtcAudioDsp>__);
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleLength,_Length>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleRotate,_Rotate>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleScale,_Scale>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleTextAutoSize,_TextAutoSize>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleTextShadow,_TextShadow>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleTransformOrigin,_TransformOrigin>__
                );
    DAT_06a5749e = 1;
  }
  FUN_05bdacc8(param_1 + 8,0);
  if (param_2 != 0) {
    FUN_05bdd694(param_1 + 0x18,*(undefined8 *)(param_2 + 0x40),0);
    if (param_1[0x18] != 0) {
      uVar6 = FUN_05eea1cc(param_1[0x18],
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleScale,_Scale>__
                           ,0);
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      if (param_1[0x18] != 0) {
        uVar6 = FUN_05eea1cc(param_1[0x18],
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleTextAutoSize,_TextAutoSize>__
                             ,0);
        *(undefined4 *)((long)param_1 + 0xe4) = uVar6;
        puVar5 = 
        Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleTransformOrigin,_TransformOrigin>__
        ;
        puVar4 = 
        Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleFontDefinition,_FontDefinition>__
        ;
        puVar3 = Method_System_Net_FtpWebRequest_set_ContentOffset__;
        puVar2 = Method_UnityEngine_Component_GetComponent<WebRtcAudioDsp>__;
        puVar1 = PTR_DAT_0664b810;
        if (param_1[0x18] != 0) {
          uVar6 = FUN_05eea1cc(param_1[0x18],
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleTextShadow,_TextShadow>__
                               ,0);
          *(undefined4 *)(param_1 + 0x1d) = uVar6;
          param_1[0x1e] = param_3;
          thunk_FUN_02dc1ef0(param_1 + 0x1e,param_3);
          param_1[0x20] = 0;
          param_1[0x1f] = 0;
          param_1[0x22] = 0;
          param_1[0x21] = 0;
          FUN_05bbf85c(param_1 + 0x1f);
          param_1[0x2d] = 0;
          param_1[0x26] = 0;
          param_1[0x25] = 0;
          param_1[0x28] = 0;
          param_1[0x27] = 0;
          param_1[0x2a] = 0;
          param_1[0x29] = 0;
          param_1[0x2c] = 0;
          param_1[0x2b] = 0;
          param_1[0x24] = 0;
          param_1[0x23] = 0;
          FUN_05bbfd54(param_1 + 0x23);
          uVar7 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
          FUN_05b06d3c(uVar7,*(undefined8 *)puVar5,0);
          param_1[0x2e] = uVar7;
          thunk_FUN_02dc1ef0(param_1 + 0x2e,uVar7);
          local_50 = 0;
          uStack_48 = 0;
          FUN_0386b5b8(&local_50,1,4,1,*(undefined8 *)puVar4);
          uVar7 = *(undefined8 *)puVar1;
          param_1[0x30] = uStack_48;
          param_1[0x2f] = local_50;
          uVar7 = thunk_FUN_02d8a638(uVar7);
          FUN_05ee9d54(uVar7,1,0x20,8,0);
          param_1[0x31] = uVar7;
          thunk_FUN_02dc1ef0(param_1 + 0x31,uVar7);
          uVar7 = thunk_FUN_02d8a638(*(undefined8 *)puVar3);
          FUN_05f0c674(uVar7,0);
          param_1[0x32] = uVar7;
          thunk_FUN_02dc1ef0(param_1 + 0x32,uVar7);
          puVar1 = 
          Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleInt,_int>__;
          if (param_1[0x32] != 0) {
            FUN_05f0362c(param_1[0x32],
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleRotate,_Rotate>__
                         ,0);
            uVar6 = FUN_058e48a8(4,0);
            local_60 = 0;
            uStack_58 = 0;
            FUN_03925380(&local_60,0x10,uVar6,*(undefined8 *)puVar1);
            param_1[1] = uStack_58;
            *param_1 = local_60;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


