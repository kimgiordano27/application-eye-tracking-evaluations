/*
FUNCTION_NAME: FUN_060481d8
ENTRY_POINT: 060481d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_060481d8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_48;
  
  if ((DAT_06dc4c3c & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    FUN_02d965b8(PTR_DAT_069ff848);
    FUN_02d965b8(Method_Unity_Netcode_ComponentFactory_SetDefault<IDeferredNetworkMessageManager>__)
    ;
    FUN_02d965b8(Method_UnityEngine_Component_TryGetComponent<OvrAvatarAnimationBehavior>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    FUN_02d965b8(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    DAT_06dc4c3c = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06046f88(lVar12);
    uVar5 = FUN_054e255c(*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),
                         **(undefined8 **)(*(long *)PTR_DAT_069ff848 + 0xb8),
                         (*(undefined8 **)(*(long *)PTR_DAT_069ff848 + 0xb8))[1],0);
    puVar3 = Method_UnityEngine_Component_TryGetComponent<OvrAvatarAnimationBehavior>__;
    if ((uVar5 & 1) != 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar7 = thunk_FUN_02dd3144();
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
                                );
      FUN_0544bf54(uVar7,uVar8,0);
      uVar8 = thunk_FUN_02dfd288(
                                Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<TimeValue>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar8);
    }
    plVar11 = *(long **)(lVar12 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_Component_TryGetComponent<OvrAvatarAnimationBehavior>__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06048358;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_UnityEngine_Component_TryGetComponent<OvrAvatarAnimationBehavior>__
                          ,0);
LAB_06048358:
    plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    uVar7 = *(undefined8 *)(param_1 + 10);
    uVar8 = *(undefined8 *)(param_1 + 0xc);
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                              );
    FUN_0552aca4(lVar9,0);
    puVar4 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
    *(undefined8 *)(lVar9 + 0x10) = uVar7;
    *(undefined8 *)(lVar9 + 0x18) = uVar8;
                    /* try { // try from 06048394 to 061484bb has its CatchHandler @ 06048394
                       catch() { ... } // from try @ 06048394 with catch @ 06048394
                       catch() { ... } // from try @ 06048678 with catch @ 06048394
                       catch() { ... } // from try @ 060486c4 with catch @ 06048394
                       catch() { ... } // from try @ 060486e0 with catch @ 06048394
                       catch() { ... } // from try @ 06048754 with catch @ 06048394
                       catch() { ... } // from try @ 06048780 with catch @ 06048394 */
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_06048978(uVar7,lVar9);
    plVar13 = *(long **)(lVar12 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06048400;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar3,1);
LAB_06048400:
    uVar8 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_Unity_Netcode_ComponentFactory_SetDefault<IDeferredNetworkMessageManager>__) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0604846c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_Unity_Netcode_ComponentFactory_SetDefault<IDeferredNetworkMessageManager>__
                          ,1);
LAB_0604846c:
    lVar12 = (*(code *)*puVar6)(plVar11,uVar7,uVar8,puVar6[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_48 = FUN_0481d028(lVar12,*(undefined8 *)
                                    Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__
                           );
    uVar5 = FUN_047e6248(&local_48,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_48;
      LeanTween__value(param_1 + 0xe,0);
                    /* try { // try from 06048528 to 0614859b has its CatchHandler @ 06048718 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031fc3a8(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
      return;
    }
  }
                    /* try { // try from 060484bc to 061484bf has its CatchHandler @ 060486e0 */
  lVar12 = FUN_047e6288(&local_48,
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 060484cc to 061484d3 has its CatchHandler @ 060486f0 */
  if (*(long *)(lVar12 + 0x20) != 0) {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20);
    if (lVar12 != 0) {
      uVar7 = *(undefined8 *)(lVar12 + 0x10);
      iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
      *param_1 = -2;
      if (iVar1 == 0) {
        thunk_FUN_02df485c();
      }
      FUN_040b19d8(param_1 + 2,uVar7,*(undefined8 *)puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


