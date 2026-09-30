/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-object>$$System.Collections.ICollection.get_SyncRoot
ENTRY_POINT: 02769ecc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276a144) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_object>__System_Collections_ICollection_get_SyncRoot
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 in_CY;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long in_x10;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((bool)in_CY) {
      FUN_030f2bb4();
    }
    else {
      *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_01f51358();
    }
    iVar1 = in_stack_00000008._4_4_ + 1;
    in_stack_00000008._4_4_ = iVar1;
    iVar6 = (**(code **)(*unaff_x19 + 0x618))();
    iVar5 = in_stack_00000008._4_4_;
    if (iVar6 <= iVar1) break;
    FUN_035683d0((long)&stack0x00000008 + 4,0);
    if (iVar5 == 0) {
      param_3 = FUN_02443e1c();
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar10 = *unaff_x21;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02769e80;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02769e80:
      (*(code *)*puVar9)();
      param_3 = FUN_024442a0();
    }
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_0276a13c;
    in_x10 = (long)(int)*(uint *)(unaff_x22 + 0x18);
    in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x22 + 0x18);
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0)
  {
    FUN_01ecaf44();
  }
  thunk_FUN_01f117cc();
  FUN_02e6ca9c();
  lVar7 = FUN_02444ca8();
  if (lVar7 != 0) {
    lVar7 = FUN_03fe3c18(lVar7,0);
    unaff_x19[0x14] = lVar7;
    thunk_FUN_01f51358(unaff_x19 + 0x14,lVar7);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (unaff_x19[0x13] != 0) {
      plVar8 = (long *)FUN_0265d924(unaff_x19[0x13],
                                    *(undefined8 *)
                                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      goto LAB_02769ff4;
    }
  }
LAB_0276a13c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02769ff4:
  lVar7 = *plVar8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0276a040;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0276a040:
  uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  if ((uVar11 & 1) == 0) goto LAB_0276a0c0;
  lVar7 = *plVar8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0276a09c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_0276a09c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  thunk_FUN_03fe9acc();
  goto LAB_02769ff4;
LAB_0276a0c0:
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0276a114;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_0276a114:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  return;
}


