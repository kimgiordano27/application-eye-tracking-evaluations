/*
FUNCTION_NAME: Unity.VisualScripting.DebugDictionary<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly
ENTRY_POINT: 02978660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02978860) */

void Unity_VisualScripting_DebugDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<TKey,TValue>>_get_IsReadOnly
               (ulong param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    *(undefined1 *)(unaff_x21 + 0xcb7) = 1;
  }
  plVar4 = (long *)FUN_0249b5b8(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = (**(code **)(*plVar4 + 0x1b8))
                    ((int)param_3[0x7e],*(undefined4 *)((long)param_3 + 0x3f4),(int)param_3[0x7f],
                     *(undefined4 *)((long)param_3 + 0x3fc),param_2,plVar4,
                     *(undefined8 *)(*plVar4 + 0x1c0));
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_04224ea4(param_3,0);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0297881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x838))(param_2,param_3,*(undefined8 *)(*param_3 + 0x840));
      return;
    }
    lVar6 = param_3[0x7e];
    uVar13 = *(undefined4 *)((long)param_3 + 0x3f4);
    lVar1 = param_3[0x7f];
    uVar12 = *(undefined4 *)((long)param_3 + 0x3fc);
    (**(code **)(*param_3 + 0x838))(param_2,param_3,*(undefined8 *)(*param_3 + 0x840));
    lVar2 = param_3[0x7e];
    uVar10 = *(undefined4 *)((long)param_3 + 0x3f4);
    lVar3 = param_3[0x7f];
    uVar11 = *(undefined4 *)((long)param_3 + 0x3fc);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029e7ccc((int)lVar6,uVar13,(int)lVar1,uVar12,(int)lVar2,uVar10,(int)lVar3,
                                  uVar11,*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar4,param_3,0);
    (**(code **)(*param_3 + 0x198))(param_3,plVar4,*(undefined8 *)(*param_3 + 0x1a0));
    lVar6 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_0297882c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_0297882c:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
  }
  return;
}


