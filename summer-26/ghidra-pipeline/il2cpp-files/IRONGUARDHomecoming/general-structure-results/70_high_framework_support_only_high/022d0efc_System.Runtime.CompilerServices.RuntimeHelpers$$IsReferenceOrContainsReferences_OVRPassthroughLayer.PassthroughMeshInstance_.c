/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPassthroughLayer.PassthroughMeshInstance>
ENTRY_POINT: 022d0efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d0e34) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPassthroughLayer_PassthroughMeshInstance>
               (long *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  long *unaff_x22;
  long lVar15;
  
  lVar15 = *param_1;
  __cxa_end_catch();
  if (unaff_x22 != (long *)0x0) {
    lVar10 = *unaff_x22;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022d0bd8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238();
LAB_022d0bd8:
    (*(code *)*puVar11)();
  }
  if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar15);
  }
  if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar15 = FUN_0424f664(0);
  puVar5 = Method_System_Char_ConvertToUtf32__;
  puVar4 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar15 != 0) {
    iVar1 = *(int *)(lVar15 + 0x18);
    while( true ) {
      do {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            return;
          }
          plVar6 = (long *)FUN_030f28e4(lVar15,iVar1,*(undefined8 *)puVar5);
        } while (plVar6 == (long *)0x0);
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
      } while ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
              (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4));
      if (unaff_x20 == 0) break;
      plVar7 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
      uVar8 = (**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      FUN_041d4560(plVar7,uVar8,0);
      plVar9 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar9 + 0x198))(plVar9,plVar7,*(undefined8 *)(*plVar9 + 0x1a0));
      lVar10 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_041e7f94(lVar10,0);
      if (lVar10 == 0) {
        uVar13 = FUN_041d3f88(plVar7,0);
        iVar12 = 4;
        if ((uVar13 & 1) == 0) {
          iVar12 = 10;
        }
      }
      else {
        FUN_041c5278();
        iVar12 = 4;
      }
      lVar10 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_022d0d94;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_022d0d94:
      (*(code *)*puVar11)(plVar7,puVar11[1]);
      if ((iVar12 != 10) && (iVar12 != 0)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


