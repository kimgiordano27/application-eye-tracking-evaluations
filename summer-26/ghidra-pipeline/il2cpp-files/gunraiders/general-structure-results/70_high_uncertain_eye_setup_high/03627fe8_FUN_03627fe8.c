/*
FUNCTION_NAME: FUN_03627fe8
ENTRY_POINT: 03627fe8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03627fe8(long param_1,long *param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_045381b2 & 1) == 0) {
    FUN_01c5d288(Method_System_Array_Resize<OVRPlugin_Rectf>__);
    FUN_01c5d288(System_Linq_Expressions_Interpreter_OffsetInstruction_TypeInfo);
    DAT_045381b2 = 1;
  }
  puVar2 = System_Linq_Expressions_Interpreter_OffsetInstruction_TypeInfo;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_System_Array_Resize<OVRPlugin_Rectf>__ + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Array_Resize<OVRPlugin_Rectf>__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_2);
    }
    FUN_03622ad0(param_1,param_2[2]);
    lVar3 = *(long *)puVar2;
    lVar5 = param_2[3];
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar2;
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_036281f0;
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xd0);
    lVar3 = FUN_0361d2a8(*(long *)(param_1 + 0x10));
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_036281f0;
    if (lVar5 == lVar6) {
      FUN_0361d784(*(long *)(param_1 + 0x10),lVar3);
      uVar4 = FUN_035f92dc(param_2,0);
      if ((param_3 & 1) == 0) {
        FUN_03622ad0(param_1,uVar4);
      }
      else {
        FUN_03623b44();
      }
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_036281f0;
    }
    else {
      FUN_0361d7f0();
      if ((param_3 & 1) == 0) {
        FUN_03622ad0(param_1,param_2[3]);
      }
      else {
        FUN_03623b44();
      }
      lVar6 = FUN_035f92dc(param_2,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_036281f0;
      if (lVar6 != *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0)) {
        lVar6 = FUN_0361d2a8(lVar5);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_036281f0;
        FUN_0361d694(*(long *)(param_1 + 0x10),lVar6,0,~param_3 & 1);
        if ((*(long *)(param_1 + 0x10) == 0) || (lVar3 == 0)) goto LAB_036281f0;
        FUN_0360c344(lVar3,*(long *)(param_1 + 0x10),0);
        uVar4 = FUN_035f92dc(param_2,0);
        if ((param_3 & 1) == 0) {
          FUN_03622ad0(param_1,uVar4);
        }
        else {
          FUN_03623b44();
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_036281f0;
        goto LAB_036281d8;
      }
    }
    lVar6 = lVar3;
    if (lVar3 != 0) {
LAB_036281d8:
      FUN_0360c344(lVar6,lVar5,0);
      return;
    }
  }
LAB_036281f0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


