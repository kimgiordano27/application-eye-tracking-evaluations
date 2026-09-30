/*
FUNCTION_NAME: FUN_05f6f8bc
ENTRY_POINT: 05f6f8bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05f6f8bc(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  ulong local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  long local_68;
  undefined8 local_60;
  
  if ((DAT_06dc4451 & 1) == 0) {
    FUN_02d965b8(Method_System_Tuple<string,_string>_get_Item1__);
    FUN_02d965b8(Method_System_Tuple<string,_string>_get_Item2__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>__ctor__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>_get_Item1__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>_get_Item2__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_Vector3>_get_Item1__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
    FUN_02d965b8(
                Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>__ctor__
                );
    FUN_02d965b8(
                Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item1__
                );
    FUN_02d965b8(
                Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item2__
                );
    FUN_02d965b8(PTR_DAT_069fc3e0);
    FUN_02d965b8(PTR_DAT_06a01a68);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc4451 = 1;
  }
  puVar4 = Method_System_Tuple<Vector3,_float>_get_Item2__;
  puVar2 = Method_System_Tuple<Vector3,_float>__ctor__;
  puVar3 = Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
  local_60 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x98) == 0) goto LAB_05f6fc00;
  FUN_04e93a24(&local_c8,*(long *)(param_1 + 0x98),
               *(undefined8 *)Method_System_Tuple<string,_string>_get_Item1__);
  local_60 = local_a8;
  puStack_78 = puStack_c0;
  local_80 = local_c8;
  local_68 = lStack_b0;
  uStack_70 = local_b8;
  local_c8 = 0;
  puStack_c0 = &local_80;
  while (uVar6 = FUN_05232904(&local_80,*(undefined8 *)puVar4), lVar8 = local_68, (uVar6 & 1) != 0)
  {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc43e7 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06dc43e7 = '\x01';
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar5 = FUN_05f72e0c(lVar8,*(undefined4 *)(lVar7 + 0x16c));
    *(byte *)(lVar8 + 0x30) = bVar5 & 1;
  }
  FUN_05232a24(&local_80,*(undefined8 *)puVar2);
  if ((param_2 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    if (lVar8 == 0) goto LAB_05f6fc00;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar8 = FUN_04d96360(*(long *)(param_1 + 0x68),
                             *(undefined8 *)Method_System_Tuple<string,_string>_get_Item2__),
       lVar8 == 0)) goto LAB_05f6fc00;
    FUN_03dffb60(&local_c8,lVar8,
                 *(undefined8 *)
                  Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_get_Item1__
                );
    puVar4 = Method_System_Tuple<Vector3,_Vector3>_get_Item1__;
    puVar2 = PTR_DAT_069fc3e0;
    puStack_98 = puStack_c0;
    local_a0 = local_c8;
    local_90 = local_b8;
    local_c8 = 0;
    puStack_c0 = &local_a0;
    while (uVar6 = FUN_0520f380(&local_a0,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x78);
      if (lVar8 == 0) {
LAB_05f6fbf4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar8 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05f6fbf4;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)local_90;
      }
      else {
        FUN_03fb3e1c(lVar8,local_90 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0520f37c(&local_a0,*(undefined8 *)Method_System_Tuple<Vector3,_float>_get_Item1__);
    FUN_05f6fcd4(param_1);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc43e7 == '\0') {
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
    DAT_06dc43e7 = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x1a) != '\0') {
      FUN_05f6fd04(0,param_1,0);
    }
    return;
  }
LAB_05f6fc00:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


