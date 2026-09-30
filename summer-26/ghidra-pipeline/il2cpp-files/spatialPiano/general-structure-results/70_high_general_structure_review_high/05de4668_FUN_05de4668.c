/*
FUNCTION_NAME: FUN_05de4668
ENTRY_POINT: 05de4668
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05de4a88) */

void FUN_05de4668(long param_1,long param_2,long param_3,ulong param_4,long param_5,uint param_6)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined1 local_44 [4];
  
  if ((DAT_06bc3d3f & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    DAT_06bc3d3f = 1;
  }
  local_44[0] = 0;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x1a0) == 0)) goto LAB_05de4a84;
  lVar10 = *(long *)(param_3 + 0xd8);
  iVar11 = (int)(param_4 >> 0x20);
  uVar8 = FUN_05c35d3c(*(long *)(param_3 + 0x1a0),0);
  iVar6 = iVar11;
  if ((uVar8 & 1) == 0) {
    if (lVar10 == 0) goto LAB_05de4a84;
    uVar8 = FUN_060a3f68(lVar10,0);
    if ((uVar8 & 1) != 0) {
      fVar12 = (float)FUN_060b61e4(0);
      if (DAT_06bb42cb == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42cb = '\x01';
      }
      fVar12 = fVar12 * (float)(int)param_4;
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = 0x80000000;
      if ((float)(int)fVar12 != INFINITY) {
        uVar7 = (int)fVar12;
      }
      param_4 = (ulong)uVar7;
    }
    if (param_1 == 0) goto LAB_05de4a84;
    *(int *)(param_1 + 0x24) = (int)param_4;
    uVar8 = FUN_060a3f68(lVar10,0);
    if ((uVar8 & 1) != 0) {
      fVar12 = (float)FUN_060b620c(0);
      if (DAT_06bb42cb == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42cb = '\x01';
      }
      uVar8 = *(ulong *)PTR_DAT_067c8f80;
      if (*(int *)(uVar8 + 0xe4) == 0) {
        uVar8 = thunk_FUN_02f6670c();
      }
      iVar6 = -0x80000000;
      if ((float)(int)(fVar12 * (float)iVar11) != INFINITY) {
        iVar6 = (int)(fVar12 * (float)iVar11);
      }
    }
  }
  else {
    if (lVar10 == 0) goto LAB_05de4a84;
    uVar8 = FUN_060a3f68(lVar10,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_3 + 0x1a0) == 0) goto LAB_05de4a84;
      param_4 = (ulong)*(uint *)(*(long *)(param_3 + 0x1a0) + 0x34);
    }
    if (param_1 == 0) goto LAB_05de4a84;
    *(int *)(param_1 + 0x24) = (int)param_4;
    uVar8 = FUN_060a3f68(lVar10,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_3 + 0x1a0) == 0) goto LAB_05de4a84;
      iVar6 = *(int *)(*(long *)(param_3 + 0x1a0) + 0x38);
    }
  }
  *(int *)(param_1 + 0x28) = iVar6;
  if (*(char *)(param_1 + 0x100) == '\0') {
    if (param_5 == 0) {
LAB_05de4a84:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(param_5 + 0x14) == 0) {
      uVar7 = ~*(uint *)(param_5 + 0x10) >> 0x1f;
    }
    else {
      uVar7 = 1;
    }
    FUN_05de4b04(uVar8,param_1 + 0x78,param_1 + 0x88,param_5 + 0x20,uVar7);
  }
  puVar2 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
  ;
  lVar9 = *(long *)
           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
  ;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar2;
  }
  FUN_05c5cb48(local_44,param_2,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x70),0);
  if (*(char *)(param_1 + 0x100) == '\0') {
    FUN_05de7144(param_1,param_2,param_5);
  }
  puVar2 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
  ;
  if (param_5 != 0) {
    if (param_2 != 0) {
      cVar1 = *(char *)(param_5 + 0x31);
      FUN_06116fac(param_2,*(long *)(*(long *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                    + 0xb8) + 0xa4,*(undefined1 *)(param_1 + 0x19),0);
      if (cVar1 == '\0') {
        bVar4 = false;
        bVar5 = false;
        bVar3 = false;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1c);
        bVar3 = iVar6 == 1;
        if (bVar3) {
          iVar6 = FUN_060b7dcc(0);
          bVar4 = iVar6 == 0;
          iVar6 = *(int *)(param_1 + 0x1c);
        }
        else {
          bVar4 = false;
        }
        bVar5 = iVar6 == 2;
      }
      FUN_06116fac(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x40,bVar4 | bVar5,0);
      FUN_06116fac(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x44,bVar3,0);
      FUN_06116fac(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x3c,bVar5,0);
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      if (*(char *)(param_1 + 0x15) == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (*(int *)(param_3 + 0x188) != 1) {
          iVar6 = FUN_060a490c(lVar10,0);
          bVar3 = iVar6 == 2;
        }
        bVar3 = bVar3 || (param_6 & 1) != 0;
      }
      FUN_06116fac(param_2,lVar9 + 0x4c,bVar3,0);
      uVar8 = FUN_05de3928();
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_05cb1ca8(lVar10,0);
        uVar7 = uVar7 ^ 1;
      }
      FUN_06116fac(param_2,lVar9 + 0x48,uVar7 & 1,0);
      FUN_05daab78(param_2,*(undefined4 *)(param_1 + 0x10),0);
      FUN_05c5cb50(local_44,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


