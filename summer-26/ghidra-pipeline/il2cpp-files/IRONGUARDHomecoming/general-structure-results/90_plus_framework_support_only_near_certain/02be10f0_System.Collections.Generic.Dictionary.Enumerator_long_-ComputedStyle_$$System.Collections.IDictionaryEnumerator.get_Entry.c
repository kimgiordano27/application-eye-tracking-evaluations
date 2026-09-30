/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<long,-ComputedStyle>$$System.Collections.IDictionaryEnumerator.get_Entry
ENTRY_POINT: 02be10f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02be14b0) */

void System_Collections_Generic_Dictionary_Enumerator<long,_ComputedStyle>__System_Collections_IDictionaryEnumerator_get_Entry
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar3 = FUN_01ecaf44(param_2);
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02be1150;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
                    /* try { // try from 02be1124 to 02ce1187 has its CatchHandler @ 02be128c */
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02be1150:
  (*(code *)*puVar4)();
  FUN_02be0fc8();
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar5 = thunk_FUN_01ecaf38();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
                    /* try { // try from 02be11bc to 02ce11cb has its CatchHandler @ 02be1284 */
  uVar10 = FUN_03579868(uVar10,0);
                    /* try { // try from 02be11cc to 02ce126f has its CatchHandler @ 02be0df8 */
  uVar8 = FUN_03582560(uVar5,uVar10,0);
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar8 & 1) != 0) {
    lVar3 = *(long *)(lVar3 + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar3 = unaff_x21[3];
    if (lVar3 != 0) {
      uVar8 = 0;
      lVar7 = lVar3 + 0x38;
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar7 + -0x18)) {
          FUN_02be2294();
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(lVar3 + 0x88);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02be12ec;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02be12ec:
  plVar6 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02be1354;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02be1354:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02be13cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar3,0);
LAB_02be13cc:
    (*(code *)*puVar4)(&stack0x00000008,plVar6,puVar4[1]);
    FUN_02be2294();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02be1468;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02be1468:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


