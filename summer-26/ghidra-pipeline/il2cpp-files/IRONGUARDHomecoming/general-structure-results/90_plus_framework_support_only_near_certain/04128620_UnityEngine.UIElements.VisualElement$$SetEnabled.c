/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$SetEnabled
ENTRY_POINT: 04128620
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04128944) */
/* WARNING: Removing unreachable block (ram,0x041289e4) */

void UnityEngine_UIElements_VisualElement__SetEnabled(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x20;
  undefined8 uVar14;
  
                    /* try { // try from 04128620 to 0422863b has its CatchHandler @ 041285b8 */
  lVar7 = FUN_02442508();
  if ((lVar7 != 0) && (plVar8 = (long *)FUN_04224788(lVar7,0), plVar8 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0412861c with catch @ 04128638 */
                    /* try { // try from 0412863c to 0422863f has its CatchHandler @ 04128654 */
                    /* try { // try from 04128640 to 0422864b has its CatchHandler @ 041285b8 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_0458a3b8 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0458a3b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar6 = (**(code **)(*unaff_x20 + 0x1f8))();
    uVar9 = FUN_04127ed8();
    uVar10 = FUN_04127fac();
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar7 = FUN_04127458();
    if (lVar7 != 0) {
      uVar14 = *(undefined8 *)(lVar7 + 0x4b0);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Linq_Enumerable_Select<ValueConnection,_ValueInput>__
                                );
      FUN_02ed8950(lVar7,uVar14,*(undefined8 *)PTR_DAT_0458a3f8);
      if (lVar7 != 0) {
        if ((uVar9 & 1) == 0) {
          FUN_02ed9a64(lVar7,uVar6,
                       *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
        }
        else {
          FUN_02ed9128(lVar7,uVar6,*(undefined8 *)Method_System_Linq_Enumerable_Where<Member>__);
        }
        FUN_04128ab0();
        plVar8 = (long *)(**(code **)(*unaff_x20 + 0x298))();
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_04128798;
              }
              uVar10 = uVar10 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0)
          ;
LAB_04128798:
          plVar8 = (long *)(*(code *)*puVar11)(plVar8,puVar11[1]);
          puVar5 = Method_System_Linq_Enumerable_Where<Member>__;
          puVar4 = Method_System_Linq_Enumerable_Select<ValueInput,_object>__;
          puVar3 = Method_System_DateTime_AddTicks__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_041287cc:
          lVar12 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_04128818;
              }
              uVar10 = uVar10 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_04128818:
          uVar10 = (*(code *)*puVar11)(plVar8,puVar11[1]);
          if ((uVar10 & 1) != 0) {
            lVar12 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04128874;
                }
                uVar10 = uVar10 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_04128874:
            uVar6 = (*(code *)*puVar11)(plVar8,puVar11[1]);
            uVar10 = (**(code **)(*unaff_x20 + 0x2d8))();
            if ((uVar10 & 1) != 0) {
              if ((uVar9 & 1) == 0) {
                FUN_02ed9a64(lVar7,uVar6,*(undefined8 *)puVar4);
              }
              else {
                FUN_02ed9128(lVar7,uVar6,*(undefined8 *)puVar5);
              }
            }
            goto LAB_041287cc;
          }
          if (plVar8 != (long *)0x0) {
            lVar12 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0412892c;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar8,*(long *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_0412892c:
            (*(code *)*puVar11)(plVar8,puVar11[1]);
          }
          lVar12 = FUN_04127458();
          uVar14 = FUN_0230a99c(lVar7,*(undefined8 *)PTR_DAT_04579ba0);
          if (lVar12 != 0) {
            *(undefined8 *)(lVar12 + 0x4b0) = uVar14;
            thunk_FUN_01f51358(lVar12 + 0x4b0);
            FUN_0412799c();
            lVar7 = FUN_04127458();
            if (lVar7 != 0) {
              FUN_04134290(lVar7,0);
              FUN_041d58d8();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


