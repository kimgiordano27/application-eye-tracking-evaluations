/*
FUNCTION_NAME: FUN_06bf0f80
ENTRY_POINT: 06bf0f80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_06bf0f80(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar11 = System_Action<IInteractorView>_TypeInfo;
  puVar10 = System_Action<IInteractor>_TypeInfo;
  puVar8 = System_Action<IHandGrabState>_TypeInfo;
  puVar7 = System_Action<IDebugDisplaySettingsData>_TypeInfo;
  puVar6 = System_Action<IAsyncResult>_TypeInfo;
  puVar5 = System_Action<IAsyncOperation>_TypeInfo;
  puVar9 = System_Action<IAsyncOperation>_TypeInfo;
  puVar4 = System_Action<HandGrabInteractor>_TypeInfo;
  puVar3 = System_Action<HTTPRequest>_TypeInfo;
  if ((DAT_07a4ff91 & 1) == 0) {
    FUN_031f20f4(System_Action<IResourceProvider>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075de370);
    FUN_031f20f4(System_Action<IAsyncOperation>_TypeInfo);
    FUN_031f20f4(System_Action<HandGrabInteractor>_TypeInfo);
    FUN_031f20f4(System_Action<HTTPRequest>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075de368);
    FUN_031f20f4(PTR_DAT_075d7d50);
    FUN_031f20f4(System_Action<IUpdateReceiver>_TypeInfo);
    FUN_031f20f4(System_Action<IAsyncOperation>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075b75c8);
    FUN_031f20f4(PTR_DAT_075b75d0);
    FUN_031f20f4(PTR_DAT_075b75d8);
    FUN_031f20f4(PTR_DAT_075f1458);
    FUN_031f20f4(PTR_DAT_075d7d80);
    FUN_031f20f4(PTR_DAT_075d6700);
    FUN_031f20f4(System_Action<IXRInteractable>_TypeInfo);
    FUN_031f20f4(System_Action<IXRInteractor>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075b7608);
    FUN_031f20f4(System_Action<IInteractor>_TypeInfo);
    FUN_031f20f4(System_Action<InputDevice>_TypeInfo);
    FUN_031f20f4(System_Action<InputUpdateType>_TypeInfo);
    FUN_031f20f4(System_Action<IHandGrabState>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d74d8);
    FUN_031f20f4(System_Action<InstanceHandle>_TypeInfo);
    FUN_031f20f4(System_Action<int>_TypeInfo);
    FUN_031f20f4(Best_HTTP_Request_Timings_TimingEventInfo_var);
    FUN_031f20f4(System_Action<InteractableRegisteredEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<AsyncOperationHandle<IResourceLocator>>_TypeInfo);
    FUN_031f20f4(System_Action<IAsyncResult>_TypeInfo);
    FUN_031f20f4(System_Action<InteractableStateChangeArgs>_TypeInfo);
    FUN_031f20f4(System_Action<InteractableUnregisteredEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<InteractionGroupUnregisteredEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<InteractorRegisteredEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<InteractorStateChangeArgs>_TypeInfo);
    FUN_031f20f4(System_Action<IDebugDisplaySettingsData>_TypeInfo);
    FUN_031f20f4(System_Action<IInteractorView>_TypeInfo);
    FUN_031f20f4(System_Action<InteractorUnregisteredEventArgs>_TypeInfo);
    FUN_031f20f4(System_Action<LayoutRebuilder>_TypeInfo);
    FUN_031f20f4(System_Action<LocomotionEvent>_TypeInfo);
    FUN_031f20f4(System_Action<LocomotionProvider>_TypeInfo);
    FUN_031f20f4(System_Action<LocomotionSystem>_TypeInfo);
    FUN_031f20f4(System_Action<LogEntry>_TypeInfo);
    DAT_07a4ff91 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_05e44034(param_1,0);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_05812e88(uVar13,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x40),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_05812e88(uVar13,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x48),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar9);
  FUN_05812e88(uVar13,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x50),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
  FUN_06bf1d98();
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x28),uVar13);
  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar7);
  FUN_06bf1ea8();
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x30),uVar13);
  lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar8);
  FUN_047aec0c(lVar14,*(undefined8 *)puVar10);
  lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar11);
  FUN_05e44034(lVar15,0);
  if (lVar15 != 0) {
    *(long *)(lVar15 + 0x10) = param_1;
    thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
    puVar3 = System_Action<IXRInteractable>_TypeInfo;
    if (lVar14 != 0) {
      lVar20 = *(long *)(lVar14 + 0x10);
      lVar21 = *(long *)System_Action<IXRInteractable>_TypeInfo;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      puVar4 = System_Action<InteractionGroupUnregisteredEventArgs>_TypeInfo;
      if (lVar20 != 0) {
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
          *plVar16 = lVar15;
          thunk_FUN_0329bf60(plVar16,lVar15);
        }
        else {
          FUN_047af440(lVar14,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
        FUN_05e44034(lVar15,0);
        if (lVar15 != 0) {
          *(long *)(lVar15 + 0x10) = param_1;
          thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
          lVar20 = *(long *)(lVar14 + 0x10);
          lVar21 = *(long *)puVar3;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          puVar4 = System_Action<LocomotionSystem>_TypeInfo;
          if (lVar20 != 0) {
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
              *plVar16 = lVar15;
              thunk_FUN_0329bf60(plVar16,lVar15);
            }
            else {
              FUN_047af440(lVar14,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
            FUN_05e44034(lVar15,0);
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x10) = param_1;
              thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
              lVar20 = *(long *)(lVar14 + 0x10);
              lVar21 = *(long *)puVar3;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              puVar4 = System_Action<InteractableStateChangeArgs>_TypeInfo;
              if (lVar20 != 0) {
                uVar2 = *(uint *)(lVar14 + 0x18);
                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar16 = lVar15;
                  thunk_FUN_0329bf60(plVar16,lVar15);
                }
                else {
                  FUN_047af440(lVar14,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                FUN_06be1ce0(lVar15,0);
                if (lVar15 != 0) {
                  *(long *)(lVar15 + 0x10) = param_1;
                  thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                  lVar20 = *(long *)(lVar14 + 0x10);
                  lVar21 = *(long *)puVar3;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar4 = System_Action<InteractionGroupRegisteredEventArgs>_TypeInfo;
                  if (lVar20 != 0) {
                    uVar2 = *(uint *)(lVar14 + 0x18);
                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar16 = lVar15;
                      thunk_FUN_0329bf60(plVar16,lVar15);
                    }
                    else {
                      FUN_047af440(lVar14,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                    FUN_06be4080(lVar15,0);
                    if (lVar15 != 0) {
                      *(long *)(lVar15 + 0x10) = param_1;
                      thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                      lVar20 = *(long *)(lVar14 + 0x10);
                      lVar21 = *(long *)puVar3;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      puVar4 = System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
                      if (lVar20 != 0) {
                        uVar2 = *(uint *)(lVar14 + 0x18);
                        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar16 = lVar15;
                          thunk_FUN_0329bf60(plVar16,lVar15);
                        }
                        else {
                          FUN_047af440(lVar14,lVar15,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                        FUN_05e44034(lVar15,0);
                        if (lVar15 != 0) {
                          *(long *)(lVar15 + 0x10) = param_1;
                          thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                          lVar20 = *(long *)(lVar14 + 0x10);
                          lVar21 = *(long *)puVar3;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          puVar4 = System_Action<InstanceHandle>_TypeInfo;
                          if (lVar20 != 0) {
                            uVar2 = *(uint *)(lVar14 + 0x18);
                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                              *plVar16 = lVar15;
                              thunk_FUN_0329bf60(plVar16,lVar15);
                            }
                            else {
                              FUN_047af440(lVar14,lVar15,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                            FUN_06be135c(lVar15,0);
                            if (lVar15 != 0) {
                              *(long *)(lVar15 + 0x10) = param_1;
                              thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                              lVar20 = *(long *)(lVar14 + 0x10);
                              lVar21 = *(long *)puVar3;
                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                              puVar4 = System_Action<InteractableUnregisteredEventArgs>_TypeInfo;
                              if (lVar20 != 0) {
                                uVar2 = *(uint *)(lVar14 + 0x18);
                                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                  *plVar16 = lVar15;
                                  thunk_FUN_0329bf60(plVar16,lVar15);
                                }
                                else {
                                  FUN_047af440(lVar14,lVar15,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                FUN_06be3230(lVar15,0);
                                if (lVar15 != 0) {
                                  *(long *)(lVar15 + 0x10) = param_1;
                                  thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                                  lVar20 = *(long *)(lVar14 + 0x10);
                                  lVar21 = *(long *)puVar3;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  puVar4 = System_Action<InteractorRegisteredEventArgs>_TypeInfo;
                                  if (lVar20 != 0) {
                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                      *plVar16 = lVar15;
                                      thunk_FUN_0329bf60(plVar16,lVar15);
                                    }
                                    else {
                                      FUN_047af440(lVar14,lVar15,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                    FUN_05e44034(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(long *)(lVar15 + 0x10) = param_1;
                                      thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                                      lVar20 = *(long *)(lVar14 + 0x10);
                                      lVar21 = *(long *)puVar3;
                                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                      puVar4 = System_Action<InteractorStateChangeArgs>_TypeInfo;
                                      if (lVar20 != 0) {
                                        uVar2 = *(uint *)(lVar14 + 0x18);
                                        if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                          plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                                          *plVar16 = lVar15;
                                          thunk_FUN_0329bf60(plVar16,lVar15);
                                        }
                                        else {
                                          FUN_047af440(lVar14,lVar15,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                        FUN_05e44034(lVar15,0);
                                        if (lVar15 != 0) {
                                          *(long *)(lVar15 + 0x10) = param_1;
                                          thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                                          lVar20 = *(long *)(lVar14 + 0x10);
                                          lVar21 = *(long *)puVar3;
                                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                          puVar4 = System_Action<LogEntry>_TypeInfo;
                                          if (lVar20 != 0) {
                                            uVar2 = *(uint *)(lVar14 + 0x18);
                                            if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                              plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                              *plVar16 = lVar15;
                                              thunk_FUN_0329bf60(plVar16,lVar15);
                                            }
                                            else {
                                              FUN_047af440(lVar14,lVar15,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar21 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                            FUN_05e44034(lVar15,0);
                                            if (lVar15 != 0) {
                                              *(long *)(lVar15 + 0x10) = param_1;
                                              thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1);
                                              lVar20 = *(long *)(lVar14 + 0x10);
                                              lVar21 = *(long *)puVar3;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              puVar4 = System_Action<LayoutRebuilder>_TypeInfo;
                                              if (lVar20 != 0) {
                                                uVar2 = *(uint *)(lVar14 + 0x18);
                                                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                  plVar16 = (long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                    0x20);
                                                  *plVar16 = lVar15;
                                                  thunk_FUN_0329bf60(plVar16,lVar15);
                                                }
                                                else {
                                                  FUN_047af440(lVar14,lVar15,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar21 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar15 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                                                FUN_05e44034(lVar15,0);
                                                if (lVar15 != 0) {
                                                  *(long *)(lVar15 + 0x10) = param_1;
                                                  thunk_FUN_0329bf60((long *)(lVar15 + 0x10),param_1
                                                                    );
                                                  lVar20 = *(long *)(lVar14 + 0x10);
                                                  lVar21 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar6 = System_Action<LocomotionEvent>_TypeInfo;
                                                  puVar5 = System_Action<InputUpdateType>_TypeInfo;
                                                  puVar9 = System_Action<InputDevice>_TypeInfo;
                                                  puVar4 = System_Action<IUpdateReceiver>_TypeInfo;
                                                  puVar3 = System_Action<IResourceProvider>_TypeInfo
                                                  ;
                                                  if (lVar20 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      plVar16 = (long *)(lVar20 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar16 = lVar15;
                                                      thunk_FUN_0329bf60(plVar16,lVar15);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar14,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(param_1 + 0x10) = lVar14;
                                                  thunk_FUN_0329bf60((long *)(param_1 + 0x10),lVar14
                                                                    );
                                                  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05812e88(uVar13,*(undefined8 *)puVar3);
                                                  *(undefined8 *)(param_1 + 0x18) = uVar13;
                                                  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x18),
                                                                     uVar13);
                                                  lVar14 = thunk_FUN_0322f148(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_047aec0c(lVar14,*(undefined8 *)puVar9);
                                                  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e44034(uVar13,0);
                                                  puVar3 = System_Action<IXRInteractor>_TypeInfo;
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar20 = *(long *)
                                                  System_Action<IXRInteractor>_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar4 = 
                                                  System_Action<LocomotionProvider>_TypeInfo;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      puVar17 = (undefined8 *)
                                                                (lVar15 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                                      *puVar17 = uVar13;
                                                      thunk_FUN_0329bf60(puVar17,uVar13);
                                                    }
                                                    else {
                                                      FUN_047af440(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar16 = (long *)(param_1 + 0x20);
                                                  *plVar16 = lVar14;
                                                  thunk_FUN_0329bf60(plVar16,lVar14);
                                                  lVar14 = *plVar16;
                                                  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05e44034(uVar13,0);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar20 = *(long *)puVar3;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar9 = PTR_DAT_075f1458;
                                                    puVar4 = PTR_DAT_075de370;
                                                    puVar3 = PTR_DAT_075de368;
                                                    if (lVar15 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        puVar17 = (undefined8 *)
                                                                  (lVar15 + (long)(int)uVar2 * 8 +
                                                                  0x20);
                                                        *puVar17 = uVar13;
                                                        thunk_FUN_0329bf60(puVar17,uVar13);
                                                      }
                                                      else {
                                                        FUN_047af440(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar12 = 
                                                  System_Action<InteractableRegisteredEventArgs>_TypeInfo
                                                  ;
                                                  puVar11 = 
                                                  System_Action<AsyncOperationHandle<IResourceLocator>>_TypeInfo
                                                  ;
                                                  puVar10 = 
                                                  Best_HTTP_Request_Timings_TimingEventInfo_var;
                                                  puVar8 = PTR_DAT_075d7d80;
                                                  puVar7 = PTR_DAT_075d7d50;
                                                  puVar6 = PTR_DAT_075d74d8;
                                                  puVar5 = PTR_DAT_075d6700;
                                                  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05812e88(uVar13,*(undefined8 *)puVar4);
                                                  *(undefined8 *)(param_1 + 0x38) = uVar13;
                                                  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x38),
                                                                     uVar13);
                                                  uVar13 = *(undefined8 *)puVar9;
                                                  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) +
                                                              0xe4) == 0) {
                                                                                                        
                                                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                            ();
                                                  }
                                                  uVar13 = 
                                                  Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                            (uVar13,0);
                                                  uVar18 = 
                                                  Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                            (*(undefined8 *)puVar6,0);
                                                  FUN_06bf1f84(param_1,uVar13,uVar18);
                                                  uVar13 = 
                                                  Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                            (*(undefined8 *)puVar5,0);
                                                  uVar18 = 
                                                  Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                            (*(undefined8 *)puVar6,0);
                                                  FUN_06bf1f84(param_1,uVar13,uVar18);
                                                  uVar13 = 
                                                  Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                            (*(undefined8 *)puVar8,0);
                                                  uVar18 = 
                                                  Newtonsoft_Json_Bson_BsonWriter__WriteRegex
                                                            (*(undefined8 *)puVar7,0);
                                                  FUN_06bf1f84(param_1,uVar13,uVar18);
                                                  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar12
                                                                             );
                                                  FUN_06beb854();
                                                  *(undefined8 *)(param_1 + 0x58) = uVar13;
                                                  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x58),
                                                                     uVar13);
                                                  uVar13 = thunk_FUN_0322f148(*(undefined8 *)puVar10
                                                                             );
                                                  FUN_06beb3e0();
                                                  *(undefined8 *)(param_1 + 0x60) = uVar13;
                                                  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x60),
                                                                     uVar13);
                                                  lVar14 = *(long *)puVar11;
                                                  if (*(int *)(lVar14 + 0xe4) == 0) {
                                                                                                        
                                                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                                                            ();
                                                  lVar14 = *(long *)puVar11;
                                                  }
                                                  puVar9 = System_Action<int>_TypeInfo;
                                                  puVar4 = PTR_DAT_075b75d0;
                                                  puVar3 = PTR_DAT_075b75c8;
                                                  if (**(long **)(lVar14 + 0xb8) != 0) {
                                                    FUN_047afec0(&local_78,
                                                                 **(long **)(lVar14 + 0xb8),
                                                                 *(undefined8 *)PTR_DAT_075b7608);
                                                    do {
                                                      uVar19 = FUN_05a2e8e4(&local_78,
                                                                            *(undefined8 *)puVar4);
                                                      if ((uVar19 & 1) == 0) {
                                                        FUN_05a2e8e0(&local_78,*(undefined8 *)puVar3
                                                                    );
                                                        return;
                                                      }
                                                      plVar16 = (long *)FUN_05e2c1b0(local_68,0);
                                                      if (plVar16 != (long *)0x0) {
                                                        bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
                                                        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                                                           (*(long *)(*(long *)(*plVar16 + 200) +
                                                                      (ulong)bVar1 * 8 + -8) !=
                                                            *(long *)puVar9)) {
                    /* WARNING: Subroutine does not return */
                                                          FUN_031f2730(plVar16);
                                                        }
                                                      }
                                                      FUN_06bf208c(param_1,plVar16);
                                                    } while( true );
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
  FUN_031f2390();
}


