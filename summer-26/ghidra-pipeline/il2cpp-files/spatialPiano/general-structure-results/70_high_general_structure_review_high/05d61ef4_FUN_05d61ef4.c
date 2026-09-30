/*
FUNCTION_NAME: FUN_05d61ef4
ENTRY_POINT: 05d61ef4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d622e4) */

void FUN_05d61ef4(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long local_40;
  long *local_38;
  
  if ((DAT_06bc3953 & 1) == 0) {
    FUN_02f08768(Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_OVRVirtualKeyboardSampleControls_MoveKeyboardNear__);
    FUN_02f08768(Method_OVRSpatialAnchor_ShareAsync__);
    FUN_02f08768(Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__);
    FUN_02f08768(Method_System_Runtime_Remoting_ObjRef__ctor__);
    FUN_02f08768(Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__);
    FUN_02f08768(Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__);
    FUN_02f08768(Method_System_Runtime_Remoting_ObjRef_SerializeType__);
    DAT_06bc3953 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x138) != 0) {
    uVar4 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                         *(undefined8 *)Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    if ((*(long *)(param_1 + 0x138) != 0) &&
       (lVar5 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                             *(undefined8 *)
                              Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__),
       puVar1 = Method_OVRSpatialAnchor_ShareAsync__, lVar5 != 0)) {
      lVar10 = *(long *)(lVar5 + 0x1a0);
      if (*(int *)(*(long *)Method_OVRSpatialAnchor_ShareAsync__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (param_2 != 0) {
        local_38 = (long *)FUN_03523d30(param_2,*(undefined8 *)
                                                 Method_System_Runtime_Remoting_ObjRef_SerializeType__
                                        ,&local_40,
                                        *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),
                                        *(undefined8 *)
                                         Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__,
                                        0x3b8,*(undefined8 *)
                                               Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__
                                       );
        lVar11 = local_40;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar8 = *(undefined8 *)(lVar5 + 0xd8);
        *(undefined8 *)(local_40 + 0x10) = uVar4;
        *(undefined8 *)(local_40 + 0x18) = uVar8;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = FUN_05c35d3c(lVar10,0);
        lVar5 = local_40;
        uVar3 = 1;
        if ((uVar6 & 1) != 0) {
          uVar3 = 2;
        }
        *(undefined4 *)(lVar11 + 0x20) = uVar3;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = FUN_05c35d3c(lVar10,0);
        if ((uVar6 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = FUN_05c37370(lVar10,0);
        }
        lVar11 = local_40;
        *(undefined4 *)(lVar5 + 0x24) = uVar3;
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        *(undefined4 *)(local_40 + 0x28) = *(undefined4 *)(lVar10 + 0x2c);
        uVar6 = FUN_05c35d3c(lVar10,0);
        plVar2 = local_38;
        if ((uVar6 & 1) == 0) {
          lVar10 = 0;
        }
        *(long *)(lVar11 + 0x30) = lVar10;
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar5 = *local_38;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
               ) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
              goto LAB_05d62148;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(local_38,*(long *)
                                        Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                              ,0xb);
LAB_05d62148:
        (*(code *)*puVar7)(plVar2,0,puVar7[1]);
        plVar2 = local_38;
        puVar1 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
        lVar5 = *(long *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar5 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar5 + 0xb8);
        lVar10 = puVar7[2];
        if (lVar10 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar4 = *puVar7;
          lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__);
          FUN_04237c6c(lVar10,uVar4,*(undefined8 *)Method_System_Runtime_Remoting_ObjRef__ctor__,0);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar10;
        }
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar5 = *plVar2;
        lVar11 = *(long *)Method_OVRVirtualKeyboardSampleControls_MoveKeyboardNear__;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
              lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_05d62234;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        lVar5 = FUN_02f421d0(plVar2);
LAB_05d62234:
        lVar5 = thunk_FUN_02f2742c(*(undefined8 *)(lVar5 + 8),lVar11);
        (**(code **)(lVar5 + 8))(plVar2,lVar10,lVar5);
        plVar2 = local_38;
        if (local_38 != (long *)0x0) {
          lVar5 = *local_38;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05d622b8;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(local_38,*(long *)PTR_DAT_067c91b0,0);
LAB_05d622b8:
          (*(code *)*puVar7)(plVar2,puVar7[1]);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


