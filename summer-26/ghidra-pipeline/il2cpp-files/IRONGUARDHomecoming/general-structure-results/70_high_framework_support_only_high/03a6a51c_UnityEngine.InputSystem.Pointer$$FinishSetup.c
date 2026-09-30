/*
FUNCTION_NAME: UnityEngine.InputSystem.Pointer$$FinishSetup
ENTRY_POINT: 03a6a51c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6a6ec) */

void UnityEngine_InputSystem_Pointer__FinishSetup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  ulong unaff_x20;
  
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_0__);
  thunk_FUN_01efb3a4(
                    Method_System_Linq_Enumerable_Select<RenamedFromAttribute,_ValueTuple<Enum,_string>>__
                    );
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((unaff_x20 & 1) != 0) {
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar7 = FUN_01f08890(uVar7,1);
    FUN_01bc50c0();
    uVar8 = FUN_039fda98();
    FUN_01bc50c0(uVar7);
    FUN_01bc56ec(uVar7,uVar8);
    FUN_01bc5408(uVar7,0,uVar8);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7793);
    uVar7 = FUN_033f1a90(uVar8,uVar7,0);
    thunk_FUN_01efb3a4(StringLiteral_7750);
    uVar8 = thunk_FUN_01f117cc();
    FUN_03a69d54(uVar8,uVar7);
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_7792);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar7);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)FUN_03a66f34();
  puVar3 = StringLiteral_7742;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar4;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a6a5b0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,0);
LAB_03a6a5b0:
    uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01f116d0(plVar4,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar4;
      lVar9 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_03a6a690;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar4;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03a6a610;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,1);
LAB_03a6a610:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6);
    }
    FUN_03a679c8();
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03a6a6ac;
    }
  }
LAB_03a6a690:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,0);
LAB_03a6a6ac:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


