/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-StylePropertyValue>$$CopyTo
ENTRY_POINT: 0276b2a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276b620) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_StylePropertyValue>__CopyTo
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  iVar5 = (**(code **)(param_1 + 0x618))();
  if (0 < iVar5) {
    do {
      iVar5 = in_stack_00000008._4_4_;
      FUN_035683d0((long)&stack0x00000008 + 4,0);
      if (iVar5 == 0) {
        uVar8 = FUN_02443f9c();
      }
      else {
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar11 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0276b35c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_0276b35c:
        (*(code *)*puVar7)();
        uVar8 = FUN_02444460();
      }
      lVar10 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0276b618;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
      iVar5 = in_stack_00000008._4_4_ + 1;
      in_stack_00000008._4_4_ = iVar5;
      iVar6 = (**(code **)(*unaff_x19 + 0x618))();
    } while (iVar5 < iVar6);
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0)
  {
    FUN_01ecaf44();
  }
  thunk_FUN_01f117cc();
  FUN_02e6d028();
  lVar10 = FUN_02444fcc();
  if (lVar10 != 0) {
    lVar10 = FUN_03fe3c18(lVar10,0);
    unaff_x19[0x14] = lVar10;
    thunk_FUN_01f51358(unaff_x19 + 0x14,lVar10);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (unaff_x19[0x13] != 0) {
      plVar9 = (long *)FUN_0265d924(unaff_x19[0x13],
                                    *(undefined8 *)
                                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0276b51c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0276b51c:
        uVar12 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if ((uVar12 & 1) == 0) goto LAB_0276b59c;
        lVar10 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0276b578;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_0276b578:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
        thunk_FUN_03fe9acc();
      } while( true );
    }
  }
LAB_0276b618:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276b59c:
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0276b5f0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0276b5f0:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}


