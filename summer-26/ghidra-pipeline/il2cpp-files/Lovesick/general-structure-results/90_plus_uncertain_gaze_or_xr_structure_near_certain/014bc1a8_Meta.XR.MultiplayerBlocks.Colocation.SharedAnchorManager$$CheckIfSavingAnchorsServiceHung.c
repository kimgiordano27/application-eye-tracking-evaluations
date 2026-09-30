/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$CheckIfSavingAnchorsServiceHung
ENTRY_POINT: 014bc1a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__CheckIfSavingAnchorsServiceHung
               (int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  float fVar12;
  undefined8 local_60;
  long local_58;
  
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014bc0ec with catch @ 014bc1c0
                        */
  if ((DAT_03776dcb & 1) == 0) {
                    /* try { // try from 014bc1d8 to 015bc1db has its CatchHandler @ 014bc1e8 */
    thunk_FUN_00d48444(
                      Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticle_TypeInfo
                      );
                    /* catch() { ... } // from try @ 014bc1d8 with catch @ 014bc1e8 */
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<UserCapabilityList>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Keys__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type[]>_Add__);
                    /* try { // try from 014bc204 to 015bc213 has its CatchHandler @ 014bc228 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerDown__);
                    /* try { // try from 014bc214 to 015bc21f has its CatchHandler @ 014bc028 */
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
                    /* try { // try from 014bc220 to 015bc227 has its CatchHandler @ 014bc228 */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_laneq_s32__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 014bc204 with catch @ 014bc228
                       catch(type#2 @ 00000000) { ... } // from try @ 014bc220 with catch @ 014bc228
                        */
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_u32__);
    DAT_03776dcb = 1;
  }
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
  ;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_laneq_s32__;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_u32__;
  local_60 = 0;
  plVar11 = *(long **)(param_1 + 10);
  if (*param_1 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
    goto LAB_014bc398;
  }
  if (*param_1 == 1) {
    local_60 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerDown__
                              );
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01739108(lVar9,0);
    lVar9 = *(long *)puVar5;
    if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar10 = 0;
    param_1[0xe] = 0;
    while( true ) {
      puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
      puVar2 = 
      Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_DummyPointReticle_TypeInfo;
      if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar9 + 0x18) + -1 <= iVar10) break;
      FUN_0132138c(lVar9,iVar10,&local_58,
                   *(undefined8 *)Method_System_Collections_Generic_List<Type[]>_Add__);
      *(long *)(param_1 + 0x10) = local_58;
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar12 = *(float *)(local_58 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar12 = fVar12 * 1000.0;
      iVar10 = -0x80000000;
      if (fVar12 != INFINITY) {
        iVar10 = (int)fVar12;
      }
      lVar9 = FUN_017f007c(iVar10,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_60 = FUN_017e7d88(lVar9,0);
      uVar7 = FUN_016a1310(&local_60,0);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x12) = local_60;
        FUN_010bc698(param_1 + 2,&local_60,param_1,*(undefined8 *)puVar2);
        return;
      }
LAB_014bc398:
      FUN_016a13e0(&local_60,0);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar8 = (long *)FUN_014f3ce0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0);
      if (**(long **)(*(long *)puVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x10);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014f5ed8(lVar9,uVar1,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar8 + 0x1b8))
                (plVar8,*(undefined8 *)puVar4,lVar9,*(undefined8 *)(*plVar8 + 0x1c0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar11 + 0x448))(plVar11,plVar8,0,*(undefined8 *)(*plVar11 + 0x450));
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      iVar10 = param_1[0xe] + 1;
      param_1[0xe] = iVar10;
      lVar9 = *(long *)puVar5;
    }
    FUN_010db7b0(lVar9,&local_58,
                 *(undefined8 *)Method_Oculus_Platform_Request<UserCapabilityList>__ctor__);
    *(long *)(param_1 + 0xc) = local_58;
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar12 = *(float *)(local_58 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar12 = fVar12 * 1000.0;
    iVar10 = -0x80000000;
    if (fVar12 != INFINITY) {
      iVar10 = (int)fVar12;
    }
    lVar9 = FUN_017f007c(iVar10,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_60 = FUN_017e7d88(lVar9,0);
    uVar7 = FUN_016a1310(&local_60,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x12) = local_60;
      FUN_010bc698(param_1 + 2,&local_60,param_1,*(undefined8 *)puVar2);
      return;
    }
  }
  FUN_016a13e0(&local_60,0);
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar8 = (long *)FUN_014f3ce0(*(undefined8 *)(*(long *)(param_1 + 0xc) + 0x18),0);
  if (**(long **)(*(long *)puVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(undefined4 *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x10);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_014f5ed8(lVar9,uVar1,0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x1b8))
              (plVar8,*(undefined8 *)puVar4,lVar9,*(undefined8 *)(*plVar8 + 0x1c0));
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x448))(plVar11,plVar8,1,*(undefined8 *)(*plVar11 + 0x450));
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -2;
      FUN_016a1ab0(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


