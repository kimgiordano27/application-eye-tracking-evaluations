/*
FUNCTION_NAME: UnityEngine.Application.AdvertisingIdentifierCallback$$.ctor
ENTRY_POINT: 035711e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long UnityEngine_Application_AdvertisingIdentifierCallback___ctor(long param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  undefined4 unaff_w23;
  ulong unaff_x24;
  int iVar9;
  long lVar10;
  long in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (in_ZR || in_NG != in_OV) {
    lVar10 = 6;
    if (!in_ZR) {
      lVar10 = 4;
    }
    lVar7 = 5;
    if (unaff_w20 != 500) {
      lVar7 = lVar10;
    }
  }
  else if (unaff_w20 == 700) {
    lVar7 = 7;
  }
  else if (unaff_w20 == 800) {
    lVar7 = 8;
  }
  else if (unaff_w20 == 900) {
    lVar7 = 9;
  }
  else {
    lVar7 = 4;
  }
  if (param_1 == 0) {
UnityEngine_Application_LogCallback__Invoke:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(param_1 + 0x18) <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  param_1 = param_1 + lVar7 * 0x10;
  plVar2 = (long *)(param_1 + 0x20);
  if ((unaff_w21 & 2) != 0) {
    plVar2 = (long *)(param_1 + 0x28);
  }
  lVar10 = *plVar2;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036cee6c(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar10 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    lVar7 = *(long *)(lVar10 + 200);
    if (lVar7 == 0) {
      FUN_03568878(lVar10);
      lVar7 = *(long *)(lVar10 + 200);
      if (lVar7 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    }
    uStack0000000000000008 = unaff_w23;
    uVar6 = FUN_0219f8b8(lVar7,&stack0x00000008);
    if (((uVar6 & 1) != 0) ||
       ((*(int *)(lVar10 + 0x48) == 1 &&
        (uVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(lVar10,unaff_w23),
        (uVar6 & 1) != 0)))) {
      *unaff_x19 = 1;
      return in_stack_00000000;
    }
  }
  lVar10 = *(long *)(unaff_x22 + 200);
  if (lVar10 == 0) {
    FUN_03568878();
    lVar10 = *(long *)(unaff_x22 + 200);
    if (lVar10 == 0) goto UnityEngine_Application_LogCallback__Invoke;
  }
  uStack0000000000000008 = unaff_w23;
  uVar6 = FUN_0219f8b8(lVar10,&stack0x00000008);
  if ((((uVar6 & 1) == 0) &&
      (((*(int *)(unaff_x22 + 0x48) != 1 ||
        (uVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(), (uVar6 & 1) == 0)) &&
       (puVar4 = PTR_DAT_03cbdf88, bVar1 = in_stack_00000000 == 0, in_stack_00000000 = 0, bVar1))))
     && ((unaff_x24 & 1) != 0)) {
    lVar10 = *(long *)(unaff_x22 + 0x138);
    if ((lVar10 != 0) && (iVar3 = *(int *)(lVar10 + 0x18), 0 < iVar3)) {
      iVar9 = 0;
      do {
        FUN_02215a88(lVar10,iVar9,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc45a8);
        lVar7 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_036d35a8(lVar7,0,0);
        if ((uVar6 & 1) == 0) {
          if (lVar7 == 0) goto UnityEngine_Application_LogCallback__Invoke;
          uVar5 = FUN_0355ea04(lVar7,0);
          lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar8);
            lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) goto UnityEngine_Application_LogCallback__Invoke;
          uStack0000000000000008 = uVar5;
          uVar6 = FUN_021e5f08(lVar8,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc8e90);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(unaff_x22 + 0x1c0) == 0) goto UnityEngine_Application_LogCallback__Invoke;
            uStack0000000000000008 = uVar5;
            FUN_021e5f08(*(long *)(unaff_x22 + 0x1c0),&stack0x00000008,
                         *(undefined8 *)PTR_DAT_03cc8e90);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar7 = FUN_03571120(unaff_w23,lVar7,1,unaff_w21,unaff_w20);
            if (lVar7 != 0) {
              return lVar7;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar3 != iVar9);
    }
    in_stack_00000000 = 0;
  }
  return in_stack_00000000;
}


