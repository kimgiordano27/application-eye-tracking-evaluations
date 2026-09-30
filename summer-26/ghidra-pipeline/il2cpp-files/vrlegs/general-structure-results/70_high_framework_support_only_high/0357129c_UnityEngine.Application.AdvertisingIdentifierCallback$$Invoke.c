/*
FUNCTION_NAME: UnityEngine.Application.AdvertisingIdentifierCallback$$Invoke
ENTRY_POINT: 0357129c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long UnityEngine_Application_AdvertisingIdentifierCallback__Invoke(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined4 unaff_w23;
  ulong unaff_x24;
  int iVar8;
  long lVar9;
  long in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar9 = *param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(lVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar9 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    lVar6 = *(long *)(lVar9 + 200);
    if (lVar6 == 0) {
      FUN_03568878(lVar9);
      lVar6 = *(long *)(lVar9 + 200);
      if (lVar6 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    }
    uStack0000000000000008 = unaff_w23;
    uVar5 = FUN_0219f8b8(lVar6,&stack0x00000008);
    if (((uVar5 & 1) != 0) ||
       ((*(int *)(lVar9 + 0x48) == 1 &&
        (uVar5 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(lVar9,unaff_w23),
        (uVar5 & 1) != 0)))) {
      *unaff_x19 = 1;
      return in_stack_00000000;
    }
  }
  lVar9 = *(long *)(unaff_x22 + 200);
  if (lVar9 == 0) {
    FUN_03568878();
    lVar9 = *(long *)(unaff_x22 + 200);
    if (lVar9 == 0) {
UnityEngine_Application_LogCallback__Invoke:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  uStack0000000000000008 = unaff_w23;
  uVar5 = FUN_0219f8b8(lVar9,&stack0x00000008);
  if ((((uVar5 & 1) == 0) &&
      (((*(int *)(unaff_x22 + 0x48) != 1 ||
        (uVar5 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(), (uVar5 & 1) == 0)) &&
       (puVar3 = PTR_DAT_03cbdf88, bVar1 = in_stack_00000000 == 0, in_stack_00000000 = 0, bVar1))))
     && ((unaff_x24 & 1) != 0)) {
    lVar9 = *(long *)(unaff_x22 + 0x138);
    if ((lVar9 != 0) && (iVar2 = *(int *)(lVar9 + 0x18), 0 < iVar2)) {
      iVar8 = 0;
      do {
        FUN_02215a88(lVar9,iVar8,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc45a8);
        lVar6 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036d35a8(lVar6,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) goto UnityEngine_Application_LogCallback__Invoke;
          uVar4 = FUN_0355ea04(lVar6,0);
          lVar7 = *(long *)OVRPlugin_Size3f_TypeInfo;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar7);
            lVar7 = *(long *)OVRPlugin_Size3f_TypeInfo;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 == 0) goto UnityEngine_Application_LogCallback__Invoke;
          uStack0000000000000008 = uVar4;
          uVar5 = FUN_021e5f08(lVar7,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc8e90);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(unaff_x22 + 0x1c0) == 0) goto UnityEngine_Application_LogCallback__Invoke;
            uStack0000000000000008 = uVar4;
            FUN_021e5f08(*(long *)(unaff_x22 + 0x1c0),&stack0x00000008,
                         *(undefined8 *)PTR_DAT_03cc8e90);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar6 = FUN_03571120(unaff_w23,lVar6,1,unaff_w21,unaff_w20);
            if (lVar6 != 0) {
              return lVar6;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    in_stack_00000000 = 0;
  }
  return in_stack_00000000;
}


