/*
FUNCTION_NAME: FUN_0769e250
ENTRY_POINT: 0769e250
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;telemetry_or_network_hits_4
*/


long FUN_0769e250(undefined4 param_1,long param_2,ulong param_3,uint param_4,int param_5,
                 undefined1 *param_6,uint param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long local_68;
  
  if ((DAT_08271080 & 1) == 0) {
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetResult__
                );
    FUN_0373b518(PTR_DAT_07d89900);
    FUN_0373b518(System_Collections_Generic_Dictionary<CinemachineVirtualCameraBase,_int>_TypeInfo);
    FUN_0373b518(Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__);
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>_get_sessionRelativeData__
                );
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08271080 = 1;
  }
  local_68 = 0;
  if (DAT_08271060 == '\0') {
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                );
    DAT_08271060 = '\x01';
  }
  cVar1 = *(char *)(*(long *)(*(long *)
                               Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                             + 0xb8) + 8);
  *param_6 = 0;
  local_68 = 0;
  if (((param_4 >> 1 & 1) == 0) && (param_5 == 400)) goto LAB_0769e4fc;
  if (param_2 == 0) goto LAB_0769e7bc;
  lVar7 = FUN_0766d9e4(param_2,0);
  uVar4 = FUN_076b46f8(param_5,0);
  puVar2 = PTR_DAT_07d86398;
  if (lVar7 == 0) goto LAB_0769e7bc;
  if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  lVar7 = lVar7 + (long)(int)uVar4 * 0x10;
  plVar9 = (long *)(lVar7 + 0x20);
  if ((param_4 & 2) != 0) {
    plVar9 = (long *)(lVar7 + 0x28);
  }
  lVar7 = *plVar9;
  if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar8 = FUN_075aa744(lVar7,0,0);
  if ((uVar8 & 1) == 0) {
LAB_0769e4fc:
    if (cVar1 == '\0') {
      if (param_2 == 0) goto LAB_0769e7bc;
    }
    else {
      if (param_2 == 0) goto LAB_0769e7bc;
LAB_0769e504:
      if (*(long *)(param_2 + 0x130) == 0) {
        return 0;
      }
    }
  }
  else {
    if (cVar1 == '\0') {
      if (lVar7 == 0) goto LAB_0769e7bc;
    }
    else {
      if (lVar7 == 0) goto LAB_0769e7bc;
      if (*(long *)(lVar7 + 0x130) == 0) {
        return 0;
      }
    }
    uVar8 = FUN_076719e4(lVar7,param_1,param_4,param_5,&local_68,0);
    if ((uVar8 & 1) != 0) {
      if (local_68 == 0) goto LAB_0769e7bc;
      uVar11 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar8 = FUN_075aa744(uVar11,0,0);
      if ((uVar8 & 1) != 0) goto LAB_0769e4f0;
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_07671a80(lVar7,param_1,param_4,param_5,0);
    }
    iVar5 = FUN_0766d30c(lVar7,0);
    if ((iVar5 == 1) || (iVar5 = FUN_0766d30c(lVar7,0), iVar5 == 2)) {
      if (cVar1 != '\0') {
        if (*(long *)(lVar7 + 0x1f8) == 0) goto LAB_0769e7bc;
        uVar8 = FUN_045c389c(*(long *)(lVar7 + 0x1f8),param_1,
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<CinemachineVirtualCameraBase,_int>_TypeInfo
                            );
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        goto LAB_0769e504;
      }
      uVar8 = FUN_0767225c(lVar7,param_1,param_4,param_5,&local_68,param_7 & 1,0);
      if ((uVar8 & 1) != 0) {
LAB_0769e4f0:
        *param_6 = 1;
        return local_68;
      }
    }
    else {
      uVar8 = FUN_076719e4(lVar7,param_1,0,400,&local_68,0);
      if ((uVar8 & 1) == 0) goto LAB_0769e4fc;
      if (local_68 == 0) goto LAB_0769e7bc;
      uVar11 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar8 = FUN_075aa744(uVar11,0,0);
      if ((uVar8 & 1) != 0) goto LAB_0769e4f0;
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_07671a80(lVar7,param_1,param_4,param_5,0);
    }
  }
  uVar8 = FUN_076719e4(param_2,param_1,param_4,param_5,&local_68,0);
  if ((uVar8 & 1) != 0) {
    if (local_68 == 0) goto LAB_0769e7bc;
    uVar11 = *(undefined8 *)(local_68 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar8 = FUN_075aa744(uVar11,0,0);
    if ((uVar8 & 1) != 0) {
      return local_68;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    FUN_07671a80(param_2,param_1,param_4,param_5,0);
  }
  iVar5 = FUN_0766d30c(param_2,0);
  if ((iVar5 == 1) || (iVar5 = FUN_0766d30c(param_2,0), iVar5 == 2)) {
    if (cVar1 != '\0') {
      return 0;
    }
    uVar8 = FUN_0767225c(param_2,param_1,param_4,param_5,&local_68,param_7 & 1,0);
    if ((uVar8 & 1) != 0) {
      return local_68;
    }
  }
  else {
    uVar8 = FUN_076719e4(param_2,param_1,0,400,&local_68,0);
    if ((uVar8 & 1) == 0) {
      if ((cVar1 != '\0') && (local_68 == 0)) {
        return 0;
      }
    }
    else {
      if (local_68 == 0) goto LAB_0769e7bc;
      uVar11 = *(undefined8 *)(local_68 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar8 = FUN_075aa744(uVar11,0,0);
      if ((uVar8 & 1) != 0) {
        return local_68;
      }
      if (cVar1 != '\0') {
        return 0;
      }
      FUN_07671a80(param_2,param_1,param_4,param_5,0);
    }
  }
  if (local_68 != 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    return 0;
  }
  lVar7 = FUN_0766d9cc(param_2,0);
  if (lVar7 == 0) {
    return 0;
  }
  lVar7 = FUN_0766d9cc(param_2,0);
  puVar3 = 
  Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>_get_sessionRelativeData__;
  puVar2 = PTR_DAT_07d86398;
  if (lVar7 != 0) {
    iVar5 = *(int *)(lVar7 + 0x18);
    if (iVar5 < 1) {
      return 0;
    }
    iVar10 = 0;
    do {
      plVar9 = (long *)FUN_049cec24(lVar7,iVar10,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar2);
      }
      uVar8 = FUN_075ac5e0(plVar9,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar9 == (long *)0x0) break;
        uVar6 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
        if (**(long **)(*(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetResult__
                       + 0xb8) == 0) break;
        uVar8 = FUN_0458c578(**(long **)(*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetResult__
                                        + 0xb8),uVar6,*(undefined8 *)PTR_DAT_07d89900);
        if (((uVar8 & 1) != 0) &&
           (local_68 = FUN_0769e250(param_1,plVar9,1,param_4,param_5,param_6,param_7 & 1),
           local_68 != 0)) {
          return local_68;
        }
      }
      iVar10 = iVar10 + 1;
      if (iVar5 == iVar10) {
        return 0;
      }
    } while( true );
  }
LAB_0769e7bc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


