/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<KeyValuePair<long,-ComputedStyle>>
ENTRY_POINT: 023822a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x023824d0) */

long * System_Array__InternalArray__ICollection_Add<KeyValuePair<long,_ComputedStyle>>
                 (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long unaff_x22;
  
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_01ecafa0();
    }
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = **(long **)(unaff_x21 + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02382340;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_02382340:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023823a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_023823a8:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return param_2;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_02382484;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0238241c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar5,0);
LAB_0238241c:
    uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar4,uVar4);
    }
    (**(code **)(unaff_x22 + 0x18))
              (*(undefined8 *)(unaff_x22 + 0x40),uVar4,*(undefined8 *)(unaff_x22 + 0x28));
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto 
      System_Array__InternalArray__ICollection_Add<KeyValuePair<object,_fsOption<fsVersionedType>>>;
    }
  }
LAB_02382484:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
System_Array__InternalArray__ICollection_Add<KeyValuePair<object,_fsOption<fsVersionedType>>>:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return param_2;
}


