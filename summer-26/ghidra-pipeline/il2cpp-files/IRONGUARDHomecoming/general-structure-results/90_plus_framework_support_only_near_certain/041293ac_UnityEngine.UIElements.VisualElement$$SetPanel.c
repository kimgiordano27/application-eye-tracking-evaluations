/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$SetPanel
ENTRY_POINT: 041293ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04129a44) */
/* WARNING: Removing unreachable block (ram,0x04129a1c) */
/* WARNING: Removing unreachable block (ram,0x041295dc) */
/* WARNING: Removing unreachable block (ram,0x0412999c) */
/* WARNING: Removing unreachable block (ram,0x04129a34) */

void UnityEngine_UIElements_VisualElement__SetPanel(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long in_x10;
  int *piVar13;
  long *unaff_x20;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x27;
  undefined8 *unaff_x29;
  uint uStack000000000000000c;
  uint in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == **(long **)(in_x10 + 0xc0)) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_041293f8;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_041293f8:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = Method_Gameplay_GameManager_<Start>d__75_System_Collections_IEnumerator_Reset__;
  puVar4 = Method_System_DateTime_AddTicks__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  uStack000000000000000c = unaff_w22;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04129480;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_04129480:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_041295d0;
      lVar9 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_041295a8;
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_041294dc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_041294dc:
    uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (unaff_x20[9] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04129a08 to 04229a0f has its CatchHandler @ 0412a12c */
      FUN_01f08a3c();
    }
    uVar11 = FUN_02ed8f54(unaff_x20[9],uVar6,*(undefined8 *)puVar5);
    if ((uVar11 & 1) == 0) {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(unaff_x27 + 0x10);
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(unaff_x27 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_030ba904();
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_041295c4;
    }
  }
LAB_041295a8:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_041295c4:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_041295d0:
  FUN_0412a33c();
                    /* try { // try from 041295ec to 04229607 has its CatchHandler @ 041296ac */
  FUN_0412a410();
                    /* try { // try from 04129608 to 042296c3 has its CatchHandler @ 04129344 */
  if (unaff_x20[8] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03169f78(unaff_x20[8],unaff_w23 + 1,unaff_x20[10],*(undefined8 *)PTR_DAT_0458a430);
  lVar9 = FUN_04127458();
  puVar3 = PTR_DAT_0458a3f0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x20[8] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04129a58 to 04229a63 has its CatchHandler @ 0412a168 */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(lVar9 + 0x4b0);
  FUN_0316897c(&stack0x00000018,unaff_x20[8],unaff_w23,*(undefined8 *)PTR_DAT_0458a3f0);
  in_stack_00000038 = in_stack_00000020;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000028;
  uVar11 = FUN_041bf288(&stack0x00000030,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar11,uVar11 & 0xffffffff);
  }
  uVar11 = FUN_030bac7c(lVar9,uVar11 & 0xffffffff,*unaff_x29);
  if ((uVar11 & 1) == 0) {
    lVar9 = FUN_04127458();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04129a64 to 04229a6f has its CatchHandler @ 0412a16c */
      FUN_01f08a3c();
    }
    if (unaff_x20[8] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(lVar9 + 0x4b0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041295ec with catch @ 041296ac
                        */
    FUN_0316897c(&stack0x00000018,unaff_x20[8],unaff_w23,*(undefined8 *)puVar3);
                    /* try { // try from 041296c4 to 042296c7 has its CatchHandler @ 041296d8 */
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    uVar6 = FUN_041bf288(&stack0x00000030,0);
                    /* catch() { ... } // from try @ 041296c4 with catch @ 041296d8 */
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 04129714 to 0422973b has its CatchHandler @ 04129750 */
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = uVar6;
    }
    else {
      FUN_030ba904(lVar9,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar9 = unaff_x20[10];
                    /* try { // try from 0412973c to 04229747 has its CatchHandler @ 04129344 */
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar1 = *(int *)(lVar9 + 0x18);
                    /* try { // try from 04129748 to 0422974f has its CatchHandler @ 04129750 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04129714 with catch @ 04129750
                       catch(type#2 @ 00000000) { ... } // from try @ 04129748 with catch @ 04129750
                        */
  *(undefined4 *)(lVar9 + 0x18) = 0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0358d1e4(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
  }
  if ((uStack000000000000000c & 1) != 0) {
    (**(code **)(*unaff_x20 + 0x2b8))();
    plVar8 = (long *)(**(code **)(*unaff_x20 + 0x298))();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch() { ... } // from try @ 041297c8 with catch @ 041297b4
                       catch() { ... } // from try @ 041297f8 with catch @ 041297b4
                       catch() { ... } // from try @ 04129834 with catch @ 041297b4 */
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 041297c4 to 042297c7 has its CatchHandler @ 041297dc */
                    /* try { // try from 041297c8 to 042297f3 has its CatchHandler @ 041297b4 */
        if (*(long *)(piVar13 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                    /* try { // try from 041297f4 to 042297f7 has its CatchHandler @ 04129824 */
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_041297f8;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041297c4 with catch @ 041297dc
                        */
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041297f8:
                    /* try { // try from 041297f8 to 04229827 has its CatchHandler @ 041297b4 */
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar4 = Method_System_DateTime_AddTicks__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 041297f4 with catch @ 04129824 */
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 04129828 to 04229833 has its CatchHandler @ 04129848 */
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
                    /* try { // try from 04129834 to 0422983f has its CatchHandler @ 041297b4 */
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04129868;
          }
                    /* try { // try from 04129840 to 04229847 has its CatchHandler @ 04129848 */
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04129828 with catch @ 04129848
                       catch(type#2 @ 00000000) { ... } // from try @ 04129840 with catch @ 04129848
                        */
        } while (uVar11 != 0);
      }
                    /* try { // try from 0412984c to 042299e7 has its CatchHandler @ 0412984c
                       catch() { ... } // from try @ 0412984c with catch @ 0412984c
                       catch() { ... } // from try @ 04129c20 with catch @ 0412984c
                       catch() { ... } // from try @ 04129f10 with catch @ 0412984c
                       catch() { ... } // from try @ 04129f30 with catch @ 0412984c
                       catch() { ... } // from try @ 04129ff0 with catch @ 0412984c
                       catch() { ... } // from try @ 0412a1c8 with catch @ 0412984c
                       catch() { ... } // from try @ 0412a1f8 with catch @ 0412984c
                       catch() { ... } // from try @ 0412a234 with catch @ 0412984c */
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_04129868:
      uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar8 == (long *)0x0) break;
        lVar9 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_04129968;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04129950;
      }
      lVar9 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_041298c4;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_041298c4:
      uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      lVar9 = FUN_04127458();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar9 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_030bac7c(*(long *)(lVar9 + 0x4b0),uVar6,*unaff_x29);
      if ((uVar11 & 1) == 0) {
        (**(code **)(*unaff_x20 + 0x1e8))();
        FUN_041291cc();
      }
    } while( true );
  }
  goto LAB_041299a0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_04129950:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04129984;
    }
  }
LAB_04129968:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04129984:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_041299a0:
  if ((in_stack_00000010 & 1) != 0) {
    lVar9 = FUN_04127458();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04134290(lVar9,0);
  }
  uVar11 = FUN_035b51f0();
  if ((uVar11 & 1) != 0) {
    FUN_04036ec0();
  }
                    /* try { // try from 041299e8 to 042299f7 has its CatchHandler @ 0412a134 */
  return;
}


