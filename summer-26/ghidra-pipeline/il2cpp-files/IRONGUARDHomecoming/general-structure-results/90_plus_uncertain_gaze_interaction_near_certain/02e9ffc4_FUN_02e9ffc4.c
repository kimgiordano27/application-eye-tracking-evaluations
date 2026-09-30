/*
FUNCTION_NAME: FUN_02e9ffc4
ENTRY_POINT: 02e9ffc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 204
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea0280) */

long FUN_02e9ffc4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_048318ad & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__);
    DAT_048318ad = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
    lVar10 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar10 = thunk_FUN_01f117cc(lVar10);
    FUN_02ee7c10(lVar10,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar5 != 0) {
      plVar6 = (long *)FUN_033b0fc8(lVar5,0);
      puVar4 = Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar6;
        lVar5 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02ea00e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,0);
LAB_02ea00e8:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar2);
          if (plVar6 == (long *)0x0) {
            return lVar10;
          }
          lVar11 = *plVar6;
          lVar5 = *(long *)puVar2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_02ea0224;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto 
          System_Array_InternalEnumerator<InputUser_OngoingAccountSelection>__System_Collections_IEnumerator_Reset
          ;
        }
        lVar11 = *plVar6;
        lVar5 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_02ea0148;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,1);
LAB_02ea0148:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
        lVar5 = thunk_FUN_01ec485c(*(undefined8 *)
                                    (*plVar8 + (ulong)*(ushort *)
                                                       (*(long *)(*(long *)(*(long *)(param_5 + 0x20
                                                                                     ) + 0xc0) +
                                                                 0x20) + 0x50) * 0x10 + 0x140));
        uVar9 = (**(code **)(lVar5 + 8))(plVar8,0,lVar5);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar9,uVar9);
        }
        FUN_02ee8df4(lVar10,uVar9,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;

    System_Array_InternalEnumerator<InputUser_OngoingAccountSelection>__System_Collections_IEnumerator_Reset
    :
    if (*(long *)(piVar13 + -2) == lVar5) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02ea0240;
    }
  }
LAB_02ea0224:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,0);
LAB_02ea0240:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return lVar10;
}


