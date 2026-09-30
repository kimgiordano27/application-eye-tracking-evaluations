/*
FUNCTION_NAME: FUN_03abd92c
ENTRY_POINT: 03abd92c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03abdc74) */

long FUN_03abd92c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar1 = StringLiteral_9050;
  if ((DAT_04839095 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_9051);
    thunk_FUN_01efb3a4(StringLiteral_9050);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Configuration_IgnoreSection_ResetModified__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    thunk_FUN_01efb3a4(StringLiteral_9052);
    DAT_04839095 = 1;
  }
  lVar4 = FUN_022cd6f8(param_1,*(undefined8 *)puVar1);
  if (lVar4 == 0) {
    plVar5 = (long *)FUN_034b9220(param_1,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 03abda18 to 03bbde47 has its CatchHandler @ 03abda18
                       catch() { ... } // from try @ 03abda18 with catch @ 03abda18
                       catch() { ... } // from try @ 03abde6c with catch @ 03abda18
                       catch() { ... } // from try @ 03abdef0 with catch @ 03abda18
                       catch() { ... } // from try @ 03abdf14 with catch @ 03abda18
                       catch() { ... } // from try @ 03abdf54 with catch @ 03abda18 */
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03abda4c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                          ,0);
LAB_03abda4c:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = StringLiteral_9052;
    puVar2 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar4 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03abdac4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03abdac4:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        lVar4 = 0;
        goto joined_r0x03abdbe8;
      }
      lVar4 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03abdb20;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03abdb20:
      lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)thunk_FUN_01ecaf38(lVar4,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
      uVar10 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar3,0);
    } while ((uVar10 & 1) == 0);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    FUN_030f2380(lVar9,*(undefined8 *)
                        Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_9051);
    FUN_03592acc(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    FUN_03abad9c(lVar4,1);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = FUN_030f4630(lVar9,*(undefined8 *)
                                Method_System_Configuration_IgnoreSection_ResetModified__);
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    thunk_FUN_01f51358();
joined_r0x03abdbe8:
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03abdc40;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03abdc40:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  return lVar4;
}


