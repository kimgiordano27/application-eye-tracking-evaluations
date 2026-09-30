/*
FUNCTION_NAME: FUN_037d5298
ENTRY_POINT: 037d5298
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x037d5544) */
/* WARNING: Removing unreachable block (ram,0x037d55f0) */

undefined4 FUN_037d5298(long param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  undefined4 local_64;
  
  if ((DAT_048376de & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_1223);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048376de = 1;
  }
  if (param_2 != 0) {
    iVar3 = FUN_03413840(param_2,0x2e,0);
    FUN_0341265c(param_2,iVar3 + 1,0);
    uVar4 = FUN_037d4d78();
    puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (param_1 != 0) {
      if ((int)*(ulong *)(param_1 + 0x18) < 1) {
        return param_4;
      }
      uVar10 = 0;
      uVar7 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      iVar3 = 2;
      local_64 = param_4;
LAB_037d5370:
      if (uVar7 <= uVar10) goto LAB_037d55ec;
      plVar5 = (long *)FUN_022fa0b4(uVar4,*(undefined8 *)(param_1 + uVar10 * 8 + 0x20),
                                    *(undefined8 *)StringLiteral_1223);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_037d53f0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
                              ,0);
LAB_037d53f0:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar11 = 0;
        do {
          lVar8 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_037d5454;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_037d5454:
          uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar7 & 1) == 0) goto LAB_037d54cc;
          lVar8 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick:
          lVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar11 = *(int *)(lVar8 + 0x10) + iVar11;
        } while( true );
      }
    }
  }
LAB_037d55e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_037d54cc:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_037d552c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_037d552c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (iVar3 < iVar11) {
    if (param_3 == 0) goto LAB_037d55e8;
    if (*(uint *)(param_3 + 0x18) <= uVar10) {
LAB_037d55ec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    local_64 = *(undefined4 *)(param_3 + uVar10 * 4 + 0x20);
    iVar3 = iVar11;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x18);
  uVar10 = uVar10 + 1;
  if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)uVar10) {
    return local_64;
  }
  goto LAB_037d5370;
}


