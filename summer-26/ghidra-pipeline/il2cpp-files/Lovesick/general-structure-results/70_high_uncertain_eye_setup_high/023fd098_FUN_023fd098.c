/*
FUNCTION_NAME: FUN_023fd098
ENTRY_POINT: 023fd098
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023fd098(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [144];
  
  puVar1 = StringLiteral_5516;
  if ((DAT_03782232 & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_CVRCompositor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_7__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_bool>_get_Keys__);
    thunk_FUN_00d48444(PTR_DAT_033f2108);
    thunk_FUN_00d48444(Method_System_Data_XmlDataLoader_LoadTopMostTable__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__);
    thunk_FUN_00d48444(StringLiteral_127);
    thunk_FUN_00d48444(StringLiteral_5516);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Font>_Clear__);
    thunk_FUN_00d48444(StringLiteral_6311);
    DAT_03782232 = 1;
  }
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0241da98(param_1,param_2,0);
  puVar1 = Method_System_Data_XmlDataLoader_LoadTopMostTable__;
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x98);
    if (*(int *)(*(long *)OVR_OpenVR_CVRCompositor_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_023c34c4(uVar7,0);
    *(undefined8 *)(param_1 + 0x218) = uVar7;
    uVar7 = FUN_023c34c4(*(undefined8 *)(param_2 + 0xa0),0);
    *(undefined8 *)(param_1 + 0x220) = uVar7;
    uVar8 = *(undefined8 *)(param_1 + 0x218);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_033f2108;
    if (lVar6 != 0) {
      FUN_0241ac18(lVar6,0);
      *(undefined8 *)(lVar6 + 0xe0) = uVar7;
      *(long *)(lVar6 + 0xe8) = param_2;
      *(undefined8 *)(lVar6 + 0xd8) = uVar8;
      uVar5 = FUN_023f4190(lVar6);
      *(undefined2 *)(lVar6 + 0xf2) = uVar5;
      *(long *)(param_1 + 400) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_7__;
      if (lVar6 != 0) {
        FUN_0241ac18(lVar6,0);
        *(undefined4 *)(lVar6 + 0x10) = 500;
        *(long *)(param_1 + 0x198) = lVar6;
        uVar7 = *(undefined8 *)(param_1 + 0x218);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar4 = StringLiteral_6311;
        puVar3 = StringLiteral_127;
        puVar2 = Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
        puVar1 = Method_System_Collections_Generic_List<Font>_Clear__;
        if (lVar6 != 0) {
          FUN_02470ed0(lVar6,0x3e9,uVar7,0);
          *(long *)(param_1 + 0x1a0) = lVar6;
          uVar7 = *(undefined8 *)(param_2 + 0xd0);
          uVar8 = *(undefined8 *)(param_1 + 0x218);
          memset(auStack_e0,0,0x90);
          FUN_02431cf8(auStack_e0,uVar7,uVar8,0);
          memcpy((void *)(param_1 + 0x230),auStack_e0,0x90);
          *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x60);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02431dd4(param_1 + 0x1b8,*(undefined8 *)puVar1,0);
          FUN_02431dd4(param_1 + 0x1e8,*(undefined8 *)puVar4,0);
          *(long *)(param_1 + 0x228) = param_2;
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          puVar1 = Method_System_Collections_Generic_Dictionary<string,_bool>_get_Keys__;
          if (lVar6 != 0) {
            FUN_02423ad4(lVar6,0);
            *(long *)(param_1 + 0xe0) = lVar6;
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar6 != 0) {
              FUN_023f28c8();
              *(long *)(param_1 + 0x1a8) = lVar6;
              if (*(long *)(param_1 + 0x228) != 0) {
                *(long *)(*(long *)(param_1 + 0x228) + 0x1a8) = lVar6;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


