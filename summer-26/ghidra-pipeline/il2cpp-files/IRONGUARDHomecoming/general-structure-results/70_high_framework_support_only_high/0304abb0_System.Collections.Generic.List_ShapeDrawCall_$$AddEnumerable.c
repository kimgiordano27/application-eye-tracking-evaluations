/*
FUNCTION_NAME: System.Collections.Generic.List<ShapeDrawCall>$$AddEnumerable
ENTRY_POINT: 0304abb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0304ada8) */

void System_Collections_Generic_List<ShapeDrawCall>__AddEnumerable(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar11 [16];
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)(*param_1)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0304ac1c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_0304ac1c:
    uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_0304ad54;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0304ac94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_0304ac94:
    auVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar6 = *(long *)(unaff_x21 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = *(uint *)(unaff_x21 + 0x18);
    if (uVar8 == *(uint *)(lVar6 + 0x18)) {
      FUN_0304949c();
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pauVar5 = (undefined1 (*) [16])(lVar6 + (long)(int)uVar8 * 0x10 + 0x20);
    *pauVar5 = auVar11;
    thunk_FUN_01f51358(pauVar5,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0304ad70;
    }
  }
LAB_0304ad54:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_0304ad70:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


