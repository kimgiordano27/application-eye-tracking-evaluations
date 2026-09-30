/*
FUNCTION_NAME: FUN_0520ccf4
ENTRY_POINT: 0520ccf4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0520ccf4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 local_34 [4];
  
  puVar4 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPass_PassData,_UnsafeGraphContext>_TypeInfo
  ;
  puVar3 = PTR_DAT_066463a0;
  if ((DAT_06a52062 & 1) == 0) {
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPass_PassData,_UnsafeGraphContext>_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_UIElements_BaseSlider<int>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_BaseSlider<float>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06646708);
    DAT_06a52062 = 1;
  }
  plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar3,5);
  local_34[0] = *(undefined1 *)(param_1 + 0x10);
  lVar6 = thunk_FUN_02d8a270(*(undefined8 *)puVar4,local_34);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_0520cf3c:
    uVar9 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0520cf44 to 0530cf6f has its CatchHandler @ 0520d2d0 */
    FUN_02d4ddac(uVar9,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_02dc1ef0(plVar5 + 4,lVar6);
    lVar6 = *(long *)(param_1 + 0x30);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0520cf3c;
    puVar3 = UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo;
    plVar1 = (long *)UnityEngine_UIElements_BaseSlider<int>_TypeInfo;
    plVar2 = (long *)PTR_DAT_06646708;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      thunk_FUN_02dc1ef0(plVar5 + 5,lVar6);
      uVar8 = FUN_04e7faf0(*(undefined8 *)(param_1 + 0x18),0);
      uVar9 = *(undefined8 *)puVar3;
      if ((uVar8 & 1) == 0) {
        plVar1 = plVar2;
      }
      lVar6 = *plVar1;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0520cf3c;
      puVar3 = UnityEngine_UIElements_BaseSlider<float>_TypeInfo;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_02dc1ef0(plVar5 + 6,lVar6);
        plVar1 = plVar2;
        if (*(long *)(param_1 + 0x20) != 0) {
          plVar1 = (long *)puVar3;
        }
        lVar6 = *plVar1;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_0520cf3c;
        puVar3 = 
        UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
        ;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar6;
          thunk_FUN_02dc1ef0(plVar5 + 7,lVar6);
          if (*(long *)(param_1 + 0x28) != 0) {
            plVar2 = (long *)puVar3;
          }
          lVar6 = *plVar2;
                    /* try { // try from 0520cee0 to 0530cf07 has its CatchHandler @ 0520d2d4 */
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_0520cf3c;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_02dc1ef0(plVar5 + 8,lVar6);
            FUN_04e81064(uVar9,plVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


