/*
FUNCTION_NAME: FUN_041adc10
ENTRY_POINT: 041adc10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041adfbc) */

long FUN_041adc10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
  puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
  if ((DAT_04840d4a & 1) == 0) {
                    /* try { // try from 041adc50 to 042adc5b has its CatchHandler @ 041add88 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
                    /* try { // try from 041adc88 to 042adca3 has its CatchHandler @ 041add84 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_04840d4a = 1;
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_04228304(lVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar6 != 0) {
                    /* try { // try from 041adcd0 to 042adcef has its CatchHandler @ 041add80 */
    FUN_04227fd8(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),0);
    FUN_0422aa74(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20),0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x420), lVar12 != 0)) {
      FUN_041ab944(lVar12);
      plVar13 = *(long **)(lVar12 + 0x20);
      if (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_041add64;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar13,*(long *)
                                       Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                              ,0);
LAB_041add64:
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
        puVar5 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar12 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_041adde0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_041adde0:
          uVar10 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar13 == (long *)0x0) {
              return lVar6;
            }
            lVar12 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 == 0) goto LAB_041adf5c;
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_041adf44;
          }
          lVar12 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_041ade3c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
LAB_041ade3c:
          lVar12 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
          FUN_04228304(lVar8,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422aa74(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(lVar12 + 0x88);
          if (lVar12 == 0) {
LAB_041adebc:
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar12 = FUN_041adb7c();
          }
          else {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = (**(code **)(lVar12 + 0x18))
                               (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
            if (lVar12 == 0) goto LAB_041adebc;
          }
          lVar9 = *(long *)puVar4;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar9 = *(long *)puVar4;
          }
          FUN_0422c0ac(lVar8,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 4),lVar12,0);
          FUN_0422f074(lVar8,lVar12,0);
          FUN_0422f074(lVar6,lVar8,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_041adf44:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_041adf78;
    }
  }
LAB_041adf5c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_041adf78:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


