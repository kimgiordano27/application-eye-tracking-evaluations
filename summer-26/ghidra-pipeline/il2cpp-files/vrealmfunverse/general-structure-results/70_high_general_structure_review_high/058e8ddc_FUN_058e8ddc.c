/*
FUNCTION_NAME: FUN_058e8ddc
ENTRY_POINT: 058e8ddc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2
*/


uint FUN_058e8ddc(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
  ;
  if ((DAT_066d341b & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__
                );
    FUN_02b3c81c(
                Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Prev__
                );
    FUN_02b3c81c(Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__);
    FUN_02b3c81c(Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>__ctor__);
    FUN_02b3c81c(Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__);
    FUN_02b3c81c(Method_Oculus_Platform_Request<UserProof>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>__ctor__
                );
    FUN_02b3c81c(Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_get_Tail__
                );
    FUN_02b3c81c(Method_System_Span<ushort>_get_Length__);
    DAT_066d341b = 1;
  }
  plVar7 = (long *)(param_1 + 0x88);
  lVar9 = *plVar7;
  local_d0 = CONCAT44(*(undefined4 *)(param_1 + 0x3c),1);
  uStack_c8 = param_2;
  if ((*(byte *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  puVar2 = Method_Oculus_Platform_Request<UserProof>__ctor__;
  if (*(int *)(lVar9 + 8) < 1) {
    lVar9 = *(long *)(param_1 + 0x78);
    if (lVar9 != 0) {
      lVar5 = *(long *)(lVar9 + 0x10);
      uVar8 = *(uint *)(lVar9 + 0x18);
      lVar6 = *(long *)
               Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__
      ;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar5 != 0) {
        if (uVar8 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar8 + 1;
          lVar5 = lVar5 + (long)(int)uVar8 * 0x80;
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *(undefined8 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined8 *)(lVar5 + 0x78) = 0;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          *(undefined8 *)(lVar5 + 0x88) = 0;
          *(undefined8 *)(lVar5 + 0x80) = 0;
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0x90) = 0;
          thunk_FUN_02bb0e9c(lVar5 + 0x68,0);
        }
        else {
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          local_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          FUN_037a8edc(lVar9,&local_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        FUN_03abab64(param_1 + 0x80,&local_d0,
                     *(undefined8 *)
                      Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>__ctor__
                    );
        goto LAB_058e907c;
      }
    }
  }
  else {
    plVar11 = (long *)*plVar7;
    plVar10 = plVar11;
    if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
      plVar10 = (long *)*plVar7;
    }
    lVar9 = plVar11[1];
    plVar11 = plVar10;
    if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
      plVar11 = (long *)*plVar7;
    }
    puVar2 = Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_Add__;
    uVar8 = *(uint *)(*plVar10 + (long)((int)lVar9 + -1) * 4);
    if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_03aaf3b4(plVar7,(int)plVar11[1] + -1,*(undefined8 *)puVar2);
    puVar1 = Method_System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_get_Tail__;
    if (*(long *)(param_1 + 0x78) != 0) {
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      FUN_037a8bb4(*(long *)(param_1 + 0x78),uVar8,&local_c0,
                   *(undefined8 *)
                    Method_System_Span<VertexAttributeDescriptor>_GetPinnableReference__);
      uVar3 = local_d0;
      plVar7 = *(long **)(param_1 + 0x80);
      if ((*(ushort *)(*(long *)(*(long *)puVar1 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      puVar4 = (undefined8 *)(*plVar7 + (long)(int)uVar8 * 0xc);
      *puVar4 = uVar3;
      *(undefined4 *)(puVar4 + 1) = param_2;
LAB_058e907c:
      FUN_03ac09fc(param_1 + 0x68,param_2,uVar8,
                   *(undefined8 *)Method_System_Span<ushort>_get_Length__);
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


