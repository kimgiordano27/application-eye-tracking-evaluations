/*
FUNCTION_NAME: FUN_03a03888
ENTRY_POINT: 03a03888
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03a03888(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_03dafef8;
  if ((DAT_03ffce40 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db0668);
    thunk_FUN_01ad9084(PTR_DAT_03db0670);
    thunk_FUN_01ad9084(PTR_DAT_03db0678);
    thunk_FUN_01ad9084(PTR_DAT_03db0680);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2990);
    thunk_FUN_01ad9084(PTR_DAT_03dafef8);
    thunk_FUN_01ad9084(StringLiteral_2776);
    DAT_03ffce40 = 1;
  }
  lVar6 = *(long *)puVar4;
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar4;
  }
  puVar3 = StringLiteral_2776;
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xd) != '\0') {
    if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_039f3888(0);
    lVar6 = *(long *)puVar4;
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar4;
  }
  puVar2 = PTR_DAT_03db0670;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    lVar10 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x10);
    while (lVar10 != 0) {
      uVar1 = *(undefined4 *)(lVar10 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_039f3810(uVar1,0);
      if ((uVar7 & 1) == 0) {
        lVar6 = *(long *)puVar4;
        break;
      }
      uStack_38 = *(undefined8 *)(lVar10 + 0x30);
      local_40 = *(undefined8 *)(lVar10 + 0x28);
      FUN_03a03848(&local_40);
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_03a03c40;
      FUN_02aad6a4(**(long **)(lVar6 + 0xb8),*(undefined8 *)puVar2);
      lVar6 = *(long *)puVar4;
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_03a03c40;
      lVar10 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x10);
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar4;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xd) == '\0') {
      bVar5 = true;
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_03a03c40;
      bVar5 = *(int *)(**(long **)(lVar6 + 0xb8) + 0x18) == 0;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(bVar5,0);
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar4;
    }
    lVar10 = *(long *)(lVar6 + 0xb8);
    if (*(int *)(lVar10 + 8) == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
        lVar10 = *(long *)(lVar6 + 0xb8);
      }
      if (*(char *)(lVar10 + 0xc) != '\0') {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        uVar9 = *(undefined8 *)(lVar10 + 0x50);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_0391f968(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *(long *)puVar4;
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50);
          if (*(int *)(*(long *)StringLiteral_2990 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)StringLiteral_2990);
          }
          FUN_03ab586c(uVar9,0);
          puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
          *puVar8 = 0;
          thunk_FUN_01b4f09c(puVar8,0);
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar4;
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        uVar7 = FUN_0391f968(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *(long *)puVar4;
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58);
          if (*(int *)(*(long *)StringLiteral_2990 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)StringLiteral_2990);
          }
          FUN_03ab586c(uVar9,0);
          puVar8 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
          *puVar8 = 0;
          thunk_FUN_01b4f09c(puVar8,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_039f39c0(0,0);
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar4;
        }
        *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0xc) = 0;
      }
    }
    return;
  }
LAB_03a03c40:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


