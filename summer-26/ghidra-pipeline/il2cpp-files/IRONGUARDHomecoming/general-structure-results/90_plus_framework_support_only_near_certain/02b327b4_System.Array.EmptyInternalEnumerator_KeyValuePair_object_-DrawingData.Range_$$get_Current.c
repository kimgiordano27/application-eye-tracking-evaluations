/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<object,-DrawingData.Range>>$$get_Current
ENTRY_POINT: 02b327b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02b32b90) */

void System_Array_EmptyInternalEnumerator<KeyValuePair<object,_DrawingData_Range>>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    in_x9 = in_x9 + -1;
    piVar10 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01ecb238();
      goto LAB_02b327e8;
    }
    plVar6 = (long *)(in_x10 + 2);
    in_x10 = piVar10;
  } while (*plVar6 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
LAB_02b327e8:
  (*(code *)*puVar3)();
  FUN_02b32654();
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar4 = thunk_FUN_01ecaf38();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar5 = FUN_03582560(uVar4,uVar11,0);
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = unaff_x21[3];
    if (lVar8 != 0) {
      uVar5 = 0;
      puVar3 = (undefined8 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)((long)puVar3 + -0xc)) {
          uStack0000000000000014 = *(undefined8 *)((long)puVar3 + 0x14);
          in_stack_00000000 = *puVar3;
          uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20);
          uStack0000000000000028 = (undefined4)puVar3[1];
          uStack000000000000002c = (undefined4)((ulong)puVar3[1] >> 0x20);
          uStack000000000000000c = uStack000000000000002c;
          uStack0000000000000010 = uStack0000000000000030;
          uStack0000000000000008 = uStack0000000000000028;
          in_stack_00000020 = in_stack_00000000;
          uStack0000000000000034 = uStack0000000000000014;
          FUN_02b33b18();
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 5;
      } while (uVar1 != uVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *(long *)(lVar8 + 0x88);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02b329a4;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02b329a4:
  plVar6 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar3 = (undefined8 *)((ulong)&stack0x00000000 | 4);
  do {
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__get_Current
          ;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__get_Current:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar5 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_02b32a8c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
FUN_02b32a8c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    in_stack_00000000 = *puVar3;
    uStack0000000000000014 = *(undefined8 *)((long)puVar3 + 0x14);
    uStack0000000000000048 = (undefined4)puVar3[1];
    uStack000000000000004c = (undefined4)*(undefined8 *)((long)puVar3 + 0xc);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20);
    uStack0000000000000008 = uStack0000000000000048;
    uStack000000000000000c = uStack000000000000004c;
    uStack0000000000000010 = uStack0000000000000050;
    in_stack_00000040 = in_stack_00000000;
    uStack0000000000000054 = uStack0000000000000014;
    FUN_02b33b18();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_02b32b48;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_02b32b48:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  return;
}


