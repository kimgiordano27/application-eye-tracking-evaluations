/*
FUNCTION_NAME: FUN_03eee138
ENTRY_POINT: 03eee138
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03eee40c) */

void FUN_03eee138(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0483aec5 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_4320);
    thunk_FUN_01efb3a4(PTR_DAT_0457d1c0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3964);
    thunk_FUN_01efb3a4(StringLiteral_3965);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457d1c8);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__);
    DAT_0483aec5 = 1;
  }
  puVar2 = PTR_DAT_0457d1c8;
  puVar1 = Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__;
  if (param_1 != (long *)0x0) {
    uVar5 = (**(code **)(*param_1 + 0x728))(param_1,param_2,*(undefined8 *)(*param_1 + 0x730));
    lVar6 = FUN_02386cec(uVar5,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    plVar7 = (long *)FUN_03eec620(param_1,1);
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_3964) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03eee278;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_3964,0);
LAB_03eee278:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar4 = PTR_DAT_0457d1c0;
      puVar3 = StringLiteral_3965;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03eee2f8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03eee2f8:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03eee3d8;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03eee3b0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03eee398;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03eee354;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03eee354:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar5,uVar5);
        }
        FUN_02ee8df4(lVar6,uVar5,*(undefined8 *)puVar4);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03eee398:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03eee3cc;
    }
  }
LAB_03eee3b0:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03eee3cc:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03eee3d8:
  FUN_02308ab0(lVar6,*(undefined8 *)StringLiteral_4320);
  return;
}


