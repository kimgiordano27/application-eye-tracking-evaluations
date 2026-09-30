/*
FUNCTION_NAME: FUN_05de6230
ENTRY_POINT: 05de6230
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_05de6230(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 local_54 [4];
  
                    /* try { // try from 05de623c to 05ee62d7 has its CatchHandler @ 05de6a28 */
  if ((DAT_06bc3d46 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
    DAT_06bc3d46 = 1;
  }
  local_54[0] = 0;
  if (*(char *)(param_1 + 0x100) == '\0') {
    lVar8 = *(long *)(param_1 + 200);
    if (lVar8 == 0) goto LAB_05de6504;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05de6568;
    if (*(int *)(lVar8 + 0x20) < 0) {
      FUN_05de3f7c(param_1);
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0xd0);
    if (lVar8 == 0) goto LAB_05de6504;
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05de6568:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(int *)(lVar8 + 0x20) < 0) {
      FUN_05de3d58(param_1);
    }
  }
  puVar2 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
  ;
  if (*(char *)(param_1 + 0x15) == '\0') {
    lVar9 = *(long *)(param_1 + 0x38);
    lVar8 = 0xb8;
    if (*(char *)(param_1 + 0x100) != '\0') {
      lVar8 = 0xc0;
    }
    if (lVar9 != 0) {
      lVar8 = *(long *)(param_1 + lVar8);
      uVar6 = 0;
      do {
        if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar6) goto LAB_05de62f4;
        if (uVar6 != 3) {
          lVar9 = *(long *)puVar2;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar9 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_05de6568;
          lVar10 = *(long *)(param_1 + 0x38);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_05de6568;
          uVar1 = *(undefined4 *)(lVar9 + uVar6 * 4 + 0x20);
          uVar7 = FUN_05c9cd38(*(undefined8 *)(lVar10 + uVar6 * 8 + 0x20),0);
          if (lVar8 == 0) break;
          UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar8,uVar1,uVar7,0);
          lVar9 = *(long *)(param_1 + 0x38);
        }
        uVar6 = uVar6 + 1;
      } while (lVar9 != 0);
    }
    goto LAB_05de6504;
  }
LAB_05de62f4:
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  puVar2 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
  ;
  FUN_05c5cb4c(local_54,param_2,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x68),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05c41350(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0xa8,*(int *)(param_1 + 0x1c) != 0,0);
  FUN_05de6608(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x100) == '\0') {
    uVar6 = FUN_05de6698(param_1,1);
    if ((uVar6 & 1) == 0) {
      FUN_05de6710(param_1,param_2);
    }
    if (*(char *)(param_1 + 0x100) != '\0') goto LAB_05de6394;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(param_3 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05de6bf8(param_1,param_2,param_4,param_5,*(undefined1 *)(*(long *)(param_3 + 0x1d8) + 0x141)
                );
  }
  else {
LAB_05de6394:
    FUN_05de6844(param_1,param_2,param_5);
  }
  FUN_05c41350(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0xa8,0,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(long *)(param_3 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_060a41a4(*(long *)(param_3 + 0xd8),0);
  FUN_05de6f28(param_1,param_2,uVar5 & 1);
  FUN_05c5cb50(local_54,0);
  puVar3 = Method_Mono_Security_Cryptography_PKCS1_Encode_v15__;
  if (param_5 != 0) {
    FUN_05c41350(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x1c,*(undefined1 *)(param_5 + 0x58),0)
    ;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db7b4c(param_2,param_5,0);
    if (*(long *)(param_1 + 0xf8) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)(*(long *)(param_1 + 0xf8) + 0x54) != '\0';
    }
    FUN_05c41350(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x54,bVar4,0);
    return;
  }
LAB_05de6504:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


