/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$NotifyBeforeUpdate
ENTRY_POINT: 03851474
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


float UnityEngineInternal_Input_NativeInputSystem__NotifyBeforeUpdate(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  int iVar8;
  long unaff_x20;
  float fVar9;
  float fVar10;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da7298);
    thunk_FUN_01ad9084(PTR_DAT_03da7218);
    thunk_FUN_01ad9084(PTR_DAT_03da7220);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da6778);
    *(undefined1 *)(unaff_x20 + 0x608) = 1;
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    iVar8 = *(int *)(*(long *)(unaff_x19 + 0x68) + 0x18);
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    puVar2 = PTR_DAT_03da7298;
    fVar10 = **(float **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    if (iVar8 == 0) {
      return fVar10;
    }
    lVar5 = *(long *)PTR_DAT_03da7298;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_03da7220;
    puVar3 = PTR_DAT_03da6778;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (**(long **)(lVar5 + 0xb8) != 0) {
      if (*(uint *)(**(long **)(lVar5 + 0xb8) + 0x18) <= *(uint *)(unaff_x19 + 100)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar5 = *(long *)(unaff_x19 + 0x68);
      if (lVar5 != 0) {
        fVar9 = *(float *)(unaff_x19 + 0x70);
        iVar8 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= iVar8) {
            return fVar10;
          }
          plVar6 = (long *)FUN_02b59714(lVar5,iVar8,*(undefined8 *)puVar4);
          if (plVar6 == (long *)0x0) {
LAB_038515a8:
            plVar6 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_038515a8;
            if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
              plVar6 = (long *)0x0;
            }
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_0391f968(plVar6,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar6 == (long *)0x0) break;
            if (*(char *)((long)plVar6 + 0x25) != '\0') {
              FUN_03803cf4(plVar6,0);
              uVar7 = FUN_03b398dc();
              if (((uVar7 & 1) != 0) && (fVar9 * fVar9 < 0.0)) {
                fVar10 = fVar10 + 0.0;
              }
            }
          }
          lVar5 = *(long *)(unaff_x19 + 0x68);
          iVar8 = iVar8 + 1;
        } while (lVar5 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


