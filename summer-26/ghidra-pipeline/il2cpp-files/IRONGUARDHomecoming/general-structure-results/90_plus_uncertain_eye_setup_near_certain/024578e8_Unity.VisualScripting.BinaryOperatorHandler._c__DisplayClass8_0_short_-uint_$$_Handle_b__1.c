/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<short,-uint>$$<Handle>b__1
ENTRY_POINT: 024578e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02457bfc) */

long * Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<short,_uint>__<Handle>b__1
                 (void *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  uint uVar10;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 024575f0 with catch @ 024578e8 */
                    /* catch() { ... } // from try @ 02457594 with catch @ 024578ec */
  memset(param_1,param_2,unaff_x22);
  uVar2 = (*(code *)**(undefined8 **)(unaff_x19 + 8))();
                    /* try { // try from 02457904 to 02557907 has its CatchHandler @ 0245791c */
  lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x18);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
                    /* catch() { ... } // from try @ 02457904 with catch @ 0245791c */
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar6);
  }
  plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x10))(uVar2);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = **(long **)(unaff_x21 + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 0245795c to 02557983 has its CatchHandler @ 02457998 */
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
                    /* try { // try from 02457984 to 0255798f has its CatchHandler @ 02457418 */
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_024579b0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
                    /* try { // try from 02457990 to 02557997 has its CatchHandler @ 02457998 */
    } while (uVar8 != 0);
  }
                    /* catch() { ... } // from try @ 0245795c with catch @ 02457998
                       catch() { ... } // from try @ 02457990 with catch @ 02457998 */
                    /* try { // try from 0245799c to 02557b0f has its CatchHandler @ 0245799c
                       catch() { ... } // from try @ 0245799c with catch @ 0245799c
                       catch() { ... } // from try @ 02457bc8 with catch @ 0245799c
                       catch() { ... } // from try @ 02457c48 with catch @ 0245799c
                       catch() { ... } // from try @ 02457c8c with catch @ 0245799c
                       catch() { ... } // from try @ 02457ccc with catch @ 0245799c
                       catch() { ... } // from try @ 02457d3c with catch @ 0245799c
                       catch() { ... } // from try @ 02457e34 with catch @ 0245799c
                       catch() { ... } // from try @ 02457f00 with catch @ 0245799c */
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_024579b0:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = 0;
  do {
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02457a1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02457a1c:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_02457bac;
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02457b84;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02457a90;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar5,lVar6,0);
LAB_02457a90:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar5,unaff_x29 + -0x10);
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(plVar3 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar7 = (long)(int)uVar10;
    memcpy((void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * lVar7 + 0x20),unaff_x24,
           unaff_x22);
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(uint *)(plVar3 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar10 = uVar10 + 1;
    FUN_01f087b0(lVar6,(long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * lVar7 + 0x20);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02457ba0;
    }
  }
LAB_02457b84:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02457ba0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02457bac:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar3;
}


