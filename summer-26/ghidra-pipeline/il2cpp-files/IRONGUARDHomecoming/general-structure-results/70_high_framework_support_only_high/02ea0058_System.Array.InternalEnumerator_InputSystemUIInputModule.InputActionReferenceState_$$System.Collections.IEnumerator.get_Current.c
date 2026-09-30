/*
FUNCTION_NAME: System.Array.InternalEnumerator<InputSystemUIInputModule.InputActionReferenceState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02ea0058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea0280) */

long System_Array_InternalEnumerator<InputSystemUIInputModule_InputActionReferenceState>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02ee7c10(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10));
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_033b0fc8();
  puVar4 = Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02ea00e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_02ea00e8:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) {
        return param_1;
      }
      lVar10 = *plVar5;
      lVar9 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_02ea0224;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_02ea0148;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,1);
LAB_02ea0148:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7);
    }
    lVar9 = thunk_FUN_01ec485c(*(undefined8 *)
                                (*plVar7 + (ulong)*(ushort *)
                                                   (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20)
                                                                       + 0xc0) + 0x20) + 0x50) *
                                           0x10 + 0x140));
    uVar8 = (**(code **)(lVar9 + 8))(plVar7,0,lVar9);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    FUN_02ee8df4(param_1,uVar8,*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28)
                );
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02ea0240;
    }
  }
LAB_02ea0224:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_02ea0240:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return param_1;
}


