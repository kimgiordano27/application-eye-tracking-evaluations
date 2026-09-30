/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<Int32Enum,-Int32Enum>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bde2ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02bde6fc) */

void System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_Int32Enum>__System_Collections_IEnumerator_get_Current
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 02bde304 to 02cde30f has its CatchHandler @ 02bde3c8 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 02bde310 to 02cde3b3 has its CatchHandler @ 02bddf7c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0x41e) = 1;
  }
  if (unaff_x21 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bde3a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02bde3a0:
    uVar3 = (*(code *)*puVar4)();
  }
                    /* try { // try from 02bde3b4 to 02cde3b7 has its CatchHandler @ 02bde3c4 */
                    /* try { // try from 02bde3b8 to 02cde3e7 has its CatchHandler @ 02bddf7c */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02bde3b4 with catch @ 02bde3c4
                        */
  FUN_02bde21c(param_2,uVar3);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02bde304 with catch @ 02bde3c8
                        */
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02bde240 with catch @ 02bde3cc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02bde280 with catch @ 02bde3d0
                        */
  uVar5 = thunk_FUN_01ecaf38();
                    /* try { // try from 02bde3e8 to 02cde3eb has its CatchHandler @ 02bde3f8 */
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
                    /* catch() { ... } // from try @ 02bde3e8 with catch @ 02bde3f8 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar9 = FUN_03582560(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 02bde438 to 02cde45f has its CatchHandler @ 02bde474 */
      lVar7 = FUN_01ecaf44(lVar7);
    }
                    /* try { // try from 02bde460 to 02cde46b has its CatchHandler @ 02bddf7c */
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
                    /* try { // try from 02bde46c to 02cde473 has its CatchHandler @ 02bde474 */
    uVar1 = *(uint *)(unaff_x21 + 4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bde438 with catch @ 02bde474
                       catch(type#2 @ 00000000) { ... } // from try @ 02bde46c with catch @ 02bde474
                        */
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = unaff_x21[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      puVar4 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(puVar4 + -2)) {
          FUN_02bdf4f0(param_2,puVar4[-1],*puVar4,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                      + 0x80) + 0x20) + 0xc0) + 0xf8));
        }
        uVar9 = uVar9 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02bde538;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02bde538:
  plVar6 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bde5a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02bde5a0:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bde618;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_02bde618:
    auVar12 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    FUN_02bdf4f0(param_2,auVar12._0_8_,auVar12._8_8_,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                0x80) + 0x20) + 0xc0) + 0xf8));
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bde6b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02bde6b8:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


