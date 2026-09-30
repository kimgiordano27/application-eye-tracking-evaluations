/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalAdditionalLightData$$set_usePipelineSettings
ENTRY_POINT: 05880b3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_UniversalAdditionalLightData__set_usePipelineSettings(void)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x19;
  undefined1 uVar15;
  undefined8 unaff_x20;
  long *plVar16;
  undefined8 *puVar17;
  long in_stack_00000008;
  
  thunk_FUN_02bb0e9c();
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<ValueTuple<Guid,_Pose>>__ctor__)
  ;
  FUN_04457f90(uVar10,*(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputDevice>>__ctor__);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x60),uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<ValueTuple<int,_int>>__ctor__);
  FUN_04dbdb8c(uVar10,0);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x68),uVar10);
  uVar10 = FUN_02b3c908(*(undefined8 *)
                         Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__,3);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
  thunk_FUN_02bb0e9c();
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<AsyncGPUReadbackRequest>_get_HasValue__);
  FUN_03f07ce0(uVar10,*(undefined8 *)Method_System_Nullable<AsyncGPUReadbackRequest>__ctor__);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x90),uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Collections_Generic_List<VolumeComponent>_GetEnumerator__
                             );
  FUN_05881254();
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb0),uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_HasValue__);
  FUN_0452d044(uVar10,*(undefined8 *)
                       Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd0),uVar10);
  puVar17 = (undefined8 *)(unaff_x19 + 0xd8);
  *puVar17 = *(undefined8 *)Method_System_Nullable<AttributesScope>__ctor__;
  thunk_FUN_02bb0e9c(puVar17);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<Guid,_Pose>>_GetValueOrDefault__);
  FUN_04465e50(uVar10,*(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__)
  ;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),uVar10);
  lVar11 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,2);
  if (lVar11 == 0) goto LAB_05881020;
  if (*(int *)(lVar11 + 0x18) != 0) {
    *(undefined8 *)(lVar11 + 0x20) =
         *(undefined8 *)Method_System_Nullable<AsyncGPUReadbackRequest>_get_Value__;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
    puVar7 = Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_Value__;
    puVar5 = PTR_DAT_063196e0;
    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar11 + 0x28) =
           *(undefined8 *)Method_System_Nullable<AttributesScope>_GetValueOrDefault__;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0xe8) = lVar11;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0xe8),lVar11);
      FUN_04dbdb8c();
      *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x20;
      thunk_FUN_02bb0e9c(puVar17);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar5 = PTR_DAT_063214d0;
      uVar12 = FUN_031da64c(&stack0x00000008,*(undefined8 *)puVar7);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d30e0 == '\0') {
          FUN_02b3c81c(PTR_DAT_063214d0);
          DAT_066d30e0 = '\x01';
        }
        lVar11 = *(long *)puVar5;
        uVar15 = 1;
      }
      else {
        if (in_stack_00000008 == 0) {
LAB_05881020:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        cVar3 = *(char *)(in_stack_00000008 + 0x14);
        *(char *)(unaff_x19 + 0xae) = cVar3;
        if (cVar3 != '\0') {
          uVar10 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631fff8);
          FUN_057ea0d4(uVar10,0);
          *(undefined8 *)(unaff_x19 + 0x80) = uVar10;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x80),uVar10);
          if (in_stack_00000008 == 0) goto LAB_05881020;
        }
        uVar15 = *(undefined1 *)(in_stack_00000008 + 0x15);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d30e0 == '\0') {
          FUN_02b3c81c(PTR_DAT_063214d0);
          DAT_066d30e0 = '\x01';
        }
        lVar11 = *(long *)puVar5;
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar11 = *(long *)puVar5;
      }
      puVar7 = Method_System_Nullable<Anchor>_get_Value__;
      iVar2 = *(int *)(lVar11 + 0xe4);
      *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 0x11) = uVar15;
      if (iVar2 == 0) {
        thunk_FUN_02b9ad44();
        lVar11 = *(long *)puVar5;
      }
      puVar9 = Method_System_Nullable<AnimatorControllerParameterType>__ctor__;
      puVar8 = Method_System_Nullable<Anchor>_get_HasValue__;
      puVar6 = 
      Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_set_Capacity__
      ;
      lVar11 = FUN_02b3c908(*(undefined8 *)puVar7,**(undefined4 **)(lVar11 + 0xb8));
      plVar16 = (long *)(unaff_x19 + 0x88);
      *plVar16 = lVar11;
      thunk_FUN_02bb0e9c(plVar16,lVar11);
      lVar11 = 0x20;
      uVar12 = 0;
      while( true ) {
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar13 = *(long *)puVar5;
        }
        if ((long)**(int **)(lVar13 + 0xb8) <= (long)uVar12) {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
          uVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
          FUN_058961d4(uVar14,uVar10,uVar1,0);
          *(undefined8 *)(unaff_x19 + 0x20) = uVar14;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),uVar14);
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar11 = *(long *)puVar5;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar11 != 0) {
            lVar13 = *(long *)(lVar11 + 0x10);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar4 = *(uint *)(lVar11 + 0x18);
              if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar4 + 1;
                plVar16 = (long *)(lVar13 + (long)(int)uVar4 * 8 + 0x20);
                *plVar16 = unaff_x19;
                thunk_FUN_02bb0e9c(plVar16);
              }
              else {
                FUN_037a6538();
              }
              lVar11 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              if (lVar11 != 0) {
                (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40));
              }
              lVar11 = *(long *)puVar8;
              *(undefined4 *)(unaff_x19 + 200) = 0;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar11 = *(long *)puVar8;
              }
              **(undefined1 **)(lVar11 + 0xb8) = 1;
              return;
            }
          }
          goto LAB_05881020;
        }
        lVar13 = *plVar16;
        uVar10 = FUN_02b3c908(*(undefined8 *)puVar9,uVar12 + 1 & 0xffffffff);
        if (lVar13 == 0) goto LAB_05881020;
        if (*(uint *)(lVar13 + 0x18) <= uVar12) break;
        *(undefined8 *)(lVar13 + lVar11) = uVar10;
        thunk_FUN_02bb0e9c(lVar13 + lVar11,uVar10);
        lVar11 = lVar11 + 8;
        uVar12 = uVar12 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


