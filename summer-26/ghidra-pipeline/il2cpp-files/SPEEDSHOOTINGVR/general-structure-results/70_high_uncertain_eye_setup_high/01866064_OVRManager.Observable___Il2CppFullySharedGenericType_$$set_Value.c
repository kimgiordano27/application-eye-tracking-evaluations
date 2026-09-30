/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 01866064
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  byte in_w8;
  undefined8 *puVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar7;
  int unaff_w22;
  int iVar8;
  long unaff_x25;
  long *plVar9;
  int unaff_w27;
  long lVar10;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  uint in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_0103c244();
    }
    if (unaff_x29 == 0) break;
    uVar3 = FUN_021af390(unaff_x29,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x28),0);
    while( true ) {
      if (unaff_w22 * in_stack_00000038._4_4_ <
          unaff_w22 * in_stack_00000038._4_4_ + in_stack_00000038._4_4_) {
        iVar8 = 0;
        bVar2 = true;
        puVar7 = (undefined8 *)(in_stack_00000010 + (long)in_stack_00000040 * 0x20);
        do {
                    /* try { // try from 018660c8 to 019660db has its CatchHandler @ 018660e8 */
          if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          lVar4 = thunk_FUN_010400dc();
                    /* try { // try from 018660dc to 019660ff has its CatchHandler @ 01866088 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 018660c8 with catch @ 018660e8
                        */
          FUN_01303218(lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x58));
          if (lVar4 == 0) goto LAB_01866560;
          *(undefined8 *)(lVar4 + 0x38) = unaff_x20;
          thunk_FUN_0106e12c((undefined8 *)(lVar4 + 0x38),unaff_x20);
                    /* try { // try from 01866100 to 01966117 has its CatchHandler @ 01866150 */
          if (unaff_x25 == 0) goto LAB_01866560;
          if (*(uint *)(unaff_x25 + 0x18) <= (uint)(in_stack_00000040 + iVar8)) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          uVar12 = *puVar7;
                    /* try { // try from 01866118 to 0196613f has its CatchHandler @ 01866088 */
          uVar11 = puVar7[3];
          uVar3 = puVar7[2];
          *(undefined8 *)(lVar4 + 0x18) = puVar7[1];
          *(undefined8 *)(lVar4 + 0x10) = uVar12;
          *(undefined8 *)(lVar4 + 0x28) = uVar11;
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          thunk_FUN_0106e12c((undefined8 *)(lVar4 + 0x10),0);
                    /* try { // try from 01866140 to 0196614f has its CatchHandler @ 01866150 */
          lVar5 = FUN_010f8634(*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x68));
          if (lVar5 == 0) goto LAB_01866560;
                    /* catch() { ... } // from try @ 01866100 with catch @ 01866150
                       catch() { ... } // from try @ 01866140 with catch @ 01866150 */
                    /* try { // try from 01866154 to 01966157 has its CatchHandler @ 01866160 */
                    /* try { // try from 01866158 to 01966163 has its CatchHandler @ 01866088 */
          FUN_021ac820(lVar5,*(undefined8 *)(lVar4 + 0x18),0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01866154 with catch @ 01866160
                        */
          plVar9 = (long *)(lVar4 + 0x30);
          *plVar9 = lVar5;
          thunk_FUN_0106e12c(plVar9,lVar5);
          if (*plVar9 == 0) goto LAB_01866560;
          FUN_0216b764(*plVar9,1,0);
          lVar10 = *plVar9;
          lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (lVar10 == 0) goto LAB_01866560;
          FUN_021af390(lVar10,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),0);
          if (bVar2) {
            lVar10 = *plVar9;
            lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0103c244();
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            lVar5 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0103c244();
            }
            if (lVar10 == 0) goto LAB_01866560;
            FUN_021af390(lVar10,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x38),0);
          }
          if (*plVar9 == 0) goto LAB_01866560;
          FUN_0198efa4(*plVar9,*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x80));
          lVar5 = *plVar9;
          if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar3 = thunk_FUN_010400dc();
          UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                    (uVar3,lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x88),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x98));
          if (lVar5 == 0) goto LAB_01866560;
          FUN_0198ebc8(lVar5,uVar3,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa0));
          lVar5 = *plVar9;
          if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar3 = thunk_FUN_010400dc();
          FUN_016065a0(uVar3,lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8),
                       *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
          FUN_011ac314(lVar5,uVar3,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0));
          lVar5 = *in_stack_00000030;
          if (lVar5 == 0) goto LAB_01866560;
          uVar3 = *(undefined8 *)(lVar4 + 0x30);
          lVar4 = *(long *)(lVar5 + 0x10);
          lVar10 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_01866560;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
            *puVar6 = uVar3;
            thunk_FUN_0106e12c(puVar6);
          }
          else {
            FUN_017d3030(lVar5,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          if (unaff_w27 == 0) {
            lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0103c244();
            }
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            lVar4 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
            if (lVar4 == 0) goto LAB_01866560;
            in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
            uVar3 = FUN_021b39ec(&stack0x00000048,*plVar9,0);
          }
          else {
            if (unaff_x29 == 0) goto LAB_01866560;
            uVar3 = FUN_021b3938(unaff_x29,*plVar9,0);
          }
          iVar8 = iVar8 + 1;
          bVar2 = false;
          puVar7 = puVar7 + 4;
          unaff_x25 = in_stack_00000028;
        } while (in_stack_00000038._4_4_ != iVar8);
      }
      iVar8 = in_stack_00000008._4_4_;
      if ((in_stack_00000020 & 1) == 0) {
        do {
          if (unaff_w27 == 0) {
            lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0103c244();
            }
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            lVar4 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
            if (lVar4 == 0) goto LAB_01866560;
            in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
            uVar3 = FUN_01865c8c(lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
            uVar3 = FUN_021b39ec(&stack0x00000048,uVar3,0);
          }
          else {
            uVar3 = FUN_01865c8c(uVar3,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
            if (unaff_x29 == 0) goto LAB_01866560;
            uVar3 = FUN_021b3938(unaff_x29,uVar3,0);
          }
          bVar2 = iVar8 != -1;
          iVar8 = iVar8 + 1;
        } while (bVar2);
      }
      if (unaff_w27 != 0) {
        lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar4 = FUN_01ac1638(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
        if (lVar4 == 0) goto LAB_01866560;
        in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
        uVar3 = FUN_021b39ec(&stack0x00000048,unaff_x29,0);
      }
      unaff_w22 = unaff_w22 + 1;
      in_stack_00000040 = in_stack_00000040 + in_stack_00000038._4_4_;
      if (unaff_w22 == in_stack_00000018._4_4_) {
        FUN_01866568(unaff_x20,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
        return;
      }
      if (unaff_w27 != 0) break;
                    /* try { // try from 01866088 to 019660c7 has its CatchHandler @ 01866088
                       catch() { ... } // from try @ 01866088 with catch @ 01866088
                       catch() { ... } // from try @ 018660dc with catch @ 01866088
                       catch() { ... } // from try @ 01866118 with catch @ 01866088
                       catch() { ... } // from try @ 01866158 with catch @ 01866088 */
      unaff_x29 = 0;
    }
    unaff_x29 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bed8);
    FUN_021acc50(unaff_x29,0);
    lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    param_1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
    in_w8 = *(byte *)(param_1 + 0x135);
  }
LAB_01866560:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


