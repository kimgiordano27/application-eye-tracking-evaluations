/*
FUNCTION_NAME: FUN_05de77e4
ENTRY_POINT: 05de77e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05de77e4(long param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8,byte param_9,uint param_10)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_dc [8];
  int local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined4 local_6c;
  long local_68;
  
                    /* try { // try from 05de7808 to 05ee781b has its CatchHandler @ 05de7c14 */
  local_68 = param_2;
  if ((DAT_06bc3d4d & 1) == 0) {
                    /* try { // try from 05de7838 to 05ee783b has its CatchHandler @ 05de7bf8 */
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_RuntimeType_MakeGenericType__);
                    /* try { // try from 05de7868 to 05ee787f has its CatchHandler @ 05de7bd8 */
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3d4d = 1;
  }
  local_6c = 0;
  local_70[0] = 0;
  local_74[0] = 0;
  local_78[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0xb0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_060f245c(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_05de7698();
    *(undefined8 *)(param_1 + 0xb0) = uVar11;
  }
  if (param_2 == 0) {
LAB_05de7dc8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05c41350(param_2,*(long *)(*(long *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                + 0xb8) + 0x90,1,0);
  local_70[0] = 0;
  local_6c = 0xffffffff;
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x88) + 2);
  uVar7 = (ulong)uVar1;
  local_74[0] = 0;
  local_78[0] = 0;
  if ((int)(uint)uVar1 < *(int *)(param_1 + 0x80)) {
    uVar13 = 1;
    plVar12 = (long *)PTR_DAT_067c9770;
    do {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x78) + uVar7 * 2);
      uVar11 = FUN_0347acb8(param_6,param_7,uVar1,
                            *(undefined8 *)
                             Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__
                           );
      iVar5 = FUN_0612c25c(uVar11,0);
      if (iVar5 != 1) break;
      lVar8 = FUN_0612c1d0(uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067cb280);
      }
      FUN_05dde0bc(param_6,param_7,uVar1,&local_88,&local_98,&local_a8,&local_b8,&local_c8);
      if (lVar8 == 0) goto LAB_05de7dc8;
      UnityEngine_TextCore_Text_TextElementInfo__ToString(auStack_dc,lVar8,0);
      puVar2 = Method_System_RuntimeType_MakeGenericType__;
      bVar3 = local_d4 == 1;
      if (param_4 == 0) goto LAB_05de7dc8;
      if (*(char *)(param_4 + 0x35) != '\0') {
        lVar9 = *(long *)Method_System_RuntimeType_MakeGenericType__;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar2;
        }
        FUN_05de7344(lVar9,param_2,lVar8,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x8c));
      }
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_060f60a4(lVar8,0);
      if ((uVar10 & 1) == 0) {
        bVar4 = false;
      }
      else {
        uVar10 = FUN_060c34ec(lVar8,0);
        bVar4 = (int)uVar10 != 0;
      }
      if (uVar1 != param_10) {
        if ((param_8 & 1) == 0) {
          iVar5 = -1;
        }
        else {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_05de7dc8;
          iVar5 = FUN_05deeacc(*(long *)(param_1 + 0x98),(uint)uVar1,0);
        }
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_060f60a4(lVar8,0);
        if ((uVar10 & 1) == 0) {
          bVar4 = false;
        }
        else {
          iVar6 = FUN_060c34ec(lVar8,0);
          bVar4 = iVar6 != 0 && -1 < iVar5;
        }
        puVar2 = Method_System_RuntimeType_MakeGenericType__;
        if (*(int *)(*(long *)Method_System_RuntimeType_MakeGenericType__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05c411f4(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88),iVar5,0);
        uVar10 = FUN_05de8b48(param_1,param_2,(uint)uVar1,param_9 & 1,uVar13,local_70,&local_6c);
        plVar12 = (long *)PTR_DAT_067c9770;
      }
      if (param_5 == 0) goto LAB_05de7dc8;
      uVar11 = FUN_05de8c84(uVar10,&local_68,param_3 & 1,*(undefined1 *)(param_5 + 0x31),bVar4,
                            uVar13,local_74);
      FUN_05de8d38(uVar11,param_2,param_5,lVar8,bVar4,uVar13,local_78);
      puVar2 = 
      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__;
      FUN_05c41350(param_2,*(long *)(*(long *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                    + 0xb8) + 0x9c,uVar13,0);
      FUN_05c41350(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0xa0,uVar1 == param_10,0);
      puVar2 = Method_System_RuntimeType_MakeGenericType__;
      lVar8 = *(long *)Method_System_RuntimeType_MakeGenericType__;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar2;
      }
      FUN_05c41224(local_98 & 0xffffffff,local_98._4_4_,local_90 & 0xffffffff,local_90._4_4_,param_2
                   ,*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x74),0);
      FUN_05c41224(local_88 & 0xffffffff,local_88._4_4_,local_80 & 0xffffffff,local_80._4_4_,param_2
                   ,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80),0);
      FUN_05c411f4(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x84),
                   (ulong)bVar3 << 2,0);
      uVar11 = *(undefined8 *)(param_1 + 0xb0);
      if (DAT_06bb87a1 == '\0') {
        FUN_02f08768(plVar12);
        DAT_06bb87a1 = '\x01';
      }
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_05de7dc8;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) {
LAB_05de7dcc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar9 = *(long *)(*plVar12 + 0xb8);
      uStack_118 = *(undefined8 *)(lVar9 + 0x48);
      local_120 = *(undefined8 *)(lVar9 + 0x40);
      uStack_108 = *(undefined8 *)(lVar9 + 0x58);
      uStack_110 = *(undefined8 *)(lVar9 + 0x50);
      uStack_f8 = *(undefined8 *)(lVar9 + 0x68);
      local_100 = *(undefined8 *)(lVar9 + 0x60);
      uStack_e8 = *(undefined8 *)(lVar9 + 0x78);
      uStack_f0 = *(undefined8 *)(lVar9 + 0x70);
      FUN_05c41640(param_2,uVar11,&local_120,*(undefined8 *)(param_1 + 0xb8),0,
                   *(undefined4 *)(lVar8 + 0x2c),0);
      uVar11 = *(undefined8 *)(param_1 + 0xb0);
      if (DAT_06bb87a1 == '\0') {
        FUN_02f08768(plVar12);
        DAT_06bb87a1 = '\x01';
      }
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_05de7dc8;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_05de7dcc;
      lVar9 = *(long *)(*plVar12 + 0xb8);
      uStack_158 = *(undefined8 *)(lVar9 + 0x48);
      local_160 = *(undefined8 *)(lVar9 + 0x40);
      uStack_148 = *(undefined8 *)(lVar9 + 0x58);
      uStack_150 = *(undefined8 *)(lVar9 + 0x50);
      uStack_138 = *(undefined8 *)(lVar9 + 0x68);
      local_140 = *(undefined8 *)(lVar9 + 0x60);
      uStack_128 = *(undefined8 *)(lVar9 + 0x78);
      uStack_130 = *(undefined8 *)(lVar9 + 0x70);
      FUN_05c41640(param_2,uVar11,&local_160,*(undefined8 *)(param_1 + 0xb8),0,
                   *(undefined4 *)(lVar8 + 0x30),0);
      uVar7 = uVar7 + 1;
      uVar13 = 0;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x80));
  }
  FUN_05c41350(param_2,*(long *)(*(long *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                + 0xb8) + 0x90,0,0);
  return;
}


