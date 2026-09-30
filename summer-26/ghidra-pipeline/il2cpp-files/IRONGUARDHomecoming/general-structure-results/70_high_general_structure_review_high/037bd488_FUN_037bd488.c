/*
FUNCTION_NAME: FUN_037bd488
ENTRY_POINT: 037bd488
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_037bd488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [4];
  uint local_44;
  
  puVar4 = Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__;
  if ((DAT_048375e1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(StringLiteral_725);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                      );
    thunk_FUN_01efb3a4(StringLiteral_836);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(StringLiteral_837);
    DAT_048375e1 = 1;
  }
  lVar5 = *(long *)puVar4;
  local_44 = 0;
  local_48[0] = 0;
  local_6c[0] = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar4;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    uVar6 = FUN_02ae4924(**(long **)(lVar5 + 0xb8),param_1,param_2,*(undefined8 *)StringLiteral_725)
    ;
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar4;
      }
      puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__;
      uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x38);
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                          );
      }
      uVar6 = FUN_0378e38c(param_3,&local_44,uVar10,0);
      if ((local_44 != 0) && ((uVar6 & 1) != 0)) {
        lVar5 = *(long *)puVar4;
        lVar11 = 0;
        bVar2 = false;
        uVar12 = 0;
        do {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar4;
          }
          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
          if (lVar9 == 0) goto LAB_037bd7b0;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar1 = lVar11 * 4;
          uVar12 = uVar12 + 1;
          lVar11 = (long)(int)uVar12;
          bVar2 = (bool)(bVar2 | *(int *)(lVar9 + lVar1 + 0x20) == 0);
        } while (lVar11 < (long)(ulong)local_44);
        if (bVar2) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar6 = FUN_0378e1f0(param_3,0,local_48,local_6c,0);
          if ((uVar6 & 1) != 0) {
            local_80 = param_1;
            uStack_78 = param_2;
            uVar10 = thunk_FUN_01f113fc(*(undefined8 *)
                                         Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                        ,&local_80);
            puVar3 = 
            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
            local_84[0] = local_48[0];
            uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                       ,local_84);
            local_88[0] = local_6c[0];
            uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,local_88);
            uVar10 = FUN_0340f334(*(undefined8 *)StringLiteral_837,uVar10,uVar7,uVar8,0);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
            }
            FUN_0403ea2c(uVar10,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *(long *)puVar4;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
            local_68 = FUN_037a9810(param_3,0);
            if (lVar5 != 0) {
              lVar11 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)StringLiteral_836;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar12 = *(uint *)(lVar5 + 0x18);
                if (uVar12 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)uVar12 * 0x18;
                  *(uint *)(lVar5 + 0x18) = uVar12 + 1;
                  *(undefined8 *)(lVar11 + 0x20) = local_68;
                  *(undefined8 *)(lVar11 + 0x28) = param_1;
                  *(undefined8 *)(lVar11 + 0x30) = param_2;
                  return;
                }
                uStack_60 = param_1;
                local_58 = param_2;
                FUN_031fbcf0(lVar5,&local_68,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
            goto LAB_037bd7b0;
          }
        }
      }
    }
    return;
  }
LAB_037bd7b0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


