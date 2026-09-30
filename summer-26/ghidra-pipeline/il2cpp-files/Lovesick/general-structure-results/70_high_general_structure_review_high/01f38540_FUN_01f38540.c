/*
FUNCTION_NAME: FUN_01f38540
ENTRY_POINT: 01f38540
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1
*/


bool FUN_01f38540(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  
  if ((DAT_037802a5 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_529);
    thunk_FUN_00d48444(StringLiteral_10543);
    thunk_FUN_00d48444(StringLiteral_1962);
    DAT_037802a5 = 1;
  }
  uVar8 = FUN_01f3b3f4(param_1,param_2);
  if (uVar8 == 0xffffffff) {
    plVar17 = *(long **)(param_1 + 0x28);
    if (plVar17 != (long *)0x0) {
      lVar13 = *plVar17;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto FUN_01f386cc;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_00d59724(plVar17,*(long *)
                                      Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__,1);
FUN_01f386cc:
      uVar9 = (*(code *)*puVar11)(plVar17,param_2,puVar11[1]);
      goto LAB_01f386e0;
    }
LAB_01f386fc:
    bVar6 = true;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x50);
    if (lVar13 == 0) goto LAB_01f38944;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(param_1 + 0x58)) {
LAB_01f38810:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar15 = *(long *)(param_1 + 0x30);
    if (lVar15 == 0) goto LAB_01f38944;
    if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_01f38810;
    lVar18 = (long)(int)uVar8;
    uVar9 = *(undefined8 *)(lVar15 + lVar18 * 0x18 + 0x28);
    if (*(int *)(lVar13 + (long)(int)*(uint *)(param_1 + 0x58) * 0x30 + 0x20) < (int)uVar8) {
      uVar10 = FUN_015fe7e8(uVar9,param_3,0);
      if ((uVar10 & 1) != 0) {
        uVar9 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
        uVar9 = FUN_00da4fb8(uVar9,3);
        FUN_00ac2be8();
        FUN_00acb0b4(uVar9,param_2);
        FUN_00acb320(uVar9,0,param_2);
        uVar16 = *(undefined8 *)(param_1 + 0x30);
        FUN_00ac2be8(uVar16);
        lVar13 = FUN_00c4e0e0(uVar16,lVar18);
        uVar16 = *(undefined8 *)(lVar13 + 8);
        FUN_00ac2be8(uVar9);
        FUN_00acb0b4(uVar9,uVar16);
        FUN_00acb320(uVar9,1,uVar16);
        FUN_00ac2be8(uVar9);
        FUN_00acb0b4(uVar9,param_3);
        FUN_00acb320(uVar9,2,param_3);
        thunk_FUN_00d48444(
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                          );
        uVar12 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar16 = thunk_FUN_00d48444(
                                   Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>__ctor__
                                   );
        FUN_01f74254(uVar12,uVar16,uVar9,0);
LAB_01f38a08:
        uVar9 = thunk_FUN_00d48444(
                                  Method_UnityEngine_Component_GetComponentInChildren<SphereCollider>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,uVar9);
      }
      lVar13 = *(long *)(param_1 + 0x30);
      if (lVar13 != 0) {
        if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01f38810;
        piVar14 = (int *)(lVar13 + lVar18 * 0x18 + 0x30);
        iVar1 = *piVar14;
        if (iVar1 != 0) {
          cVar2 = *(char *)(param_1 + 0x9d);
          *piVar14 = 0;
          return iVar1 == 1 || cVar2 == '\0';
        }
        if (param_2 != 0) {
          if (*(int *)(param_2 + 0x10) == 0) {
            lVar13 = thunk_FUN_00d48444(
                                       System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                       );
            uVar9 = **(undefined8 **)(lVar13 + 0xb8);
          }
          else {
            uVar9 = thunk_FUN_00d48444(StringLiteral_10543);
          }
          if (*(int *)(param_2 + 0x10) == 0) {
            param_2 = thunk_FUN_00d48444(StringLiteral_10543);
          }
          thunk_FUN_00d48444(
                            Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_set_automaticPlacementRequested__
                            );
          FUN_00acb0a4();
          uVar12 = FUN_01f3b64c(uVar9,param_2);
          goto LAB_01f38a08;
        }
      }
      goto LAB_01f38944;
    }
LAB_01f386e0:
    uVar10 = thunk_FUN_015fe514(uVar9,param_3,0);
    if ((uVar10 & 1) == 0) goto LAB_01f386fc;
    bVar6 = *(char *)(param_1 + 0x9d) == '\0';
  }
  puVar4 = StringLiteral_1962;
  puVar3 = Method_System_Collections_Generic_List<Color>_get_Count__;
  uVar10 = thunk_FUN_015fe514(param_3,*(undefined8 *)
                                       Method_System_Collections_Generic_List<Color>_get_Count__,0);
  if ((((uVar10 & 1) == 0) ||
      (uVar10 = FUN_015fe7e8(param_2,*(undefined8 *)puVar4,0), (uVar10 & 1) == 0)) &&
     ((puVar5 = StringLiteral_10543,
      uVar10 = thunk_FUN_015fe514(param_3,*(undefined8 *)StringLiteral_529,0), (uVar10 & 1) == 0 ||
      (uVar10 = FUN_015fe7e8(param_2,*(undefined8 *)puVar5,0), (uVar10 & 1) == 0)))) {
    if (param_2 == 0) {
LAB_01f38944:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((0 < *(int *)(param_2 + 0x10)) && (sVar7 = FUN_015fa29c(param_2,0,0), sVar7 == 0x78)) {
      uVar10 = thunk_FUN_015fe514(param_2,*(undefined8 *)puVar4,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = thunk_FUN_015fe514(param_2,*(undefined8 *)puVar5,0);
        puVar3 = Method_System_Collections_Generic_List<HandTriggerAreaEvents>_GetEnumerator__;
      }
      else {
        uVar10 = FUN_015fe7e8(param_3,*(undefined8 *)puVar3,0);
        puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadds_u32__;
      }
      if ((uVar10 & 1) != 0) {
        uVar9 = thunk_FUN_00d48444(puVar3);
        uVar9 = FUN_01f75600(uVar9,0);
        goto LAB_01f3897c;
      }
    }
    FUN_01f3b4d0(param_1,param_2,param_3,0);
    return bVar6;
  }
  uVar9 = thunk_FUN_00d48444(StringLiteral_3033);
  uVar9 = FUN_00da4fb8(uVar9,1);
  FUN_00ac2be8();
  FUN_00acb0b4(uVar9,param_2);
  FUN_00adb25c(uVar9,0,param_2);
  uVar16 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_EnhancedTouch_Touch_add_onFingerDown__)
  ;
  uVar9 = FUN_01f71d98(uVar16,uVar9,0);
LAB_01f3897c:
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar16 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar16,uVar9,0);
  uVar9 = thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<SphereCollider>__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar16,uVar9);
}


