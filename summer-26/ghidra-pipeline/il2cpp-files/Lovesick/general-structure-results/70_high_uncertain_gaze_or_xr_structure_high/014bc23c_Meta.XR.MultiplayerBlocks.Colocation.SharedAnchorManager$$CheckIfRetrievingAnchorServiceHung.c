/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$CheckIfRetrievingAnchorServiceHung
ENTRY_POINT: 014bc23c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__CheckIfRetrievingAnchorServiceHung
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int *unaff_x19;
  long unaff_x20;
  long *plVar11;
  float fVar12;
  long in_stack_00000008;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x20 + 0xdcb) = 1;
  puVar5 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
  ;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_laneq_s32__;
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_u32__;
  plVar11 = *(long **)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
    goto LAB_014bc398;
  }
  if (*unaff_x19 == 1) {
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
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
    lVar9 = *(long *)puVar4;
    if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar10 = 0;
    unaff_x19[0xe] = 0;
    while( true ) {
      puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
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
      FUN_0132138c(lVar9,iVar10,&stack0x00000008,
                   *(undefined8 *)Method_System_Collections_Generic_List<Type[]>_Add__);
      *(long *)(unaff_x19 + 0x10) = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar12 = *(float *)(in_stack_00000008 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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
      uVar6 = FUN_017e7d88(lVar9,0);
      uVar7 = FUN_016a1310();
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0x12) = uVar6;
        FUN_010bc698(unaff_x19 + 2);
        return;
      }
LAB_014bc398:
      FUN_016a13e0();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar8 = (long *)FUN_014f3ce0(*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18),0);
      if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x10);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
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
                (plVar8,*(undefined8 *)puVar3,lVar9,*(undefined8 *)(*plVar8 + 0x1c0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar11 + 0x448))(plVar11,plVar8,0,*(undefined8 *)(*plVar11 + 0x450));
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      iVar10 = unaff_x19[0xe] + 1;
      unaff_x19[0xe] = iVar10;
      lVar9 = *(long *)puVar4;
    }
    FUN_010db7b0(lVar9,&stack0x00000008,
                 *(undefined8 *)Method_Oculus_Platform_Request<UserCapabilityList>__ctor__);
    *(long *)(unaff_x19 + 0xc) = in_stack_00000008;
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar12 = *(float *)(in_stack_00000008 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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
    uVar6 = FUN_017e7d88(lVar9,0);
    uVar7 = FUN_016a1310();
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x12) = uVar6;
      FUN_010bc698(unaff_x19 + 2);
      return;
    }
  }
  FUN_016a13e0();
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar8 = (long *)FUN_014f3ce0(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),0);
  if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(undefined4 *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x10);
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_014f5ed8(lVar9,uVar1,0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x1b8))
              (plVar8,*(undefined8 *)puVar3,lVar9,*(undefined8 *)(*plVar8 + 0x1c0));
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x448))(plVar11,plVar8,1,*(undefined8 *)(*plVar11 + 0x450));
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -2;
      FUN_016a1ab0(unaff_x19 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


