/*
FUNCTION_NAME: FUN_05de7dd0
ENTRY_POINT: 05de7dd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_05de7dd0(long param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8,byte param_9)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined4 local_94;
  long local_88;
  
  local_88 = param_2;
  if ((DAT_06bc3d4e & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
                    /* try { // try from 05de7e3c to 05ee7e47 has its CatchHandler @ 05de80c4 */
    FUN_02f08768(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_RuntimeType_MakeGenericType__);
                    /* try { // try from 05de7e58 to 05ee7e5b has its CatchHandler @ 05de80bc */
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3d4e = 1;
  }
  local_94 = 0;
  local_98[0] = 0;
  local_9c[0] = 0;
  local_a0[0] = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uVar12 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_170 = 0;
  uStack_168 = 0;
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_060f245c(uVar12,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_05de8e18();
    *(undefined8 *)(param_1 + 0xa0) = uVar12;
  }
  if (param_2 == 0) {
LAB_05de83f8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05c41350(param_2,*(long *)(*(long *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                + 0xb8) + 0x94,1,0);
  puVar3 = Method_System_RuntimeType_MakeGenericType__;
  local_98[0] = 0;
  local_94 = 0xffffffff;
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x88) + 4);
  uVar6 = (ulong)uVar1;
  local_9c[0] = 0;
  local_a0[0] = 0;
  if ((int)(uint)uVar1 < *(int *)(param_1 + 0x80)) {
    uVar12 = 1;
    do {
      uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x78) + uVar6 * 2);
      uVar7 = FUN_0347acb8(param_6,param_7,uVar2,
                           *(undefined8 *)
                            Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__
                          );
      iVar5 = FUN_0612c25c(uVar7,0);
      if (iVar5 != 2) break;
      lVar8 = FUN_0612c1d0(uVar7,0);
      FUN_0612c270(&local_1b0,uVar7,0);
      uStack_158 = CONCAT44(uStack_1a4,iStack_1a8);
      local_160 = local_1b0;
      uStack_148 = uStack_198;
      uStack_150 = uStack_1a0;
      uStack_138 = uStack_188;
      local_140 = local_190;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      uVar17 = uStack_180;
      uVar13 = FUN_060dcc3c(&local_160,3,0);
      uVar18 = (undefined4)uVar17;
      uVar14 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                         (uVar7,0);
      uVar15 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                         (uVar7,0);
      uVar16 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                         (uVar7,0);
      uVar7 = 0;
      FUN_060dc898(uVar14,0,0,0,0,uVar15,0,0,&local_e0,0);
      if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dde0bc(param_6,param_7,uVar2,&local_f0,&local_100,&local_110,&local_170,&local_120,uVar7
                   ,uVar16,uVar13,uVar18);
      if (param_4 == 0) goto LAB_05de83f8;
      if (*(char *)(param_4 + 0x35) != '\0') {
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar3;
        }
        FUN_05de7344(lVar9,param_2,lVar8,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x8c));
      }
      if (lVar8 == 0) goto LAB_05de83f8;
      UnityEngine_TextCore_Text_TextElementInfo__ToString(&local_1b0,lVar8,0);
      bVar4 = iStack_1a8 == 1;
      if ((param_8 & 1) == 0) {
        iVar5 = -1;
      }
      else {
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_05de83f8;
        iVar5 = FUN_05deeacc(*(long *)(param_1 + 0x98),uVar2,0);
      }
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_060f60a4(lVar8,0);
      if ((uVar10 & 1) == 0) {
        bVar11 = false;
      }
      else {
        uVar10 = FUN_060c34ec(lVar8,0);
        bVar11 = (int)uVar10 != 0 && -1 < iVar5;
      }
      if (param_5 == 0) goto LAB_05de83f8;
      uVar7 = FUN_05de8c84(uVar10,&local_88,param_3 & 1,*(undefined1 *)(param_5 + 0x31),bVar11,
                           uVar12,local_9c);
      FUN_05de8d38(uVar7,param_2,param_5,lVar8,bVar11,uVar12,local_a0);
      FUN_05de8b48(param_1,param_2,uVar2,param_9 & 1,uVar12,local_98,&local_94);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05c41224(local_f0 & 0xffffffff,local_f0._4_4_,local_e8 & 0xffffffff,local_e8._4_4_,param_2
                   ,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70),0);
      FUN_05c41224(local_100 & 0xffffffff,local_100._4_4_,local_f8 & 0xffffffff,local_f8._4_4_,
                   param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x74),0);
      FUN_05c41224(local_110 & 0xffffffff,local_110._4_4_,local_108 & 0xffffffff,local_108._4_4_,
                   param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78),0);
      FUN_05c41224(local_120 & 0xffffffff,local_120._4_4_,local_118 & 0xffffffff,local_118._4_4_,
                   param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x7c),0);
      FUN_05c411f4(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x84),
                   (ulong)bVar4 << 2,0);
      FUN_05c411f4(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x88),iVar5,0);
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_05de83f8;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05de83fc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uStack_1e8 = uStack_d8;
      local_1f0 = local_e0;
      uStack_1d8 = uStack_c8;
      uStack_1e0 = uStack_d0;
      uStack_1c8 = uStack_b8;
      local_1d0 = local_c0;
      uStack_1b8 = uStack_a8;
      uStack_1c0 = uStack_b0;
      FUN_05c41640(param_2,*(undefined8 *)(param_1 + 0xa0),&local_1f0,
                   *(undefined8 *)(param_1 + 0xb8),0,*(undefined4 *)(lVar8 + 0x20),0);
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_05de83f8;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_05de83fc;
      uStack_228 = uStack_d8;
      local_230 = local_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
      uStack_208 = uStack_b8;
      local_210 = local_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      FUN_05c41640(param_2,*(undefined8 *)(param_1 + 0xa0),&local_230,
                   *(undefined8 *)(param_1 + 0xb8),0,*(undefined4 *)(lVar8 + 0x24),0);
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_05de83f8;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_05de83fc;
      uStack_268 = uStack_d8;
      local_270 = local_e0;
      uStack_258 = uStack_c8;
      uStack_260 = uStack_d0;
      uStack_248 = uStack_b8;
      local_250 = local_c0;
      uStack_238 = uStack_a8;
      uStack_240 = uStack_b0;
      FUN_05c41640(param_2,*(undefined8 *)(param_1 + 0xa0),&local_270,
                   *(undefined8 *)(param_1 + 0xb8),0,*(undefined4 *)(lVar8 + 0x28),0);
      uVar6 = uVar6 + 1;
      uVar12 = 0;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x80));
  }
  FUN_05c41350(param_2,*(long *)(*(long *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                + 0xb8) + 0x94,0,0);
  return;
}


