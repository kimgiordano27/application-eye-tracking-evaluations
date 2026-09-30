/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<Light2DBlendStyle>
ENTRY_POINT: 023fb470
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


/* WARNING: Removing unreachable block (ram,0x023fb72c) */

void System_Array__InternalArray__ICollection_Remove<Light2DBlendStyle>(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar9;
  void *__s;
  long unaff_x26;
  long *plVar10;
  long unaff_x29;
  
  thunk_FUN_01efb3a4();
  plVar10 = *(long **)(unaff_x20 + 0x38);
  if (plVar10 == (long *)0x0) {
    FUN_01ecafa0();
    plVar10 = *(long **)(unaff_x20 + 0x38);
  }
  __n = (ulong)*(uint *)(plVar10[4] + 0xfc);
                    /* try { // try from 023fb494 to 024fb497 has its CatchHandler @ 023fb4a0 */
                    /* try { // try from 023fb498 to 024fb4cb has its CatchHandler @ 023fb220 */
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023fb494 with catch @ 023fb4a0
                        */
  puVar9 = (undefined8 *)(__src + -uVar7);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023fb3d4 with catch @ 023fb4ac
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023fb328 with catch @ 023fb4b0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023fb364 with catch @ 023fb4b4
                        */
  __s = (void *)((long)puVar9 - uVar7);
  memset(__s,0,__n);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar10;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023fb530;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023fb530:
  plVar10 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023fb598;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_023fb598:
    uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_023fb6ec;
      lVar4 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_023fb6c4;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_023fb60c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_01ecb238(plVar10,lVar4,0);
LAB_023fb60c:
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar10,unaff_x29 + -0x10,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar9,__s,__n);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar2 = puVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar2 = (undefined8 *)*puVar9;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar2;
    (*(code *)puVar5[2])(uVar3);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_023fb6e0;
    }
  }
LAB_023fb6c4:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023fb6e0:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_023fb6ec:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


