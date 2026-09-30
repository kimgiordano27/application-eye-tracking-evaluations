/*
FUNCTION_NAME: FUN_0238b3fc
ENTRY_POINT: 0238b3fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0238b7f4) */

long * FUN_0238b3fc(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  puVar5 = Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__;
  puVar4 = Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  plVar18 = (long *)0x0;
  while( true ) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03583338(param_2,0,0);
    if ((uVar7 & 1) == 0) {
      return (long *)0x0;
    }
    if (param_1 == (long *)0x0) break;
    lVar12 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    lVar13 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0238b524;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_1,lVar12,0);
LAB_0238b524:
    plVar9 = (long *)(*(code *)*puVar8)(param_1,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0238b584;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0238b584:
      uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar7 & 1) == 0) {
        iVar17 = 9;
        iVar16 = 9;
        goto joined_r0x0238b6e4;
      }
      lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      lVar13 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0238b5f8;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_0238b5f8:
      plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      if (plVar10 == (long *)0x0) {
LAB_0238b624:
        plVar15 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_0238b624;
        plVar15 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5) {
          plVar15 = (long *)0x0;
        }
      }
      uVar7 = System_Console__SetOut(plVar15,0,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_03eed12c(plVar15,param_2,0);
        uVar6 = uVar6 & 1;
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03eece10(plVar10,uVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03582560(uVar11,param_2,0);
    } while ((uVar7 & 1) == 0);
    iVar17 = 8;
    iVar16 = 8;
    plVar18 = plVar10;
joined_r0x0238b6e4:
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0238b73c;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0238b73c:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
      iVar16 = iVar17;
    }
    if ((iVar16 != 9) && (iVar16 != 0)) {
      return plVar18;
    }
    if (param_2 == (long *)0x0) break;
    param_2 = (long *)(**(code **)(*param_2 + 0x888))(param_2,*(undefined8 *)(*param_2 + 0x890));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


