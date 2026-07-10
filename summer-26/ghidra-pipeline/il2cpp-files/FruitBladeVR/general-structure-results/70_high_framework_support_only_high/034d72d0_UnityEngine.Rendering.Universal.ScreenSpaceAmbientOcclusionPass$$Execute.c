/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass$$Execute
ENTRY_POINT: 034d72d0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;pose_vector;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;strong_foveation_hits_7;eye_or_gaze_keyword_boost_only;framework_foveation_support_not_confirmed_dynamic_eye_tracking;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_foveated_rendering
*/


void UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass__Execute
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined1 local_6c [4];
  long local_68;
  
  puVar6 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
                    /* try { // try from 034d72e4 to 035d72ef has its CatchHandler @ 034d8990 */
  if ((DAT_03ef5f9a & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
                    /* try { // try from 034d731c to 035d731f has its CatchHandler @ 034d87e0 */
    FUN_01c5c92c(PTR_object___TypeInfo_03cb62b8);
                    /* try { // try from 034d7320 to 035d7333 has its CatchHandler @ 034d898c */
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>___03cdaab8);
    FUN_01c5c92c(
                PTR_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_TypeInfo_03cdb5a8
                );
                    /* try { // try from 034d734c to 035d7353 has its CatchHandler @ 034d8984 */
    FUN_01c5c92c(PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780);
    FUN_01c5c92c(PTR_StringLiteral_10532_03cdc698);
    FUN_01c5c92c(PTR_StringLiteral_7156_03cdac20);
                    /* try { // try from 034d736c to 035d7373 has its CatchHandler @ 034d897c */
    DAT_03ef5f9a = 1;
  }
  local_68 = 0;
  puVar14 = (undefined8 *)(param_1 + 0xc0);
  uVar13 = *puVar14;
  local_6c[0] = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    /* try { // try from 034d7394 to 035d7397 has its CatchHandler @ 034d87dc */
    thunk_FUN_01cb0d4c();
  }
                    /* try { // try from 034d73a4 to 035d7443 has its CatchHandler @ 034d89d0 */
  uVar8 = UnityEngine_Object__op_Equality(uVar13,0,0);
  if ((uVar8 & 1) != 0) {
    plVar9 = (long *)FUN_01c5ca18(*(undefined8 *)PTR_object___TypeInfo_03cb62b8,1);
    plVar10 = (long *)System_Object__GetType(param_1,0);
    if (plVar10 != (long *)0x0) {
      lVar11 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      if (plVar9 != (long *)0x0) {
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01c8fb4c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
          uVar13 = thunk_FUN_01c9d12c();
                    /* WARNING: Subroutine does not return */
          FUN_01c5ca98(uVar13,0);
        }
        if ((int)plVar9[3] != 0) {
          plVar9[4] = lVar11;
          thunk_FUN_01cc8040(plVar9 + 4,lVar11);
          if (*(int *)(*(long *)PTR_UnityEngine_Debug_TypeInfo_03cb5ae0 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          UnityEngine_Debug__LogErrorFormat
                    (*(undefined8 *)PTR_StringLiteral_10532_03cdc698,plVar9,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034d77f0 to 035d77f3 has its CatchHandler @ 034d87d4 */
        FUN_01c5cbdc();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  plVar9 = (long *)UnityEngine_Rendering_Universal_RenderingData__get_commandBuffer(param_3,0);
  lVar11 = *plVar9;
                    /* try { // try from 034d7480 to 035d7483 has its CatchHandler @ 034d877c */
  local_68 = lVar11;
  uVar13 = UnityEngine_Rendering_ProfilingSampler__Get<Int32Enum>
                     (0x11,*(undefined8 *)
                            PTR_Method_UnityEngine_Rendering_ProfilingSampler_Get<URPProfileId>___03cdaab8
                     );
                    /* try { // try from 034d7494 to 035d749f has its CatchHandler @ 034d8908 */
  UnityEngine_Rendering_ProfilingScope___ctor(local_6c,lVar11,uVar13,0);
  local_98 = 0;
  puStack_90 = local_6c;
  if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(char *)(*(long *)(param_1 + 0x158) + 0x15) == '\0') {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
                    /* try { // try from 034d74c0 to 035d74c3 has its CatchHandler @ 034d8778 */
                    /* try { // try from 034d74c4 to 035d74d7 has its CatchHandler @ 034d8874 */
    UnityEngine_Rendering_CommandBuffer__SetKeyword
              (lVar11,*(long *)(*(long *)
                                 PTR_UnityEngine_Rendering_Universal_ShaderGlobalKeywords_TypeInfo_03cda780
                               + 0xb8) + 0x210,1,0);
  }
  lVar12 = *(long *)(param_1 + 0xf8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbdc();
  }
  UnityEngine_Rendering_RTHandle__op_Implicit(&local_e8,*(undefined8 *)(lVar12 + 0x38),0);
                    /* try { // try from 034d7508 to 035d751b has its CatchHandler @ 034d8a1c */
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  uStack_a8 = uStack_d0;
  uStack_b0 = local_d8;
  local_a0 = local_c8;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
                    /* try { // try from 034d751c to 035d753f has its CatchHandler @ 034d6b34 */
  uStack_108 = uStack_e0;
  local_110 = local_e8;
  uStack_f8 = uStack_d0;
  uStack_100 = local_d8;
  local_f0 = local_c8;
                    /* try { // try from 034d7540 to 035d7547 has its CatchHandler @ 034d8a1c */
  UnityEngine_Rendering_CommandBuffer__SetGlobalTexture
            (lVar11,*(undefined8 *)PTR_StringLiteral_7156_03cdac20,&local_110,0);
  lVar12 = UnityEngine_Rendering_Universal_CameraData__get_xr(param_3 + 8,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
                    /* try { // try from 034d7558 to 035d7567 has its CatchHandler @ 034d8974 */
  uVar8 = UnityEngine_Experimental_Rendering_XRPass__get_supportsFoveatedRendering(lVar12,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if ((*(char *)(*(long *)(param_1 + 0x158) + 0x14) != '\0') ||
       (uVar7 = UnityEngine_SystemInfo__get_foveatedRenderingCaps(0), (uVar7 >> 1 & 1) != 0)) {
LAB_034d75b0:
      UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(lVar11,0,0);
      bVar5 = false;
      goto LAB_034d75c4;
    }
                    /* try { // try from 034d7584 to 035d7587 has its CatchHandler @ 034d87d8 */
    uVar8 = UnityEngine_SystemInfo__get_foveatedRenderingCaps(0);
                    /* try { // try from 034d7588 to 035d759b has its CatchHandler @ 034d8970 */
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034d7828 to 035d7847 has its CatchHandler @ 034d88f8 */
        FUN_01c5cbd4();
      }
      if (*(int *)(*(long *)(param_1 + 0x158) + 0x18) == 0) goto LAB_034d75b0;
    }
    uVar8 = UnityEngine_SystemInfo__get_foveatedRenderingCaps(0);
    if ((uVar8 & 1) != 0) {
      bVar5 = true;
                    /* try { // try from 034d77b8 to 035d77d3 has its CatchHandler @ 034d8918 */
      UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(lVar11,1,0);
      goto LAB_034d75c4;
    }
  }
                    /* try { // try from 034d75a8 to 035d75b3 has its CatchHandler @ 034d8968 */
  bVar5 = false;
LAB_034d75c4:
  puVar6 = PTR_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_TypeInfo_03cdb5a8;
  if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x100);
  cVar4 = *(char *)(*(long *)(param_1 + 0x158) + 0x15);
                    /* try { // try from 034d75dc to 035d75e7 has its CatchHandler @ 034d8a18 */
  if (*(int *)(*(long *)
                PTR_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_TypeInfo_03cdb5a8
              + 0xe4) == 0) {
                    /* try { // try from 034d75e8 to 035d7607 has its CatchHandler @ 034d6b34 */
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass__GetPassOrder
            (uVar3,cVar4 != '\0',&local_78,&local_80);
                    /* try { // try from 034d7608 to 035d760f has its CatchHandler @ 034d8a18 */
  plVar9 = (long *)UnityEngine_Rendering_Universal_CameraData__get_renderer(param_3 + 8,0);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  local_88 = UnityEngine_Rendering_Universal_ScriptableRenderer__get_cameraDepthTargetHandle
                       (*plVar9,0);
                    /* try { // try from 034d7620 to 035d762f has its CatchHandler @ 034d8964 */
  auVar16 = UnityEngine_Rendering_Universal_CameraData__get_renderer(param_3 + 8,0);
                    /* try { // try from 034d7630 to 035d7653 has its CatchHandler @ 034d8960 */
  lVar12 = *(long *)(param_1 + 0xf8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034d780c to 035d780f has its CatchHandler @ 034d8a70 */
    FUN_01c5cbdc();
  }
  UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass__RenderAndSetBaseMap
            (&local_68,auVar16._8_8_,auVar16._0_8_,puVar14,&local_88,lVar12 + 0x20,0);
  lVar12 = 0;
  while( true ) {
                    /* try { // try from 034d7668 to 035d7677 has its CatchHandler @ 034d8958 */
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar7 = (uint)lVar12;
                    /* try { // try from 034d7678 to 035d7693 has its CatchHandler @ 034d8954 */
    if (*(int *)(local_80 + 0x18) <= (int)uVar7) {
                    /* try { // try from 034d7728 to 035d7737 has its CatchHandler @ 034d8934 */
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
                    /* try { // try from 034d7738 to 035d7753 has its CatchHandler @ 034d8930 */
      if (*(long *)(param_1 + 0x158) != 0) {
                    /* try { // try from 034d7768 to 035d7777 has its CatchHandler @ 034d8928 */
        UnityEngine_Rendering_CommandBuffer__SetGlobalVector
                  (0x3f800000,0,0,*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x24),lVar11,
                   **(undefined4 **)(*(long *)puVar6 + 0xb8),0);
        if (bVar5) {
                    /* try { // try from 034d7778 to 035d7793 has its CatchHandler @ 034d8924 */
          UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(lVar11,0,0);
        }
        UnityEngine_Rendering_ProfilingScope__Dispose(local_6c,0);
                    /* try { // try from 034d77a8 to 035d77b7 has its CatchHandler @ 034d891c */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(uint *)(local_78 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    if (*(uint *)(local_78 + 0x18) <= (uint)(lVar12 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    lVar15 = local_78 + lVar12 * 4;
    uVar1 = *(uint *)(lVar15 + 0x20);
    uVar2 = *(uint *)(lVar15 + 0x24);
                    /* try { // try from 034d76a8 to 035d76b7 has its CatchHandler @ 034d894c */
    auVar16 = UnityEngine_Rendering_Universal_CameraData__get_renderer(param_3 + 8,0);
    uVar13 = auVar16._8_8_;
    lVar15 = *(long *)(param_1 + 0xf8);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
                    /* try { // try from 034d76b8 to 035d76d3 has its CatchHandler @ 034d8948 */
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(uint *)(local_80 + 0x18) <= uVar7) break;
    uVar3 = *(undefined4 *)(local_80 + lVar12 * 4 + 0x20);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    /* try { // try from 034d76e8 to 035d76f7 has its CatchHandler @ 034d8940 */
      thunk_FUN_01cb0d4c();
      uVar13 = extraout_x1;
    }
                    /* try { // try from 034d76f8 to 035d7713 has its CatchHandler @ 034d893c */
    if ((*(uint *)(lVar15 + 0x18) <= uVar1) || (*(uint *)(lVar15 + 0x18) <= uVar2)) break;
    UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass__RenderAndSetBaseMap
              (&local_68,uVar13,auVar16._0_8_,puVar14,lVar15 + 0x20 + (long)(int)uVar1 * 8,
               lVar15 + 0x20 + (long)(int)uVar2 * 8,uVar3);
    lVar12 = lVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbdc();
}


