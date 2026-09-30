/*
FUNCTION_NAME: FUN_06823134
ENTRY_POINT: 06823134
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 FUN_06823134(long param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined1 auStack_50 [16];
  
  if ((bRam00000000071d6966 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo);
    FUN_02f07e70(UnityEngine_InputSystem_StepCounter_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04e50);
    FUN_02f07e70(PTR_DAT_06d04e60);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d3ada0);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d38a30);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__GetDashboardOverlaySceneProcess_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__GetGamepadFocusOverlay_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVROverlay__GetHighQualityOverlay_TypeInfo);
    bRam00000000071d6966 = 1;
  }
  puVar2 = PTR_DAT_06d01e20;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_06823660;
  auStack_50 = FUN_0404900c(*(long *)(param_1 + 0x10),*(int *)(param_1 + 0x40) + param_2,
                            *(undefined8 *)OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo);
  iVar5 = FUN_068e1af8(auStack_50 + 8,0);
  if (iVar5 == 1) {
    if (auStack_50._12_4_ != 6) {
      uStack_68 = *(undefined8 *)OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo;
      iStack_58 = auStack_50._12_4_;
      uStack_60 = 0xffffffffffffffff;
      uVar6 = FUN_05638848(&uStack_68,0);
      puVar8 = (undefined8 *)OVR_OpenVR_IVROverlay__GetDashboardOverlaySceneProcess_TypeInfo;
UnityEngine_Analytics_Analytics__RegisterEvent:
      uVar6 = FUN_05458458(*puVar8,uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
      }
      FUN_06694324(uVar6,0);
    }
    plVar9 = (long *)0x0;
  }
  else {
    if (iVar5 != 6) {
      if (iVar5 != 5) {
        iStack_58 = FUN_068e1af8(auStack_50 + 8,0);
        uStack_68 = *(undefined8 *)PTR_DAT_06d38a30;
        uStack_60 = 0xffffffffffffffff;
        uVar6 = FUN_05638848(&uStack_68,0);
        puVar8 = (undefined8 *)OVR_OpenVR_IVROverlay__GetGamepadFocusOverlay_TypeInfo;
        goto UnityEngine_Analytics_Analytics__RegisterEvent;
      }
      if (auStack_50._0_8_ == 0) goto LAB_06823660;
      uVar6 = FUN_068e2078(auStack_50._0_8_,auStack_50._8_8_,0);
      uVar7 = FUN_05465718(uVar6,0);
      puVar3 = PTR_DAT_06d01eb0;
      if ((uVar7 & 1) == 0) {
        uVar10 = *(undefined8 *)PTR_DAT_06d04e50;
        if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar10 = FUN_056109c0(uVar10,0);
        puVar4 = PTR_DAT_06d3ada0;
        uVar12 = *(undefined4 *)(param_1 + 0x58);
        if (*(int *)(*(long *)PTR_DAT_06d3ada0 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d3ada0);
        }
        plVar9 = (long *)FUN_06895ef4(uVar12,uVar6,uVar10,0);
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)0x0;
        }
        else if (*plVar9 != *(long *)PTR_DAT_06d04e60) {
          plVar9 = (long *)0x0;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_066ca6a0(plVar9,0,0);
        if ((uVar7 & 1) == 0) goto LAB_068235b4;
        uVar10 = *(undefined8 *)OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar10 = FUN_056109c0(uVar10,0);
        uVar12 = *(undefined4 *)(param_1 + 0x58);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar4);
        }
        plVar11 = (long *)FUN_06895ef4(uVar12,uVar6,uVar10,0);
        if (plVar11 == (long *)0x0) goto LAB_068235b4;
        bVar1 = *(byte *)(*(long *)UnityEngine_InputSystem_StepCounter_TypeInfo + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_068235b4;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_InputSystem_StepCounter_TypeInfo) {
          plVar11 = (long *)0x0;
        }
      }
      else {
        plVar9 = (long *)0x0;
LAB_068235b4:
        plVar11 = (long *)0x0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_066ca6a0(plVar11,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_066ca6a0(plVar9,0,0);
        if ((uVar7 & 1) != 0) {
          uVar6 = FUN_0545c378(*(undefined8 *)OVR_OpenVR_IVROverlay__GetHighQualityOverlay_TypeInfo,
                               uVar6,0);
          if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
          }
          FUN_06694324(uVar6,0);
        }
      }
      goto LAB_06823384;
    }
    if (auStack_50._0_8_ == 0) {
LAB_06823660:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar9 = (long *)FUN_068e2140(auStack_50._0_8_,auStack_50._8_8_,0);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else if (*plVar9 != *(long *)PTR_DAT_06d04e60) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar7 = FUN_066ca6a0(plVar9,0,0);
    if ((uVar7 & 1) != 0) {
      if (auStack_50._0_8_ == 0) goto LAB_06823660;
      plVar11 = (long *)FUN_068e2140(auStack_50._0_8_,auStack_50._8_8_,0);
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)UnityEngine_InputSystem_StepCounter_TypeInfo + 0x130);
        if (bVar1 <= *(byte *)(*plVar11 + 0x130)) {
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)UnityEngine_InputSystem_StepCounter_TypeInfo) {
            plVar11 = (long *)0x0;
          }
          goto LAB_06823384;
        }
      }
    }
  }
  plVar11 = (long *)0x0;
LAB_06823384:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar7 = FUN_066c971c(plVar9,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar7 = FUN_066c971c(plVar11,0,0);
    uVar6 = 0;
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_068be498(plVar11,0);
    }
  }
  else {
    uVar6 = FUN_068be470(plVar9,0);
  }
  return uVar6;
}


