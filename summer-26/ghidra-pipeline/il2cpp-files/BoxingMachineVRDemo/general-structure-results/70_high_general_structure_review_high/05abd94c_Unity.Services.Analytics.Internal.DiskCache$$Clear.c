/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.DiskCache$$Clear
ENTRY_POINT: 05abd94c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Analytics_Internal_DiskCache__Clear
               (undefined8 param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint in_w9;
  ulong in_x10;
  ulong in_x11;
  uint unaff_w19;
  long lVar9;
  long *plVar10;
  long lVar11;
  int unaff_w20;
  int unaff_w21;
  byte unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  long lVar12;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 uVar13;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  while( true ) {
    *(ulong *)(*unaff_x28 + unaff_x23 * 8) = in_x11 & 0xffffffff | in_x10 << 0x20;
    *(uint *)(in_stack_00000090 + unaff_x23 * 4) = in_w9;
    *(uint *)(in_stack_00000080 + unaff_x23 * 4) = unaff_w19;
    FUN_03dacb0c(in_stack_00000010,param_2,param_3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__);
    if ((unaff_w22 & 1) != 0) {
      *(int *)(in_stack_000000a0 + (long)in_stack_00000018._4_4_ * 4) = (int)unaff_x23;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    }
    unaff_w20 = unaff_w20 + unaff_w21 * unaff_w19;
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x14;
    lVar9 = *in_stack_00000020;
    if ((*(byte *)(*(long *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                            + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if ((long)*(int *)(lVar9 + 8) <= (long)unaff_x23) break;
    plVar10 = (long *)*in_stack_00000020;
    if ((*(byte *)(*(long *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<PropertyName,_object>__ctor__
                            + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    param_3 = unaff_x23 & 0xffffffff;
    puVar1 = (uint *)(unaff_x24 + *plVar10);
    param_2 = (ulong)*puVar1;
    unaff_w19 = puVar1[1];
    unaff_w22 = *(byte *)((long)puVar1 + 9);
    uVar5 = *(undefined2 *)((long)puVar1 + 10);
    uVar6 = puVar1[2];
    uVar13 = *(undefined8 *)(puVar1 + 3);
    puVar2 = (uint *)(*unaff_x25 + unaff_x24);
    *puVar2 = *puVar1;
    puVar2[1] = unaff_w19;
    *(byte *)(puVar2 + 2) = (byte)uVar6;
    *(byte *)((long)puVar2 + 9) = unaff_w22;
    *(undefined2 *)((long)puVar2 + 10) = uVar5;
    *(undefined8 *)(puVar2 + 3) = uVar13;
    iVar4 = (int)uVar13;
    unaff_w21 = *(int *)(*unaff_x27 + (long)iVar4 * 4);
    iVar4 = *(int *)(*unaff_x26 + (long)iVar4 * 4);
    if ((unaff_w22 & 1) == 0) {
      unaff_w21 = 1;
    }
    *(ulong *)(in_stack_00000070 + unaff_x23 * 8) = CONCAT44(unaff_w21 + iVar4,iVar4);
    in_w9 = unaff_w20 - iVar4 * unaff_w19;
    in_x10 = (ulong)(in_w9 | (uint)(byte)uVar6 << 0x1f);
    *(uint *)(*unaff_x29 + unaff_x23 * 4) = in_w9;
    in_x11 = param_2;
  }
  *(int *)(in_stack_00000008 + 0x38) = unaff_w20;
  puVar7 = Method_Unity_VisualScripting_Add<Vector2>__ctor__;
  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)Method_Unity_VisualScripting_Add<Vector2>__ctor__);
  iVar4 = unaff_w20 + 3;
  if (-1 < unaff_w20) {
    iVar4 = unaff_w20;
  }
  FUN_0603a658(lVar9,0x20,iVar4 >> 2,4,0);
  plVar10 = (long *)(in_stack_00000008 + 0x48);
  *plVar10 = lVar9;
  thunk_FUN_02dd37b4(plVar10,lVar9);
  lVar9 = *plVar10;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  FUN_03d32818(&stack0x00000058,4,2,1,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_Add__
              );
  if (lVar9 != 0) {
    FUN_033f7810(lVar9,in_stack_00000058,in_stack_00000060,0,0,4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_set_Item__
                );
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
    FUN_0603a658(lVar9,0x20,in_stack_00000018._4_4_,4,0);
    plVar10 = (long *)(in_stack_00000008 + 0x50);
    *plVar10 = lVar9;
    thunk_FUN_02dd37b4(plVar10,lVar9);
    puVar8 = 
    Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_get_Count__;
    if (*plVar10 != 0) {
      FUN_033f745c(*plVar10,in_stack_000000a0,in_stack_000000a8,0,0,in_stack_00000018._4_4_,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_get_Count__
                  );
      lVar9 = *in_stack_00000020;
      if ((*(byte *)(*(long *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                              + 0x20) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      uVar3 = *(undefined4 *)(lVar9 + 8);
      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
      FUN_0603a658(lVar9,0x20,uVar3,4,0);
      plVar10 = (long *)(in_stack_00000008 + 0x58);
      *plVar10 = lVar9;
      thunk_FUN_02dd37b4(plVar10,lVar9);
      uVar13 = in_stack_00000098;
      lVar9 = in_stack_00000090;
      lVar12 = *plVar10;
      lVar11 = *in_stack_00000020;
      if ((*(byte *)(*(long *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                              + 0x20) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      if (lVar12 != 0) {
        FUN_033f745c(lVar12,lVar9,uVar13,0,0,*(undefined4 *)(lVar11 + 8),*(undefined8 *)puVar8);
        lVar9 = *in_stack_00000020;
        if ((*(byte *)(*(long *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                                + 0x20) + 0x135) & 1) == 0) {
          FUN_02d9a2e0();
        }
        uVar3 = *(undefined4 *)(lVar9 + 8);
        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_0603a658(lVar9,0x20,uVar3,8,0);
        plVar10 = (long *)(in_stack_00000008 + 0x60);
        *plVar10 = lVar9;
        thunk_FUN_02dd37b4(plVar10,lVar9);
        uVar13 = in_stack_00000078;
        lVar9 = in_stack_00000070;
        lVar12 = *plVar10;
        lVar11 = *in_stack_00000020;
        if ((*(byte *)(*(long *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                                + 0x20) + 0x135) & 1) == 0) {
          FUN_02d9a2e0();
        }
        if (lVar12 != 0) {
          FUN_033f76d4(lVar12,lVar9,uVar13,0,0,*(undefined4 *)(lVar11 + 8),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_get_Keys__
                      );
          lVar9 = *in_stack_00000020;
          if ((*(byte *)(*(long *)(*(long *)
                                    Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                                  + 0x20) + 0x135) & 1) == 0) {
            FUN_02d9a2e0();
          }
          uVar3 = *(undefined4 *)(lVar9 + 8);
          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
          FUN_0603a658(lVar9,0x20,uVar3,4,0);
          plVar10 = (long *)(in_stack_00000008 + 0x68);
          *plVar10 = lVar9;
          thunk_FUN_02dd37b4(plVar10,lVar9);
          uVar13 = in_stack_00000088;
          lVar9 = in_stack_00000080;
          lVar12 = *plVar10;
          lVar11 = *in_stack_00000020;
          if ((*(byte *)(*(long *)(*(long *)
                                    Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                                  + 0x20) + 0x135) & 1) == 0) {
            FUN_02d9a2e0();
          }
          if (lVar12 != 0) {
            FUN_033f745c(lVar12,lVar9,uVar13,0,0,*(undefined4 *)(lVar11 + 8),*(undefined8 *)puVar8);
            *(int *)(in_stack_00000008 + 0x3c) = in_stack_00000018._4_4_;
            puVar7 = PTR_DAT_0676a188;
            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRAnchor_Tracker_AsyncLock>__SetResult
                      (&stack0x000000a0,*(undefined8 *)PTR_DAT_0676a188);
            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRAnchor_Tracker_AsyncLock>__SetResult
                      (&stack0x00000090,*(undefined8 *)puVar7);
            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRAnchor_Tracker_AsyncLock>__SetResult
                      (&stack0x00000080,*(undefined8 *)puVar7);
            return in_stack_00000008;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


