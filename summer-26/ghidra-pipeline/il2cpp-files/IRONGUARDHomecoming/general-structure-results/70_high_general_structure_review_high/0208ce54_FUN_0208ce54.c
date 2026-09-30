/*
FUNCTION_NAME: FUN_0208ce54
ENTRY_POINT: 0208ce54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_15
*/


void FUN_0208ce54(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0208ce40 with catch @ 0208ce60
                        */
  if ((DAT_0482f769 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector3,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector3,_Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_float,_Vector4>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4,_Vector4>__ctor__
                      );
    DAT_0482f769 = 1;
  }
  puVar2 = Method_Unity_VisualScripting_StaticPropertyAccessor<float>__ctor__;
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector3,_Vector3>__ctor__;
  puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
  if ((DAT_0482f76a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticPropertyAccessor<float>__ctor__);
    DAT_0482f76a = 1;
  }
  uVar10 = *(undefined8 *)puVar2;
  uVar6 = FUN_0208d374(*(undefined4 *)(param_1 + 0x20));
  uVar6 = FUN_0340eee0(uVar10,*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar4,0);
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4,_bool>__ctor__;
  puVar9 = (undefined8 *)
           Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector3,_bool>__ctor__;
  puVar3 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
  ;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_03e78360(*(long *)(param_1 + 0x28),uVar6,1,0);
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_0376012c(uVar1,0);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)puVar2;
    }
    uVar6 = *puVar9;
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
    uVar7 = FUN_0375c054(uVar1,0);
    puVar9 = (undefined8 *)
             Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4,_bool>__ctor__;
    if ((uVar7 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xa0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0375c234(uVar1,0);
      puVar9 = (undefined8 *)
               Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4,_bool>__ctor__;
      if ((uVar7 & 1) != 0) {
        puVar9 = (undefined8 *)
                 Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_Vector3,_bool>__ctor__;
      }
    }
    uVar10 = *puVar9;
    lVar11 = *(long *)(param_1 + 0x30);
    lVar8 = FUN_01f08890(*(undefined8 *)puVar2,5);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined8 *)(lVar8 + 0x20) =
             *(undefined8 *)
              Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_float,_Vector4>__ctor__;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
        if (1 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x28) = uVar6;
          thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar6);
          if (2 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x30) =
                 *(undefined8 *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4,_Vector4>__ctor__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30));
            if (3 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x38) = uVar10;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar10);
              if (4 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar4;
                thunk_FUN_01f51358();
                uVar6 = FUN_0340efe8(lVar8,0);
                if (lVar11 != 0) {
                  FUN_03e78360(lVar11,uVar6,1,0);
                  lVar8 = *(long *)(param_1 + 0x38);
                  uVar1 = *(undefined4 *)(param_1 + 0xa0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar5 = FUN_0375e6a4(0x1000,uVar1,0);
                  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                    FUN_04281e98(lVar8,uVar5 & 1,0);
                    lVar8 = *(long *)(param_1 + 0x48);
                    FUN_0375f364(1,*(undefined4 *)(param_1 + 0xa0),0);
                    if (lVar8 != 0) {
                      FUN_0208c974(lVar8);
                      lVar8 = *(long *)(param_1 + 0x50);
                      FUN_0375f364(4,*(undefined4 *)(param_1 + 0xa0),0);
                      if (lVar8 != 0) {
                        FUN_0208c974(lVar8);
                        lVar8 = *(long *)(param_1 + 0x40);
                        FUN_0375f364(0x40,*(undefined4 *)(param_1 + 0xa0),0);
                        if (lVar8 != 0) {
                          FUN_0208c974(lVar8);
                          lVar8 = *(long *)(param_1 + 0x58);
                          FUN_0375f364(0x80,*(undefined4 *)(param_1 + 0xa0),0);
                          if (lVar8 != 0) {
                            FUN_0208c974(lVar8);
                            lVar8 = *(long *)(param_1 + 0x60);
                            FUN_0375f364(0x10,*(undefined4 *)(param_1 + 0xa0),0);
                            if (lVar8 != 0) {
                              FUN_0208c974(lVar8);
                              lVar8 = *(long *)(param_1 + 0x68);
                              FUN_0375f364(0x20,*(undefined4 *)(param_1 + 0xa0),0);
                              if (lVar8 != 0) {
                                FUN_0208c974(lVar8);
                                lVar8 = *(long *)(param_1 + 0x70);
                                uVar5 = FUN_0375e02c(1,*(undefined4 *)(param_1 + 0xa0),0);
                                if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                                  FUN_04281e98(lVar8,uVar5 & 1,0);
                                  lVar8 = *(long *)(param_1 + 0x78);
                                  uVar5 = FUN_0375e6a4(1,*(undefined4 *)(param_1 + 0xa0),0);
                                  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0))
                                  {
                                    FUN_04281e98(lVar8,uVar5 & 1,0);
                                    lVar8 = *(long *)(param_1 + 0x80);
                                    uVar5 = FUN_0375e02c(2,*(undefined4 *)(param_1 + 0xa0),0);
                                    if ((lVar8 != 0) &&
                                       (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                                      FUN_04281e98(lVar8,uVar5 & 1,0);
                                      lVar8 = *(long *)(param_1 + 0x88);
                                      uVar5 = FUN_0375e6a4(2,*(undefined4 *)(param_1 + 0xa0),0);
                                      if ((lVar8 != 0) &&
                                         (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                                        FUN_04281e98(lVar8,uVar5 & 1,0);
                                        lVar8 = *(long *)(param_1 + 0x90);
                                        uVar5 = FUN_0375e6a4(0x2000,*(undefined4 *)(param_1 + 0xa0),
                                                             0);
                                        if ((lVar8 != 0) &&
                                           (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
                                          FUN_04281e98(lVar8,uVar5 & 1,0);
                                          lVar8 = *(long *)(param_1 + 0x98);
                                          uVar5 = FUN_0375e6a4(0x8000,*(undefined4 *)
                                                                       (param_1 + 0xa0),0);
                                          FUN_0375fb3c(1,*(undefined4 *)(param_1 + 0xa0),0);
                                          if (lVar8 != 0) {
                                            FUN_0208cab8(lVar8,uVar5 & 1);
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
                      }
                    }
                  }
                }
                goto LAB_0208d32c;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_0208d32c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


