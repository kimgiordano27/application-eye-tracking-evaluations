/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-PokeInteractor.SurfaceHitCache.HitInfo>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0215584c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void System_Collections_Generic_Dictionary_ValueCollection<object,_PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar4;
  
  lVar1 = FUN_01ae9e74();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    uVar2 = FUN_029072e4(lVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_0391f968(uVar4,0,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74(lVar1);
    }
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20);
      thunk_FUN_01ad9084(
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                        );
      FUN_01853f74();
      uVar4 = FUN_0304eec0(uVar4,0);
      uVar3 = thunk_FUN_01ad9084(StringLiteral_2996);
      uVar4 = FUN_02ede300(uVar3,uVar4,0);
      thunk_FUN_01ad9084(Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__);
      uVar3 = thunk_FUN_01afaadc();
      FUN_03920984(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar3);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = unaff_x20;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    thunk_FUN_01b4f09c(*(long *)(lVar1 + 0xb8) + 0x18);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
    if (lVar1 != 0) {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_02907dd4(lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


