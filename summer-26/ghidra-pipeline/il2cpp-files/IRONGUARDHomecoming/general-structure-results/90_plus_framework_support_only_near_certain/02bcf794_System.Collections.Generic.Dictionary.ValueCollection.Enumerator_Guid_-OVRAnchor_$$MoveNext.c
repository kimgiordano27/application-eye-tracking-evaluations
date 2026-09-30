/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection.Enumerator<Guid,-OVRAnchor>$$MoveNext
ENTRY_POINT: 02bcf794
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02bcfb10) */

void System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRAnchor>__MoveNext
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_02bcf5e8();
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar3 = thunk_FUN_01ecaf38();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar4 = FUN_03582560(uVar3,uVar11,0);
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar4 & 1) != 0) {
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
      uVar4 = 0;
      puVar5 = (undefined8 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)((long)puVar5 + -0xc)) {
          in_stack_00000010 = puVar5[2];
          in_stack_00000008 = puVar5[1];
          in_stack_00000000 = *puVar5;
          in_stack_00000020 = in_stack_00000000;
          in_stack_00000028 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000010;
          FUN_02bd0a8c();
        }
        uVar4 = uVar4 + 1;
        puVar5 = (undefined8 *)((long)puVar5 + 0x24);
      } while (uVar1 != uVar4);
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
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02bcf92c;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02bcf92c:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar5 = (undefined8 *)((ulong)&stack0x00000000 | 4);
  do {
    lVar8 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bcf99c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02bcf99c:
    uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar4 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bcfa14;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
LAB_02bcfa14:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    in_stack_00000008 = puVar5[1];
    in_stack_00000000 = *puVar5;
    in_stack_00000010 = puVar5[2];
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000010;
    FUN_02bd0a8c();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bcfac8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02bcfac8:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return;
}


