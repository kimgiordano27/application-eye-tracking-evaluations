/*
FUNCTION_NAME: FUN_05d09b2c
ENTRY_POINT: 05d09b2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;functionality_possible_biometrics_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x05d09f9c) */
/* WARNING: Removing unreachable block (ram,0x05d0a094) */

undefined8 FUN_05d09b2c(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 local_5c;
  undefined8 local_58;
  char *pcStack_50;
  long *local_48;
  char local_3c [4];
  long local_38;
  
  if ((DAT_06dc2e6e & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_Vector4Field_TypeInfo);
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
    FUN_02d965b8(
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__)
    ;
    FUN_02d965b8(
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                );
    FUN_02d965b8(PTR_DAT_069fba08);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
    DAT_06dc2e6e = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  if (*(long *)(param_1 + 0x28) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar3 = thunk_FUN_02dd3144();
    FUN_054e7fac(uVar3,0);
    uVar10 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,uVar10);
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a0dbb0 + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a0dbb0)
      {
        return 0;
      }
      if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_054c8c2c(0);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
      if (param_3 != (long *)0x0) {
        lVar7 = *param_3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uVar10 = *(undefined8 *)
                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
        ;
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Unity_Properties_Internal_Vector4PropertyBag_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05d09d34;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_02dd004c(param_3,*(long *)Unity_Properties_Internal_Vector4PropertyBag_TypeInfo
                              ,0);
LAB_05d09d34:
        lVar7 = (*(code *)*puVar4)(param_3,uVar3,uVar10,puVar4[1]);
        if (lVar7 == 0) {
          return 0;
        }
        lVar5 = FUN_05cebfec(lVar7,0);
        if (lVar5 == 0) {
          return 0;
        }
        uVar8 = thunk_FUN_0536b75c(lVar5,*(undefined8 *)PTR_DAT_069fba08,0);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        uVar3 = FUN_05cebff4(lVar7,0);
        plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
        FUN_05377f4c(plVar6,0);
        if ((plVar6 != (long *)0x0) &&
           (FUN_0537ab70(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Contains__
                         ,lVar5,0), *(long *)(param_1 + 0x28) != 0)) {
          uVar10 = FUN_05d08c7c();
          FUN_0537ab70(plVar6,*(undefined8 *)
                               Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__
                       ,uVar10,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar10 = FUN_05d08cd0();
            FUN_0537ab70(plVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_HashSet<Event_Type>_get_Count__,
                         uVar10,0);
            if (param_2[8] != 0) {
              uVar10 = FUN_05c0b574(param_2[8],0);
              FUN_0537ab70(plVar6,*(undefined8 *)
                                   Method_System_Collections_Generic_HashSet<Event_Type>_Contains__,
                           uVar10,0);
              if (*(long *)(param_1 + 0x28) != 0) {
                lVar7 = FUN_05d08cfc();
                if (lVar7 != 0) {
                  if (*(long *)(param_1 + 0x28) == 0) goto LAB_05d0a090;
                  uVar10 = FUN_05d08cfc();
                  FUN_0537ab70(plVar6,*(undefined8 *)
                                       Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Contains__
                               ,uVar10,0);
                }
                uVar3 = FUN_05d099cc(param_1,lVar5,uVar3,param_2);
                FUN_0537ab70(plVar6,*(undefined8 *)
                                     Method_System_Collections_Generic_HashSet<Event_Type>__ctor__,
                             uVar3,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  lVar7 = FUN_05d08d28();
                  if (lVar7 != 0) {
                    if (*(long *)(param_1 + 0x28) == 0) goto LAB_05d0a090;
                    uVar3 = FUN_05d08d28();
                    FUN_0537ab70(plVar6,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                                 ,uVar3,0);
                  }
                  pcStack_50 = local_3c;
                  local_58 = 0;
                  local_48 = &local_38;
                  local_3c[0] = '\0';
                  local_38 = param_1;
                  FUN_0554bf68(param_1,local_3c,0);
                  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar7 = FUN_05d08d28();
                  if (lVar7 != 0) {
                    local_5c = *(undefined4 *)(param_1 + 0x18);
                    uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_5c);
                    FUN_0537ab70(plVar6,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__
                                 ,uVar3,0);
                    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                  }
                  if (local_3c[0] != '\0') {
                    thunk_FUN_02da42ec(*local_48,0);
                  }
                  lVar7 = FUN_05d0948c(param_1);
                  if (lVar7 != 0) {
                    uVar3 = FUN_05d0948c(param_1);
                    FUN_0537ab70(plVar6,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
                                 ,uVar3,0);
                  }
                  if (*(long *)(param_1 + 0x28) != 0) {
                    lVar7 = FUN_05d08ca4();
                    if (lVar7 != 0) {
                      uVar3 = FUN_05d09464(param_1);
                      FUN_0537ab70(plVar6,*(undefined8 *)
                                           Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Add__
                                   ,uVar3,0);
                    }
                    iVar2 = FUN_05378acc(plVar6,0);
                    FUN_05378f70(plVar6,iVar2 + -2,0);
                    uVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                 UnityEngine_UIElements_Vector4Field_TypeInfo);
                    FUN_05ce8aa8(uVar10,uVar3,0);
                    return uVar10;
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


