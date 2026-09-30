/*
FUNCTION_NAME: FUN_05880830
ENTRY_POINT: 05880830
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05880830(long param_1,undefined8 param_2)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long local_68;
  
  puVar12 = Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__;
  puVar11 = Method_System_Nullable<ReadOnlyArray<InputControl>>_get_HasValue__;
  puVar10 = Method_System_Nullable<ReadOnlyArray<InputControl>>__ctor__;
  puVar9 = Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>_get_Value__;
  puVar8 = Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>_get_HasValue__;
  puVar6 = Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>_GetValueOrDefault__;
  puVar7 = Method_System_Nullable<OVRTask<MRUK_LoadDeviceResult>>__ctor__;
  puVar5 = PTR_DAT_06321668;
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
  local_68 = 0;
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_05881028();
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_05881158();
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_037a5d48(uVar13,0x40,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x38) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x38),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_03813290(uVar13,0x20,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar11);
  FUN_04dbdb8c(uVar13,0);
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar12);
  FUN_058811a8();
  *(undefined8 *)(param_1 + 0x50) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<Anchor>__ctor__);
  FUN_04dbdb8c(uVar13,0);
  FUN_05890bd8(uVar13);
  *(undefined8 *)(param_1 + 0x58) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<ValueTuple<Guid,_Pose>>__ctor__)
  ;
  FUN_04457f90(uVar13,*(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputDevice>>__ctor__);
  *(undefined8 *)(param_1 + 0x60) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x60),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<ValueTuple<int,_int>>__ctor__);
  FUN_04dbdb8c(uVar13,0);
  *(undefined8 *)(param_1 + 0x68) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x68),uVar13);
  uVar13 = FUN_02b3c908(*(undefined8 *)
                         Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__,3);
  *(undefined8 *)(param_1 + 0x78) = uVar13;
  thunk_FUN_02bb0e9c();
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<AsyncGPUReadbackRequest>_get_HasValue__);
  FUN_03f07ce0(uVar13,*(undefined8 *)Method_System_Nullable<AsyncGPUReadbackRequest>__ctor__);
  *(undefined8 *)(param_1 + 0x90) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x90),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Collections_Generic_List<VolumeComponent>_GetEnumerator__
                             );
  FUN_05881254();
  *(undefined8 *)(param_1 + 0xb0) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xb0),uVar13);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_HasValue__);
  FUN_0452d044(uVar13,*(undefined8 *)
                       Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__);
  *(undefined8 *)(param_1 + 0xd0) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xd0),uVar13);
  puVar21 = (undefined8 *)(param_1 + 0xd8);
  *puVar21 = *(undefined8 *)Method_System_Nullable<AttributesScope>__ctor__;
  thunk_FUN_02bb0e9c(puVar21);
  uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<Guid,_Pose>>_GetValueOrDefault__);
  FUN_04465e50(uVar13,*(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__)
  ;
  *(undefined8 *)(param_1 + 0xe0) = uVar13;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe0),uVar13);
  lVar14 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,2);
  if (lVar14 == 0) goto LAB_05881020;
  if (*(int *)(lVar14 + 0x18) != 0) {
    *(undefined8 *)(lVar14 + 0x20) =
         *(undefined8 *)Method_System_Nullable<AsyncGPUReadbackRequest>_get_Value__;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x20));
    puVar7 = Method_System_Nullable<ValueTuple<Guid,_Pose>>_get_Value__;
    puVar5 = PTR_DAT_063196e0;
    if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar14 + 0x28) =
           *(undefined8 *)Method_System_Nullable<AttributesScope>_GetValueOrDefault__;
      thunk_FUN_02bb0e9c();
      *(long *)(param_1 + 0xe8) = lVar14;
      thunk_FUN_02bb0e9c((long *)(param_1 + 0xe8),lVar14);
      FUN_04dbdb8c(param_1,0);
      *(undefined8 *)(param_1 + 0xd8) = param_2;
      thunk_FUN_02bb0e9c(puVar21,param_2);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar5 = PTR_DAT_063214d0;
      uVar15 = FUN_031da64c(&local_68,*(undefined8 *)puVar7);
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d30e0 == '\0') {
          FUN_02b3c81c(PTR_DAT_063214d0);
          DAT_066d30e0 = '\x01';
        }
        lVar14 = *(long *)puVar5;
        uVar19 = 1;
      }
      else {
        if (local_68 == 0) {
LAB_05881020:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        cVar3 = *(char *)(local_68 + 0x14);
        *(char *)(param_1 + 0xae) = cVar3;
        if (cVar3 != '\0') {
          uVar13 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631fff8);
          FUN_057ea0d4(uVar13,0);
          *(undefined8 *)(param_1 + 0x80) = uVar13;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x80),uVar13);
          if (local_68 == 0) goto LAB_05881020;
        }
        uVar19 = *(undefined1 *)(local_68 + 0x15);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d30e0 == '\0') {
          FUN_02b3c81c(PTR_DAT_063214d0);
          DAT_066d30e0 = '\x01';
        }
        lVar14 = *(long *)puVar5;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar14 = *(long *)puVar5;
      }
      puVar7 = Method_System_Nullable<Anchor>_get_Value__;
      iVar2 = *(int *)(lVar14 + 0xe4);
      *(undefined1 *)(*(long *)(lVar14 + 0xb8) + 0x11) = uVar19;
      if (iVar2 == 0) {
        thunk_FUN_02b9ad44();
        lVar14 = *(long *)puVar5;
      }
      puVar10 = Method_System_Nullable<AnimatorControllerParameterType>__ctor__;
      puVar9 = Method_System_Nullable<Anchor>_get_HasValue__;
      puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_get_HasValue__;
      puVar6 = 
      Method_Unity_Collections_NativeParallelHashMap<int,_InstanceCuller_AnimatedFadeData>_set_Capacity__
      ;
      lVar14 = FUN_02b3c908(*(undefined8 *)puVar7,**(undefined4 **)(lVar14 + 0xb8));
      plVar20 = (long *)(param_1 + 0x88);
      *plVar20 = lVar14;
      thunk_FUN_02bb0e9c(plVar20,lVar14);
      lVar14 = 0x20;
      uVar15 = 0;
      while( true ) {
        lVar16 = *(long *)puVar5;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar16 = *(long *)puVar5;
        }
        if ((long)**(int **)(lVar16 + 0xb8) <= (long)uVar15) {
          uVar13 = *(undefined8 *)(param_1 + 0x48);
          uVar1 = *(undefined8 *)(param_1 + 0x50);
          uVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
          FUN_058961d4(uVar17,uVar13,uVar1,0);
          *(undefined8 *)(param_1 + 0x20) = uVar17;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar17);
          lVar14 = *(long *)puVar5;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar14 = *(long *)puVar5;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar14 != 0) {
            lVar16 = *(long *)(lVar14 + 0x10);
            lVar18 = *(long *)puVar8;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar16 != 0) {
              uVar4 = *(uint *)(lVar14 + 0x18);
              if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar4 + 1;
                plVar20 = (long *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
                *plVar20 = param_1;
                thunk_FUN_02bb0e9c(plVar20,param_1);
              }
              else {
                FUN_037a6538(lVar14,param_1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              if (lVar14 != 0) {
                (**(code **)(lVar14 + 0x18))
                          (*(undefined8 *)(lVar14 + 0x40),param_1,*(undefined8 *)(lVar14 + 0x28));
              }
              lVar14 = *(long *)puVar9;
              *(undefined4 *)(param_1 + 200) = 0;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar14 = *(long *)puVar9;
              }
              **(undefined1 **)(lVar14 + 0xb8) = 1;
              return;
            }
          }
          goto LAB_05881020;
        }
        lVar16 = *plVar20;
        uVar13 = FUN_02b3c908(*(undefined8 *)puVar10,uVar15 + 1 & 0xffffffff);
        if (lVar16 == 0) goto LAB_05881020;
        if (*(uint *)(lVar16 + 0x18) <= uVar15) break;
        *(undefined8 *)(lVar16 + lVar14) = uVar13;
        thunk_FUN_02bb0e9c(lVar16 + lVar14,uVar13);
        lVar14 = lVar14 + 8;
        uVar15 = uVar15 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


