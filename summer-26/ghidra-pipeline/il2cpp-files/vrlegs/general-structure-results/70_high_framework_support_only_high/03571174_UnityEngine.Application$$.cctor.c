/*
FUNCTION_NAME: UnityEngine.Application$$.cctor
ENTRY_POINT: 03571174
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_9;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


long UnityEngine_Application___cctor(void)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
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
  long unaff_x25;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cc45a0);
  FUN_01ab69ac(PTR_DAT_03cc45a8);
  FUN_01ab69ac(PTR_DAT_03cbdf88);
  FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
  *(undefined1 *)(unaff_x25 + 0xfe1) = 1;
  *unaff_x19 = 0;
  if (((unaff_w21 >> 1 & 1) == 0) && (unaff_w20 == 400)) {
    if (unaff_x22 == 0) goto UnityEngine_Application_LogCallback__Invoke;
  }
  else {
    if (unaff_x22 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    lVar5 = *(long *)(unaff_x22 + 0x198);
    if (unaff_w20 < 0x191) {
      if (unaff_w20 < 0xc9) {
        lVar7 = 2;
        if (unaff_w20 != 200) {
          lVar7 = 4;
        }
        if (unaff_w20 == 100) {
          lVar7 = 1;
        }
      }
      else {
        lVar7 = 3;
        if (unaff_w20 != 300) {
          lVar7 = 4;
        }
      }
    }
    else if (unaff_w20 < 0x259) {
      lVar8 = 6;
      if (unaff_w20 != 600) {
        lVar8 = 4;
      }
      lVar7 = 5;
      if (unaff_w20 != 500) {
        lVar7 = lVar8;
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
    if (lVar5 == 0) goto UnityEngine_Application_LogCallback__Invoke;
    if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar5 = lVar5 + lVar7 * 0x10;
    plVar1 = (long *)(lVar5 + 0x20);
    if ((unaff_w21 & 2) != 0) {
      plVar1 = (long *)(lVar5 + 0x28);
    }
    lVar5 = *plVar1;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_036cee6c(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (lVar5 == 0) goto UnityEngine_Application_LogCallback__Invoke;
      lVar7 = *(long *)(lVar5 + 200);
      if (lVar7 == 0) {
        FUN_03568878(lVar5);
        lVar7 = *(long *)(lVar5 + 200);
        if (lVar7 == 0) goto UnityEngine_Application_LogCallback__Invoke;
      }
      uStack0000000000000008 = unaff_w23;
      uVar6 = FUN_0219f8b8(lVar7,&stack0x00000008);
      if (((uVar6 & 1) != 0) ||
         ((*(int *)(lVar5 + 0x48) == 1 &&
          (uVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(lVar5,unaff_w23),
          (uVar6 & 1) != 0)))) {
        *unaff_x19 = 1;
        return 0;
      }
    }
  }
  lVar5 = *(long *)(unaff_x22 + 200);
  if (lVar5 == 0) {
    FUN_03568878();
    lVar5 = *(long *)(unaff_x22 + 200);
    if (lVar5 == 0) {
UnityEngine_Application_LogCallback__Invoke:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  uStack0000000000000008 = unaff_w23;
  uVar6 = FUN_0219f8b8(lVar5,&stack0x00000008);
  if ((((uVar6 & 1) == 0) &&
      (((*(int *)(unaff_x22 + 0x48) != 1 ||
        (uVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(), (uVar6 & 1) == 0)) &&
       (puVar3 = PTR_DAT_03cbdf88, (unaff_x24 & 1) != 0)))) &&
     ((lVar5 = *(long *)(unaff_x22 + 0x138), lVar5 != 0 &&
      (iVar2 = *(int *)(lVar5 + 0x18), 0 < iVar2)))) {
    iVar9 = 0;
    do {
      FUN_02215a88(lVar5,iVar9,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc45a8);
      lVar7 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036d35a8(lVar7,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar7 == 0) goto UnityEngine_Application_LogCallback__Invoke;
        uVar4 = FUN_0355ea04(lVar7,0);
        lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar8);
          lVar8 = *(long *)OVRPlugin_Size3f_TypeInfo;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto UnityEngine_Application_LogCallback__Invoke;
        uStack0000000000000008 = uVar4;
        uVar6 = FUN_021e5f08(lVar8,&stack0x00000008,*(undefined8 *)PTR_DAT_03cc8e90);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x22 + 0x1c0) == 0) goto UnityEngine_Application_LogCallback__Invoke;
          uStack0000000000000008 = uVar4;
          FUN_021e5f08(*(long *)(unaff_x22 + 0x1c0),&stack0x00000008,*(undefined8 *)PTR_DAT_03cc8e90
                      );
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
    } while (iVar2 != iVar9);
  }
  return 0;
}


