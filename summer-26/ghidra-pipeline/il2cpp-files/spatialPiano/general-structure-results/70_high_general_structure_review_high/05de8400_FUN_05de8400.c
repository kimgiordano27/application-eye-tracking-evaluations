/*
FUNCTION_NAME: FUN_05de8400
ENTRY_POINT: 05de8400
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_05de8400(long param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8,byte param_9)

{
  undefined2 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined4 uVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_298;
  float fStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190 [2];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_148;
  int iStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined4 local_ac;
  long local_a8;
  
                    /* try { // try from 05de8410 to 05ee8413 has its CatchHandler @ 05de87f4 */
                    /* try { // try from 05de8414 to 05ee8443 has its CatchHandler @ 05de82b8 */
                    /* try { // try from 05de8444 to 05ee8447 has its CatchHandler @ 05de881c */
                    /* try { // try from 05de8448 to 05ee846f has its CatchHandler @ 05de82b8 */
  local_a8 = param_2;
  if ((DAT_06bc3d4f & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
                    /* try { // try from 05de8470 to 05ee8473 has its CatchHandler @ 05de8818 */
    FUN_02f08768(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    FUN_02f08768(PTR_DAT_067c8f20);
                    /* try { // try from 05de8480 to 05ee848b has its CatchHandler @ 05de8828 */
    FUN_02f08768(Method_System_RuntimeType_MakeGenericType__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3d4f = 1;
  }
  local_ac = 0;
                    /* try { // try from 05de84b4 to 05ee84c3 has its CatchHandler @ 05de8824 */
  local_b0[0] = 0;
  local_b4[0] = 0;
  local_b8[0] = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uVar12 = *(undefined8 *)(param_1 + 0xa8);
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_100 = 0;
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
  ;
  uVar7 = FUN_060f245c(uVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_05de93dc();
    *(undefined8 *)(param_1 + 0xa8) = uVar12;
  }
  plVar13 = (long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
  ;
  if (param_2 != 0) {
    FUN_05c41350(param_2,*(long *)(*(long *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                  + 0xb8) + 0x8c,1,0);
    fVar2 = DAT_011b074c;
    local_b0[0] = 0;
    local_ac = 0xffffffff;
                    /* try { // try from 05de8560 to 05ee8563 has its CatchHandler @ 05de8808 */
    uVar7 = (ulong)**(ushort **)(param_1 + 0x88);
    local_b4[0] = 0;
    local_b8[0] = 0;
    if ((int)(uint)**(ushort **)(param_1 + 0x88) < *(int *)(param_1 + 0x80)) {
      uVar14 = 1;
      do {
        uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x78) + uVar7 * 2);
        uVar12 = FUN_0347acb8(param_6,param_7,uVar1,
                              *(undefined8 *)
                               Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__
                             );
        iVar6 = FUN_0612c25c(uVar12,0);
        if (iVar6 != 0) break;
        lVar8 = FUN_0612c1d0(uVar12,0);
        fVar16 = (float)FUN_0612c294(uVar12,0);
        sincosf(fVar16 * fVar2 * 0.5,&fStack_294,&local_298);
        fVar18 = fStack_294;
        fVar16 = local_298;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar9 = *(long *)puVar3;
        }
        fVar20 = 1.0;
        if (fVar18 <= 1.0) {
          fVar20 = fVar18;
        }
        fVar21 = *(float *)(*(long *)(lVar9 + 0xb8) + 0x58);
        fVar19 = 0.0;
        if (0.0 <= fVar18) {
          fVar19 = fVar20;
        }
        if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cb280);
        }
        FUN_05dde0bc(param_6,param_7,uVar1,&local_c8,&local_d8,&local_e8,&local_f8,&local_108);
        puVar4 = Method_System_RuntimeType_MakeGenericType__;
        if (param_4 == 0) goto LAB_05de8b40;
        if (*(char *)(param_4 + 0x35) != '\0') {
          lVar9 = *(long *)Method_System_RuntimeType_MakeGenericType__;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar9 = *(long *)puVar4;
          }
          FUN_05de7344(lVar9,param_2,lVar8,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x8c));
        }
        if (lVar8 == 0) goto LAB_05de8b40;
        UnityEngine_TextCore_Text_TextElementInfo__ToString(&local_148,lVar8,0);
        bVar5 = iStack_140 == 1;
        if ((param_8 & 1) == 0) {
          iVar6 = -1;
        }
        else {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_05de8b40;
          iVar6 = FUN_05deeacc(*(long *)(param_1 + 0x98),uVar1,0);
        }
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_060f60a4(lVar8,0);
        if ((uVar10 & 1) == 0) {
          bVar15 = false;
        }
        else {
          uVar10 = FUN_060c34ec(lVar8,0);
          bVar15 = (int)uVar10 != 0 && -1 < iVar6;
        }
        if (param_5 == 0) goto LAB_05de8b40;
        uVar11 = FUN_05de8c84(uVar10,&local_a8,param_3 & 1,*(undefined1 *)(param_5 + 0x31),bVar15,
                              uVar14,local_b4);
        FUN_05de8d38(uVar11,param_2,param_5,lVar8,bVar15,uVar14,local_b8);
        FUN_05de8b48(param_1,param_2,uVar1,param_9 & 1,uVar14,local_b0,&local_ac);
        puVar4 = Method_System_RuntimeType_MakeGenericType__;
        lVar8 = *(long *)Method_System_RuntimeType_MakeGenericType__;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar8 = *(long *)puVar4;
        }
        uVar14 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 100);
        fVar20 = fVar19 * (fVar21 + -1.0) + 1.0;
        uVar17 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                           (uVar12,0);
        FUN_05c41224(fVar18,fVar18,1.0 - fVar16,uVar17,param_2,uVar14,0);
        FUN_05c41224(0,0,fVar16,0,param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68),
                     0);
        uVar14 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x6c);
        fVar18 = (float)UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty__GetValue
                                  (uVar12,0);
        FUN_05c41224(fVar20,fVar20,fVar20,fVar16 * fVar18,param_2,uVar14,0);
        FUN_05c41224(local_c8 & 0xffffffff,local_c8._4_4_,local_c0 & 0xffffffff,local_c0._4_4_,
                     param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70),0);
        FUN_05c41224(local_d8 & 0xffffffff,local_d8._4_4_,local_d0 & 0xffffffff,local_d0._4_4_,
                     param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x74),0);
        FUN_05c41224(local_e8 & 0xffffffff,local_e8._4_4_,local_e0 & 0xffffffff,local_e0._4_4_,
                     param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78),0);
        FUN_05c41224(local_f8 & 0xffffffff,local_f8._4_4_,local_f0 & 0xffffffff,0,param_2,
                     *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80),0);
        FUN_05c41224(local_108 & 0xffffffff,local_108._4_4_,local_100 & 0xffffffff,local_100._4_4_,
                     param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x7c),0);
        FUN_05c411f4(param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x84),
                     (ulong)bVar5 << 2,0);
        FUN_05c411f4(param_2,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88),iVar6,0);
        uVar11 = *(undefined8 *)(param_1 + 0xa8);
        FUN_0612c270(&local_148,uVar12,0);
        lVar8 = *(long *)(param_1 + 200);
        if (lVar8 == 0) goto LAB_05de8b40;
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05de8b44:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        local_190[0] = local_148;
        uStack_178 = uStack_130;
        uStack_180 = local_138;
        uStack_168 = uStack_120;
        local_170 = local_128;
        uStack_158 = uStack_110;
        uStack_160 = local_118;
        FUN_05c41640(param_2,uVar11,local_190,*(undefined8 *)(param_1 + 0xb8),0,
                     *(undefined4 *)(lVar8 + 0x20),0);
        uVar11 = *(undefined8 *)(param_1 + 0xa8);
        FUN_0612c270(&local_1d0,uVar12,0);
        lVar8 = *(long *)(param_1 + 200);
        if (lVar8 == 0) goto LAB_05de8b40;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_05de8b44;
        uStack_208 = uStack_1c8;
        local_210 = local_1d0;
        uStack_1f8 = uStack_1b8;
        uStack_200 = uStack_1c0;
        uStack_1e8 = uStack_1a8;
        local_1f0 = local_1b0;
        uStack_1d8 = uStack_198;
        uStack_1e0 = uStack_1a0;
        FUN_05c41640(param_2,uVar11,&local_210,*(undefined8 *)(param_1 + 0xb8),0,
                     *(undefined4 *)(lVar8 + 0x24),0);
        uVar11 = *(undefined8 *)(param_1 + 0xa8);
        FUN_0612c270(&local_250,uVar12,0);
        lVar8 = *(long *)(param_1 + 200);
        if (lVar8 == 0) goto LAB_05de8b40;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_05de8b44;
        uStack_288 = uStack_248;
        local_290 = local_250;
        uStack_278 = uStack_238;
        uStack_280 = uStack_240;
        uStack_268 = uStack_228;
        local_270 = local_230;
        uStack_258 = uStack_218;
        uStack_260 = uStack_220;
        FUN_05c41640(param_2,uVar11,&local_290,*(undefined8 *)(param_1 + 0xb8),0,
                     *(undefined4 *)(lVar8 + 0x28),0);
        uVar7 = uVar7 + 1;
        uVar14 = 0;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x80));
      param_2 = local_a8;
      plVar13 = (long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
      ;
      if (local_a8 == 0) goto LAB_05de8b40;
    }
    FUN_05c41350(param_2,*(long *)(*plVar13 + 0xb8) + 0x8c,0,0);
    return;
  }
LAB_05de8b40:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


