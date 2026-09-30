/*
FUNCTION_NAME: FUN_04128484
ENTRY_POINT: 04128484
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04128944) */
/* WARNING: Removing unreachable block (ram,0x041289e4) */

void FUN_04128484(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  
                    /* try { // try from 04128490 to 042284ab has its CatchHandler @ 041284c4 */
                    /* try { // try from 041284ac to 042284db has its CatchHandler @ 04128478 */
  if ((DAT_04840778 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458a388);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128490 with catch @ 041284c4
                        */
    thunk_FUN_01efb3a4(PTR_DAT_04579ba0);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
                    /* try { // try from 041284dc to 042284df has its CatchHandler @ 041284f8 */
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Where<Member>__);
                    /* try { // try from 041284e0 to 042284fb has its CatchHandler @ 04128478 */
    thunk_FUN_01efb3a4(PTR_DAT_0458a3f8);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ValueConnection,_ValueInput>__);
                    /* catch() { ... } // from try @ 041284dc with catch @ 041284f8 */
                    /* try { // try from 041284fc to 042284ff has its CatchHandler @ 04128514 */
                    /* try { // try from 04128500 to 0422850b has its CatchHandler @ 04128478 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 0412850c to 04228513 has its CatchHandler @ 04128514 */
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041284fc with catch @ 04128514
                       catch(type#2 @ 00000000) { ... } // from try @ 0412850c with catch @ 04128514
                        */
                    /* catch() { ... } // from try @ 0412854c with catch @ 04128518
                       catch() { ... } // from try @ 04128580 with catch @ 04128518
                       catch() { ... } // from try @ 041285a0 with catch @ 04128518 */
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 04128530 to 0422854b has its CatchHandler @ 04128564 */
    thunk_FUN_01efb3a4(PTR_DAT_0458a400);
    thunk_FUN_01efb3a4(PTR_DAT_0458a3b8);
    thunk_FUN_01efb3a4(PTR_DAT_0458a408);
                    /* try { // try from 0412854c to 0422857b has its CatchHandler @ 04128518 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_CoreUnsafeUtils_CombineHashes<Hash128,_CoreUnsafeUtils_DefaultKeyGetter<Hash128>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128530 with catch @ 04128564
                        */
    DAT_04840778 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_041289d8;
  if ((*(byte *)(param_2 + 0x20) >> 2 & 1) == 0) {
    return;
  }
                    /* try { // try from 0412857c to 0422857f has its CatchHandler @ 04128598 */
                    /* try { // try from 04128580 to 0422859b has its CatchHandler @ 04128518 */
  plVar8 = (long *)(**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  puVar2 = PTR_DAT_0458a388;
  if (plVar8 == (long *)0x0) {
LAB_041285ac:
                    /* try { // try from 041285ac to 042285b3 has its CatchHandler @ 041285b4 */
    plVar8 = (long *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 0412857c with catch @ 04128598 */
                    /* try { // try from 0412859c to 0422859f has its CatchHandler @ 041285b4 */
                    /* try { // try from 041285a0 to 042285ab has its CatchHandler @ 04128518 */
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_041285ac;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412859c with catch @ 041285b4
                       catch(type#2 @ 00000000) { ... } // from try @ 041285ac with catch @ 041285b4
                        */
                    /* catch() { ... } // from try @ 041285ec with catch @ 041285b8
                       catch() { ... } // from try @ 04128620 with catch @ 041285b8
                       catch() { ... } // from try @ 04128640 with catch @ 041285b8 */
    if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__) {
      plVar8 = (long *)0x0;
    }
  }
                    /* try { // try from 041285d0 to 042285eb has its CatchHandler @ 04128604 */
  lVar9 = *(long *)PTR_DAT_0458a388;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar2;
  }
                    /* try { // try from 041285ec to 0422861b has its CatchHandler @ 041285b8 */
  uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (*(int *)(*(long *)
                Method_UnityEngine_Rendering_CoreUnsafeUtils_CombineHashes<Hash128,_CoreUnsafeUtils_DefaultKeyGetter<Hash128>>__
              + 0xe0) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041285d0 with catch @ 04128604
                        */
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_Rendering_CoreUnsafeUtils_CombineHashes<Hash128,_CoreUnsafeUtils_DefaultKeyGetter<Hash128>>__
                      );
  }
                    /* try { // try from 0412861c to 0422861f has its CatchHandler @ 04128638 */
  lVar9 = FUN_02442508(plVar8,uVar15,0,*(undefined8 *)PTR_DAT_0458a408);
  if ((lVar9 != 0) && (plVar8 = (long *)FUN_04224788(lVar9,0), plVar8 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0458a3b8 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0458a3b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    uVar7 = (undefined4)plVar8[4];
    uVar6 = (**(code **)(*param_1 + 0x1f8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x200));
    uVar10 = FUN_04127ed8(param_1,uVar7);
    uVar11 = FUN_04127fac(param_1,uVar7);
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar9 = FUN_04127458(param_1);
    if (lVar9 != 0) {
      uVar15 = *(undefined8 *)(lVar9 + 0x4b0);
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Linq_Enumerable_Select<ValueConnection,_ValueInput>__
                                );
      FUN_02ed8950(lVar9,uVar15,*(undefined8 *)PTR_DAT_0458a3f8);
      if (lVar9 != 0) {
        if ((uVar10 & 1) == 0) {
          FUN_02ed9a64(lVar9,uVar6,
                       *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
        }
        else {
          FUN_02ed9128(lVar9,uVar6,*(undefined8 *)Method_System_Linq_Enumerable_Where<Member>__);
        }
        uVar15 = FUN_04128ab0(param_1,uVar7);
        plVar8 = (long *)(**(code **)(*param_1 + 0x298))
                                   (param_1,uVar15,*(undefined8 *)(*param_1 + 0x2a0));
        if (plVar8 != (long *)0x0) {
          lVar13 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04128798;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0)
          ;
LAB_04128798:
          plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
          puVar5 = Method_System_Linq_Enumerable_Where<Member>__;
          puVar4 = Method_System_Linq_Enumerable_Select<ValueInput,_object>__;
          puVar3 = Method_System_DateTime_AddTicks__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_041287cc:
          lVar13 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04128818;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_04128818:
          uVar11 = (*(code *)*puVar12)(plVar8,puVar12[1]);
          if ((uVar11 & 1) != 0) {
            lVar13 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar11 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_04128874;
                }
                uVar11 = uVar11 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar11 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_04128874:
            uVar7 = (*(code *)*puVar12)(plVar8,puVar12[1]);
            uVar11 = (**(code **)(*param_1 + 0x2d8))
                               (param_1,uVar7,*(undefined8 *)(*param_1 + 0x2e0));
            if ((uVar11 & 1) != 0) {
              if ((uVar10 & 1) == 0) {
                FUN_02ed9a64(lVar9,uVar7,*(undefined8 *)puVar4);
              }
              else {
                FUN_02ed9128(lVar9,uVar7,*(undefined8 *)puVar5);
              }
            }
            goto LAB_041287cc;
          }
          if (plVar8 != (long *)0x0) {
            lVar13 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0412892c;
                }
                uVar10 = uVar10 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01ecb238(plVar8,*(long *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_0412892c:
            (*(code *)*puVar12)(plVar8,puVar12[1]);
          }
          lVar13 = FUN_04127458(param_1);
          uVar15 = FUN_0230a99c(lVar9,*(undefined8 *)PTR_DAT_04579ba0);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x4b0) = uVar15;
            thunk_FUN_01f51358(lVar13 + 0x4b0);
            FUN_0412799c(param_1);
            lVar9 = FUN_04127458(param_1);
            if (lVar9 != 0) {
              FUN_04134290(lVar9,0);
              FUN_041d58d8(param_2,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_041289d8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


