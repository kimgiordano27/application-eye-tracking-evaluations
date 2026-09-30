/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalAdditionalCameraData$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 05880864
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_8;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
               (long param_1,undefined8 param_2)

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
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 uVar17;
  long *plVar18;
  long unaff_x21;
  undefined8 *puVar19;
  long unaff_x22;
  undefined8 *puVar20;
  long unaff_x23;
  undefined8 *puVar21;
  long unaff_x24;
  undefined8 *puVar22;
  long unaff_x25;
  undefined8 *puVar23;
  long unaff_x26;
  undefined8 *puVar24;
  long in_stack_00000008;
  
  puVar7 = Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__;
  puVar5 = Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__;
  puVar19 = *(undefined8 **)(unaff_x21 + 0x668);
  puVar24 = *(undefined8 **)(unaff_x26 + 0x1c8);
  puVar23 = *(undefined8 **)(unaff_x25 + 0x1d0);
  puVar22 = *(undefined8 **)(unaff_x24 + 0x1d8);
  puVar20 = *(undefined8 **)(unaff_x22 + 0x1e0);
  puVar21 = *(undefined8 **)(unaff_x23 + 0x1e8);
  if ((DAT_066d3040 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_List<VolumeComponent>_GetEnumerator__);
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputDevice>>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<Guid,_Pose>>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<Guid,_Pose>>_GetValueOrDefault__);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_Value__);
    FUN_02b3c81c(PTR_DAT_063196e0);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<int,_int>>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__);
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<int,_int>>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputControl>>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>_GetValueOrDefault__);
    FUN_02b3c81c(Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>__ctor__);
    FUN_02b3c81c(PTR_DAT_0631fff8);
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<Anchor>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<Anchor>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__);
    FUN_02b3c81c(PTR_DAT_06321668);
    FUN_02b3c81c(
                Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_set_Capacity__
                );
    FUN_02b3c81c(PTR_DAT_063214d0);
    FUN_02b3c81c(Method_System_Nullable<Anchor>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<AnimatorControllerParameterType>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<AsyncGPUReadbackRequest>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<AsyncGPUReadbackRequest>_get_HasValue__);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_System_Nullable<AsyncGPUReadbackRequest>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<AttributesScope>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<AttributesScope>_GetValueOrDefault__);
    DAT_066d3040 = 1;
  }
  in_stack_00000008 = 0;
  uVar11 = thunk_FUN_02b79644(*puVar19);
  FUN_05881028();
  *(undefined8 *)(param_1 + 0x28) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar11);
  uVar11 = thunk_FUN_02b79644(*puVar24);
  FUN_05881158();
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar11);
  uVar11 = thunk_FUN_02b79644(*puVar23);
  FUN_037a5d48(uVar11,0x40,*puVar22);
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x38),uVar11);
  uVar11 = thunk_FUN_02b79644(*puVar20);
  FUN_03813290(uVar11,0x20,*puVar21);
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_04dbdb8c(uVar11,0);
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_058811a8();
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<Anchor>__ctor__);
  FUN_04dbdb8c(uVar11,0);
  FUN_05890bd8(uVar11);
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<ValueTuple<Guid,_Pose>>__ctor__)
  ;
  FUN_04457f90(uVar11,*(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputDevice>>__ctor__);
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x60),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<ValueTuple<int,_int>>__ctor__);
  FUN_04dbdb8c(uVar11,0);
  *(undefined8 *)(param_1 + 0x68) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x68),uVar11);
  uVar11 = FUN_02b3c908(*(undefined8 *)
                         Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__,3);
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  thunk_FUN_02bb0e9c();
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<AsyncGPUReadbackRequest>_get_HasValue__);
  FUN_03f07ce0(uVar11,*(undefined8 *)Method_System_Nullable<AsyncGPUReadbackRequest>__ctor__);
  *(undefined8 *)(param_1 + 0x90) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x90),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Collections_Generic_List<VolumeComponent>_GetEnumerator__
                             );
  FUN_05881254();
  *(undefined8 *)(param_1 + 0xb0) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb0),uVar11);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_HasValue__);
  FUN_0452d044(uVar11,*(undefined8 *)
                       Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__);
  *(undefined8 *)(param_1 + 0xd0) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xd0),uVar11);
  puVar19 = (undefined8 *)(param_1 + 0xd8);
  *puVar19 = *(undefined8 *)Method_System_Nullable<AttributesScope>__ctor__;
  thunk_FUN_02bb0e9c(puVar19);
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<Guid,_Pose>>_GetValueOrDefault__);
  FUN_04465e50(uVar11,*(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__)
  ;
  *(undefined8 *)(param_1 + 0xe0) = uVar11;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe0),uVar11);
  lVar12 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,2);
  if (lVar12 == 0) goto LAB_05881020;
  if (*(int *)(lVar12 + 0x18) != 0) {
    *(undefined8 *)(lVar12 + 0x20) =
         *(undefined8 *)Method_System_Nullable<AsyncGPUReadbackRequest>_get_Value__;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
    puVar7 = Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_Value__;
    puVar5 = PTR_DAT_063196e0;
    if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar12 + 0x28) =
           *(undefined8 *)Method_System_Nullable<AttributesScope>_GetValueOrDefault__;
      thunk_FUN_02bb0e9c();
      *(long *)(param_1 + 0xe8) = lVar12;
      thunk_FUN_02bb0e9c((long *)(param_1 + 0xe8),lVar12);
      FUN_04dbdb8c(param_1,0);
      *(undefined8 *)(param_1 + 0xd8) = param_2;
      thunk_FUN_02bb0e9c(puVar19,param_2);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar5 = PTR_DAT_063214d0;
      uVar13 = FUN_031da64c(&stack0x00000008,*(undefined8 *)puVar7);
      if ((uVar13 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d30e0 == '\0') {
          FUN_02b3c81c(PTR_DAT_063214d0);
          DAT_066d30e0 = '\x01';
        }
        lVar12 = *(long *)puVar5;
        uVar17 = 1;
      }
      else {
        if (in_stack_00000008 == 0) {
LAB_05881020:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        cVar3 = *(char *)(in_stack_00000008 + 0x14);
        *(char *)(param_1 + 0xae) = cVar3;
        if (cVar3 != '\0') {
          uVar11 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631fff8);
          FUN_057ea0d4(uVar11,0);
          *(undefined8 *)(param_1 + 0x80) = uVar11;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x80),uVar11);
          if (in_stack_00000008 == 0) goto LAB_05881020;
        }
        uVar17 = *(undefined1 *)(in_stack_00000008 + 0x15);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d30e0 == '\0') {
          FUN_02b3c81c(PTR_DAT_063214d0);
          DAT_066d30e0 = '\x01';
        }
        lVar12 = *(long *)puVar5;
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar12 = *(long *)puVar5;
      }
      puVar7 = Method_System_Nullable<Anchor>_get_Value__;
      iVar2 = *(int *)(lVar12 + 0xe4);
      *(undefined1 *)(*(long *)(lVar12 + 0xb8) + 0x11) = uVar17;
      if (iVar2 == 0) {
        thunk_FUN_02b9ad44();
        lVar12 = *(long *)puVar5;
      }
      puVar10 = Method_System_Nullable<AnimatorControllerParameterType>__ctor__;
      puVar9 = Method_System_Nullable<Anchor>_get_HasValue__;
      puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_get_HasValue__;
      puVar6 = 
      Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_set_Capacity__
      ;
      lVar12 = FUN_02b3c908(*(undefined8 *)puVar7,**(undefined4 **)(lVar12 + 0xb8));
      plVar18 = (long *)(param_1 + 0x88);
      *plVar18 = lVar12;
      thunk_FUN_02bb0e9c(plVar18,lVar12);
      lVar12 = 0x20;
      uVar13 = 0;
      while( true ) {
        lVar14 = *(long *)puVar5;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *(long *)puVar5;
        }
        if ((long)**(int **)(lVar14 + 0xb8) <= (long)uVar13) {
          uVar11 = *(undefined8 *)(param_1 + 0x48);
          uVar1 = *(undefined8 *)(param_1 + 0x50);
          uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
          FUN_058961d4(uVar15,uVar11,uVar1,0);
          *(undefined8 *)(param_1 + 0x20) = uVar15;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar15);
          lVar12 = *(long *)puVar5;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar12 = *(long *)puVar5;
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
          if (lVar12 != 0) {
            lVar14 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar8;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar4 = *(uint *)(lVar12 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar4 + 1;
                plVar18 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
                *plVar18 = param_1;
                thunk_FUN_02bb0e9c(plVar18,param_1);
              }
              else {
                FUN_037a6538(lVar12,param_1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              if (lVar12 != 0) {
                (**(code **)(lVar12 + 0x18))
                          (*(undefined8 *)(lVar12 + 0x40),param_1,*(undefined8 *)(lVar12 + 0x28));
              }
              lVar12 = *(long *)puVar9;
              *(undefined4 *)(param_1 + 200) = 0;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar12 = *(long *)puVar9;
              }
              **(undefined1 **)(lVar12 + 0xb8) = 1;
              return;
            }
          }
          goto LAB_05881020;
        }
        lVar14 = *plVar18;
        uVar11 = FUN_02b3c908(*(undefined8 *)puVar10,uVar13 + 1 & 0xffffffff);
        if (lVar14 == 0) goto LAB_05881020;
        if (*(uint *)(lVar14 + 0x18) <= uVar13) break;
        *(undefined8 *)(lVar14 + lVar12) = uVar11;
        thunk_FUN_02bb0e9c(lVar14 + lVar12,uVar11);
        lVar12 = lVar12 + 8;
        uVar13 = uVar13 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


