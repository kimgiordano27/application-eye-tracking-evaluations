/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$ExecuteDefaultAction
ENTRY_POINT: 04128644
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04128944) */
/* WARNING: Removing unreachable block (ram,0x041289e4) */

void UnityEngine_UIElements_VisualElement__ExecuteDefaultAction
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x20;
  undefined8 uVar13;
  
                    /* try { // try from 0412864c to 04228653 has its CatchHandler @ 04128654 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412863c with catch @ 04128654
                       catch(type#2 @ 00000000) { ... } // from try @ 0412864c with catch @ 04128654
                        */
                    /* catch() { ... } // from try @ 0412868c with catch @ 04128658
                       catch() { ... } // from try @ 041286c0 with catch @ 04128658
                       catch() { ... } // from try @ 041286e0 with catch @ 04128658 */
  if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
                    /* try { // try from 04128670 to 0422868b has its CatchHandler @ 041286a4 */
  uVar5 = (**(code **)(*unaff_x20 + 0x1f8))();
                    /* try { // try from 0412868c to 042286bb has its CatchHandler @ 04128658 */
  uVar6 = FUN_04127ed8();
  uVar7 = FUN_04127fac();
  if ((uVar7 & 1) == 0) {
                    /* try { // try from 041289bc to 042289c3 has its CatchHandler @ 041289c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041289ac with catch @ 041289c4
                       catch(type#2 @ 00000000) { ... } // from try @ 041289bc with catch @ 041289c4
                        */
                    /* catch() { ... } // from try @ 041289d4 with catch @ 041289c8
                       catch() { ... } // from try @ 04128a08 with catch @ 041289c8
                       catch() { ... } // from try @ 04128a28 with catch @ 041289c8 */
                    /* try { // try from 041289d0 to 042289d3 has its CatchHandler @ 041289ec */
                    /* try { // try from 041289d4 to 04228a03 has its CatchHandler @ 041289c8 */
    return;
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128670 with catch @ 041286a4
                        */
  lVar8 = FUN_04127458();
  if (lVar8 != 0) {
    uVar13 = *(undefined8 *)(lVar8 + 0x4b0);
                    /* try { // try from 041286bc to 042286bf has its CatchHandler @ 041286d8 */
                    /* try { // try from 041286c0 to 042286db has its CatchHandler @ 04128658 */
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Linq_Enumerable_Select<ValueConnection,_ValueInput>__)
    ;
                    /* catch() { ... } // from try @ 041286bc with catch @ 041286d8 */
    FUN_02ed8950(lVar8,uVar13,*(undefined8 *)PTR_DAT_0458a3f8);
                    /* try { // try from 041286dc to 042286df has its CatchHandler @ 041286f4 */
    if (lVar8 != 0) {
                    /* try { // try from 041286e0 to 042286eb has its CatchHandler @ 04128658 */
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 04128710 to 0422872b has its CatchHandler @ 04128744 */
        FUN_02ed9a64(lVar8,uVar5,
                     *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
      }
      else {
                    /* try { // try from 041286ec to 042286f3 has its CatchHandler @ 041286f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041286dc with catch @ 041286f4
                       catch(type#2 @ 00000000) { ... } // from try @ 041286ec with catch @ 041286f4
                        */
                    /* catch() { ... } // from try @ 0412872c with catch @ 041286f8
                       catch() { ... } // from try @ 04128760 with catch @ 041286f8
                       catch() { ... } // from try @ 04128780 with catch @ 041286f8 */
        FUN_02ed9128(lVar8,uVar5,*(undefined8 *)Method_System_Linq_Enumerable_Where<Member>__);
      }
      FUN_04128ab0();
                    /* try { // try from 0412872c to 0422875b has its CatchHandler @ 041286f8 */
      plVar9 = (long *)(**(code **)(*unaff_x20 + 0x298))();
      if (plVar9 != (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128710 with catch @ 04128744
                        */
        lVar11 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
                    /* try { // try from 0412875c to 0422875f has its CatchHandler @ 04128778 */
                    /* try { // try from 04128760 to 0422877b has its CatchHandler @ 041286f8 */
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                    /* try { // try from 0412878c to 04228793 has its CatchHandler @ 04128794 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412877c with catch @ 04128794
                       catch(type#2 @ 00000000) { ... } // from try @ 0412878c with catch @ 04128794
                        */
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04128798;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
                    /* catch() { ... } // from try @ 0412875c with catch @ 04128778 */
          } while (uVar7 != 0);
        }
                    /* try { // try from 0412877c to 0422877f has its CatchHandler @ 04128794 */
                    /* try { // try from 04128780 to 0422878b has its CatchHandler @ 041286f8 */
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_04128798:
                    /* catch() { ... } // from try @ 041287cc with catch @ 04128798
                       catch() { ... } // from try @ 04128800 with catch @ 04128798
                       catch() { ... } // from try @ 04128820 with catch @ 04128798 */
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar4 = Method_System_Linq_Enumerable_Where<Member>__;
        puVar3 = Method_System_Linq_Enumerable_Select<ValueInput,_object>__;
        puVar2 = Method_System_DateTime_AddTicks__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_041287cc:
                    /* try { // try from 041287cc to 042287fb has its CatchHandler @ 04128798 */
        lVar11 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041287b0 with catch @ 041287e4
                        */
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04128818;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 041287fc to 042287ff has its CatchHandler @ 04128818 */
                    /* try { // try from 04128800 to 0422881b has its CatchHandler @ 04128798 */
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_04128818:
                    /* catch() { ... } // from try @ 041287fc with catch @ 04128818 */
                    /* try { // try from 0412881c to 0422881f has its CatchHandler @ 04128834 */
                    /* try { // try from 04128820 to 0422882b has its CatchHandler @ 04128798 */
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar7 & 1) != 0) {
          lVar11 = *plVar9;
                    /* try { // try from 0412882c to 04228833 has its CatchHandler @ 04128834 */
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412881c with catch @ 04128834
                       catch(type#2 @ 00000000) { ... } // from try @ 0412882c with catch @ 04128834
                        */
          if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 0412886c with catch @ 04128838
                       catch() { ... } // from try @ 041288a0 with catch @ 04128838
                       catch() { ... } // from try @ 041288c0 with catch @ 04128838 */
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    /* try { // try from 0412886c to 0422889b has its CatchHandler @ 04128838 */
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04128874;
              }
              uVar7 = uVar7 - 1;
                    /* try { // try from 04128850 to 0422886b has its CatchHandler @ 04128884 */
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_04128874:
          uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128850 with catch @ 04128884
                        */
          uVar7 = (**(code **)(*unaff_x20 + 0x2d8))();
                    /* try { // try from 0412889c to 0422889f has its CatchHandler @ 041288b8 */
          if ((uVar7 & 1) != 0) {
                    /* try { // try from 041288a0 to 042288bb has its CatchHandler @ 04128838 */
            if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 0412889c with catch @ 041288b8 */
                    /* try { // try from 041288bc to 042288bf has its CatchHandler @ 041288d4 */
                    /* try { // try from 041288c0 to 042288cb has its CatchHandler @ 04128838 */
              FUN_02ed9a64(lVar8,uVar5,*(undefined8 *)puVar3);
            }
            else {
              FUN_02ed9128(lVar8,uVar5,*(undefined8 *)puVar4);
            }
          }
          goto LAB_041287cc;
        }
                    /* try { // try from 041288cc to 042288d3 has its CatchHandler @ 041288d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041288bc with catch @ 041288d4
                       catch(type#2 @ 00000000) { ... } // from try @ 041288cc with catch @ 041288d4
                        */
        if (plVar9 != (long *)0x0) {
                    /* catch() { ... } // from try @ 041288e4 with catch @ 041288d8
                       catch() { ... } // from try @ 04128918 with catch @ 041288d8
                       catch() { ... } // from try @ 04128938 with catch @ 041288d8 */
          lVar11 = *plVar9;
                    /* try { // try from 041288e0 to 042288e3 has its CatchHandler @ 041288fc */
                    /* try { // try from 041288e4 to 04228913 has its CatchHandler @ 041288d8 */
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041288e0 with catch @ 041288fc
                        */
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0412892c;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
                    /* try { // try from 04128914 to 04228917 has its CatchHandler @ 04128930 */
                    /* try { // try from 04128918 to 04228933 has its CatchHandler @ 041288d8 */
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar9,*(long *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_0412892c:
                    /* catch() { ... } // from try @ 04128914 with catch @ 04128930 */
                    /* try { // try from 04128934 to 04228937 has its CatchHandler @ 0412894c */
          (*(code *)*puVar10)(plVar9,puVar10[1]);
        }
                    /* try { // try from 04128938 to 04228943 has its CatchHandler @ 041288d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04128934 with catch @ 0412894c
                       catch(type#2 @ 00000000) { ... } // from try @ 04128944 with catch @ 0412894c
                        */
        lVar11 = FUN_04127458();
                    /* catch() { ... } // from try @ 0412895c with catch @ 04128950
                       catch() { ... } // from try @ 04128990 with catch @ 04128950
                       catch() { ... } // from try @ 041289b0 with catch @ 04128950 */
                    /* try { // try from 04128958 to 0422895b has its CatchHandler @ 04128974 */
                    /* try { // try from 0412895c to 0422898b has its CatchHandler @ 04128950 */
        uVar13 = FUN_0230a99c(lVar8,*(undefined8 *)PTR_DAT_04579ba0);
        if (lVar11 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128958 with catch @ 04128974
                        */
          *(undefined8 *)(lVar11 + 0x4b0) = uVar13;
          thunk_FUN_01f51358(lVar11 + 0x4b0);
          FUN_0412799c();
          lVar8 = FUN_04127458();
                    /* try { // try from 0412898c to 0422898f has its CatchHandler @ 041289a8 */
          if (lVar8 != 0) {
                    /* try { // try from 04128990 to 042289ab has its CatchHandler @ 04128950 */
            FUN_04134290(lVar8,0);
                    /* catch() { ... } // from try @ 0412898c with catch @ 041289a8 */
                    /* try { // try from 041289ac to 042289af has its CatchHandler @ 041289c4 */
                    /* try { // try from 041289b0 to 042289bb has its CatchHandler @ 04128950 */
            FUN_041d58d8();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


