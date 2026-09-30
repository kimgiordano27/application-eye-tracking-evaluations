/*
FUNCTION_NAME: FUN_0669ddf8
ENTRY_POINT: 0669ddf8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4
*/


void FUN_0669ddf8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo;
  puVar2 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo;
  local_50 = param_3;
  uStack_48 = param_4;
  if ((DAT_07557f68 & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_Layout_ILayoutProcessor_TypeInfo);
    FUN_03188a78(Oisoi_UI_IPanel_TypeInfo);
    FUN_03188a78(System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
    FUN_03188a78(UnityEngine_XR_Interaction_Toolkit_HoverEnterEvent_TypeInfo);
    FUN_03188a78(System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
    DAT_07557f68 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  FUN_0669d810(param_1,param_2);
  FUN_0455f3a0(&local_60,param_2,3,0,*(undefined8 *)puVar3);
  auVar5 = FUN_04569ccc(&local_50,0,param_2,*(undefined8 *)puVar2);
  if (param_6 != 0) {
    FUN_06697788(param_6,auVar5._0_8_,auVar5._8_8_,local_60,uStack_58);
    puVar2 = Oisoi_UI_IPanel_TypeInfo;
    if (*(long *)(param_1 + 0x230) != 0) {
      FUN_03a2fbd4(*(long *)(param_1 + 0x230),local_60,uStack_58,0,0,param_2,
                   *(undefined8 *)UnityEngine_UIElements_Layout_ILayoutProcessor_TypeInfo);
      lVar4 = *(long *)(param_1 + 0x208);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (lVar4 != 0) {
        FUN_069e0220(lVar4,**(undefined4 **)(*(long *)puVar2 + 0xb8),param_2,0);
        if (*(long *)(param_1 + 0x208) != 0) {
          FUN_069e0220(*(long *)(param_1 + 0x208),
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),
                       *(undefined4 *)(param_5 + 0x14),0);
          if (*(long *)(param_1 + 0x208) != 0) {
            FUN_069e0220(*(long *)(param_1 + 0x208),
                         *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                         *(undefined4 *)(param_5 + 0x20),0);
            if (*(long *)(param_1 + 0x208) != 0) {
              FUN_069e0220(*(long *)(param_1 + 0x208),
                           *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),
                           *(undefined4 *)(param_5 + 0x2c),0);
              if (*(long *)(param_1 + 0x208) != 0) {
                FUN_069e0220(*(long *)(param_1 + 0x208),
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                             *(undefined4 *)(param_5 + 0x38),0);
                if (*(long *)(param_1 + 0x208) != 0) {
                  thunk_FUN_069e07ac(*(long *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x220),
                                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),
                                     *(undefined8 *)(param_1 + 0x230),0);
                  if (*(long *)(param_1 + 0x208) != 0) {
                    thunk_FUN_069e08f8(*(long *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x220),
                                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24),
                                       *(undefined8 *)(param_6 + 0x48),0);
                    puVar2 = System_Xml_HtmlUtf8RawTextWriter_TypeInfo;
                    if (*(long *)(param_1 + 0x208) != 0) {
                      iVar1 = param_2 + 0x7e;
                      if (-1 < param_2 + 0x3f) {
                        iVar1 = param_2 + 0x3f;
                      }
                      FUN_069e0ccc(*(long *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x220),
                                   iVar1 >> 6,1,1,0);
                      FUN_0455f688(&local_60,*(undefined8 *)puVar2);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


