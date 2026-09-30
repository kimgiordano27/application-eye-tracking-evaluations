/*
FUNCTION_NAME: System.Collections.Generic.List<InstructionList.DebugView.InstructionView>$$InsertRange
ENTRY_POINT: 03194f08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03195340) */
/* WARNING: Removing unreachable block (ram,0x031953a4) */

void System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__InsertRange
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  undefined8 *puVar13;
  long unaff_x25;
  long unaff_x29;
  
  puVar13 = (undefined8 *)(in_x9 - (param_1 + 0xfU & 0x1fffffff0));
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(6,0);
  }
  if (*(uint *)(unaff_x19 + 3) < unaff_w21) {
    FUN_0358b9a4(0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar7);
  }
  plVar4 = (long *)thunk_FUN_01f116d0();
  if (plVar4 == (long *)0x0) {
    if ((int)unaff_w21 < (int)unaff_x19[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *unaff_x22;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03195184;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03195184:
                    /* try { // try from 03195188 to 0329519f has its CatchHandler @ 03195218 */
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 031951a0 to 03295207 has its CatchHandler @ 031950b8 */
      do {
        lVar7 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_031951f0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_031951f0:
        uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar11 & 1) == 0) goto LAB_031952c8;
                    /* try { // try from 03195208 to 03295217 has its CatchHandler @ 03195218 */
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 03195188 with catch @ 03195218
                       catch() { ... } // from try @ 03195208 with catch @ 03195218 */
          lVar7 = FUN_01ecaf44(lVar7);
                    /* try { // try from 0319521c to 0329521f has its CatchHandler @ 03195228 */
        }
                    /* try { // try from 03195220 to 0329522b has its CatchHandler @ 031950b8 */
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0319521c with catch @ 03195228
                        */
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              lVar7 = lVar9 + (long)*piVar12 * 0x10 + 0x138;
              goto LAB_03195268;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        lVar7 = FUN_01ecb238(plVar4,lVar7,0);
LAB_03195268:
        *(undefined8 **)(unaff_x29 + -0x20) = puVar13;
        lVar7 = *(long *)(lVar7 + 8);
        (**(code **)(lVar7 + 0x10))
                  (*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x20,puVar13);
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        puVar5 = puVar13;
        if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
          puVar5 = (undefined8 *)*puVar13;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0x158);
        uVar6 = *puVar8;
        *(uint *)(unaff_x29 + -0xc) = unaff_w21;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
        (*(code *)puVar8[2])(uVar6);
        unaff_w21 = unaff_w21 + 1;
      } while( true );
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40))();
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03195040;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
LAB_03195040:
    iVar3 = (*(code *)*puVar13)(plVar4,puVar13[1]);
    if (0 < iVar3) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78))();
      iVar1 = (int)unaff_x19[3] - unaff_w21;
      if (iVar1 != 0 && (int)unaff_w21 <= (int)unaff_x19[3]) {
        FUN_0358d498(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar1,0);
      }
      if (unaff_x19 == plVar4) {
                    /* try { // try from 03195104 to 0329516f has its CatchHandler @ 03195170 */
        FUN_0358d498(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
        FUN_0358d498(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                     (int)unaff_x19[3] - unaff_w21,0);
      }
      else {
        lVar9 = unaff_x19[2];
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* try { // try from 031950b8 to 03295103 has its CatchHandler @ 031950b8
                       catch() { ... } // from try @ 031950b8 with catch @ 031950b8
                       catch() { ... } // from try @ 03195170 with catch @ 031950b8
                       catch() { ... } // from try @ 031951a0 with catch @ 031950b8
                       catch() { ... } // from try @ 03195220 with catch @ 031950b8 */
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_03195154;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,5);
LAB_03195154:
        (*(code *)*puVar13)(plVar4,lVar9,unaff_w21,puVar13[1]);
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03195104 with catch @ 03195170
                       try { // try from 03195170 to 03295187 has its CatchHandler @ 031950b8 */
      *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
    }
  }
LAB_03195360:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
                    /* try { // try from 0319536c to 032953b3 has its CatchHandler @ 0319536c
                       catch() { ... } // from try @ 0319536c with catch @ 0319536c
                       catch() { ... } // from try @ 031954a8 with catch @ 0319536c
                       catch() { ... } // from try @ 031954d8 with catch @ 0319536c
                       catch() { ... } // from try @ 0319554c with catch @ 0319536c */
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_031952c8:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar13 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03195328;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_01ecb238(plVar4,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03195328:
    (*(code *)*puVar13)(plVar4,puVar13[1]);
  }
  goto LAB_03195360;
}


