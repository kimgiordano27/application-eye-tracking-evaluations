/*
FUNCTION_NAME: UnityEngine.InputSystem.UI.InputSystemUIInputModule$$PerformRaycast
ENTRY_POINT: 05d09b60
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x05d09f9c) */
/* WARNING: Removing unreachable block (ram,0x05d0a094) */

undefined8 UnityEngine_InputSystem_UI_InputSystemUIInputModule__PerformRaycast(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  char cStack0000000000000024;
  long in_stack_00000028;
  
  FUN_02d965b8(PTR_DAT_069fc268);
  FUN_02d965b8(PTR_DAT_06a0dbb0);
  FUN_02d965b8(Unity_Properties_Internal_Vector4PropertyBag_TypeInfo);
  FUN_02d965b8(PTR_DAT_069ff7d8);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Contains__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<Event_Type>__ctor__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<Event_Type>_Contains__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<Event_Type>_get_Count__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Add__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Contains__);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__)
  ;
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__);
  FUN_02d965b8(
              Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
              );
  FUN_02d965b8(PTR_DAT_069fba08);
  FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xe6e) = 1;
  in_stack_00000028 = 0;
  cStack0000000000000024 = '\0';
  if (*(long *)(unaff_x19 + 0x28) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar3 = thunk_FUN_02dd3144();
    FUN_054e7fac(uVar3,0);
    uVar7 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,uVar7);
  }
  if (unaff_x22 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0dbb0 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x22 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_06a0dbb0) {
        return 0;
      }
      if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_054c8c2c(0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      (**(code **)(*unaff_x22 + 0x1e8))();
      if (unaff_x20 != (long *)0x0) {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Unity_Properties_Internal_Vector4PropertyBag_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05d09d34;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c();
LAB_05d09d34:
        lVar8 = (*(code *)*puVar4)();
        if (lVar8 == 0) {
          return 0;
        }
        lVar5 = FUN_05cebfec(lVar8,0);
        if (lVar5 == 0) {
          return 0;
        }
        uVar9 = thunk_FUN_0536b75c(lVar5,*(undefined8 *)PTR_DAT_069fba08,0);
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        FUN_05cebff4(lVar8,0);
        plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
        FUN_05377f4c(plVar6,0);
        if ((plVar6 != (long *)0x0) &&
           (FUN_0537ab70(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Contains__
                         ,lVar5,0), *(long *)(unaff_x19 + 0x28) != 0)) {
          uVar3 = FUN_05d08c7c();
          FUN_0537ab70(plVar6,*(undefined8 *)
                               Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__
                       ,uVar3,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            uVar3 = FUN_05d08cd0();
            FUN_0537ab70(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<Event_Type>_get_Count__,
                         uVar3,0);
            if (unaff_x22[8] != 0) {
              uVar3 = FUN_05c0b574(unaff_x22[8],0);
              FUN_0537ab70(plVar6,*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<Event_Type>_Contains__,
                           uVar3,0);
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                lVar8 = FUN_05d08cfc();
                if (lVar8 != 0) {
                  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05d0a090;
                  uVar3 = FUN_05d08cfc();
                  FUN_0537ab70(plVar6,*(undefined8 *)
                                       Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Contains__
                               ,uVar3,0);
                }
                uVar3 = FUN_05d099cc();
                FUN_0537ab70(plVar6,*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<Event_Type>__ctor__,
                             uVar3,0);
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  lVar8 = FUN_05d08d28();
                  if (lVar8 != 0) {
                    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05d0a090;
                    uVar3 = FUN_05d08d28();
                    FUN_0537ab70(plVar6,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                                 ,uVar3,0);
                  }
                  in_stack_00000010 = &stack0x00000024;
                  in_stack_00000008 = 0;
                  in_stack_00000018 = &stack0x00000028;
                  cStack0000000000000024 = '\0';
                  in_stack_00000028 = unaff_x19;
                  FUN_0554bf68();
                  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar8 = FUN_05d08d28();
                  if (lVar8 != 0) {
                    in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x19 + 0x18);
                    uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                               (long)&stack0x00000000 + 4);
                    FUN_0537ab70(plVar6,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__
                                 ,uVar3,0);
                    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
                  }
                  if (cStack0000000000000024 != '\0') {
                    thunk_FUN_02da42ec(*in_stack_00000018,0);
                  }
                  lVar8 = FUN_05d0948c();
                  if (lVar8 != 0) {
                    uVar3 = FUN_05d0948c();
                    FUN_0537ab70(plVar6,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
                                 ,uVar3,0);
                  }
                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    lVar8 = FUN_05d08ca4();
                    if (lVar8 != 0) {
                      uVar3 = FUN_05d09464();
                      FUN_0537ab70(plVar6,*(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Add__
                                   ,uVar3,0);
                    }
                    iVar2 = FUN_05378acc(plVar6,0);
                    FUN_05378f70(plVar6,iVar2 + -2,0);
                    uVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
                    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                                UnityEngine_UIElements_Vector4Field_TypeInfo);
                    FUN_05ce8aa8(uVar7,uVar3,0);
                    return uVar7;
                  }
                }
              }
            }
          }
        }
      }
LAB_05d0a090:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return 0;
}


