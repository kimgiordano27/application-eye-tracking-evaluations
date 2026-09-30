/*
FUNCTION_NAME: Unity.Services.Friends.WrappedFriendsApi.<TryCatchRequest>d__24<object,-bool>$$MoveNext
ENTRY_POINT: 05c25728
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Friends_WrappedFriendsApi_<TryCatchRequest>d__24<object,_bool>__MoveNext(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  uint unaff_w25;
  
  do {
                    /* try { // try from 05c25728 to 05d2572b has its CatchHandler @ 05c2572c */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 05c25728 with catch @ 05c2572c
                       try { // try from 05c2572c to 05d2574f has its CatchHandler @ 05c254f0 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 05c25700 with catch @ 05c25730
                        */
    FUN_05c26fa0();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 05c256a8 with catch @ 05c25734
                        */
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 05c25704 with catch @ 05c25738
                        */
    plVar3 = (long *)FUN_07e02864(unaff_x22,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar3;
                    /* try { // try from 05c25750 to 05d25767 has its CatchHandler @ 05c257ac */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 05c25768 to 05d2579b has its CatchHandler @ 05c254f0 */
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
          goto LAB_05c2579c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x24,0x14);
LAB_05c2579c:
                    /* try { // try from 05c2579c to 05d257ab has its CatchHandler @ 05c257ac */
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
                    /* catch() { ... } // from try @ 05c25750 with catch @ 05c257ac
                       catch() { ... } // from try @ 05c2579c with catch @ 05c257ac */
                    /* try { // try from 05c257b0 to 05d257b3 has its CatchHandler @ 05c257bc */
                    /* try { // try from 05c257b4 to 05d257bf has its CatchHandler @ 05c254f0 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05c257b0 with catch @ 05c257bc
                        */
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x15) * 0x10 + 0x138);
          goto LAB_05c257fc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x24,0x15);
LAB_05c257fc:
    (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
    uVar1 = (int)unaff_x21 + 1;
    unaff_x21 = (ulong)uVar1;
    if (uVar1 == unaff_w25) {
      FUN_07f2b9ac(&stack0x00000018,0);
      System_Array_EmptyInternalEnumerator<PriorityIntersectionData>__Dispose
                (unaff_x19 + 0x28,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
      uVar1 = *(uint *)(unaff_x19 + 0x78);
      if ((int)uVar1 < 1) goto LAB_05c25944;
      uVar6 = 0;
      break;
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    unaff_x22 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    FUN_05c2538c();
  } while( true );
LAB_05c25848:
  lVar5 = *(long *)(unaff_x19 + 0x58);
  if (lVar5 == 0) {
LAB_05c25970:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  lVar5 = *(long *)(lVar5 + uVar6 * 8 + 0x20);
  if ((lVar5 == 0) || (plVar3 = (long *)FUN_07e02864(lVar5,0), plVar3 == (long *)0x0))
  goto LAB_05c25970;
  lVar5 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x16) * 0x10 + 0x138);
        goto LAB_05c258c8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x24,0x16);
LAB_05c258c8:
  iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  lVar5 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x17) * 0x10 + 0x138);
        goto LAB_05c25928;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,*unaff_x24,0x17);
LAB_05c25928:
  (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
  uVar6 = uVar6 + 1;
  if (uVar6 == uVar1) {
LAB_05c25944:
    FUN_05f31260(unaff_x19 + 0x58,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb0));
    return;
  }
  goto LAB_05c25848;
}


