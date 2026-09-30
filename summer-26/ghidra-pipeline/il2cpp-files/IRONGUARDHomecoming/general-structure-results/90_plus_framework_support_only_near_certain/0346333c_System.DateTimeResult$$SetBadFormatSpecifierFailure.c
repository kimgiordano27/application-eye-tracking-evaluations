/*
FUNCTION_NAME: System.DateTimeResult$$SetBadFormatSpecifierFailure
ENTRY_POINT: 0346333c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 System_DateTimeResult__SetBadFormatSpecifierFailure(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  undefined8 uVar11;
  
  plVar3 = (long *)FUN_03594a20(*(undefined8 *)(unaff_x21 + 0x48),1,0);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_RuntimePanel_Create__ + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_RuntimePanel_Create__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar3);
    }
    lVar4 = FUN_035b600c(plVar3,0);
    if (lVar4 == 0) {
      FUN_035b6044(plVar3);
    }
    if ((*(long *)(unaff_x21 + 0x60) != 0) &&
       (plVar5 = (long *)FUN_03462c70(*(long *)(unaff_x21 + 0x60),plVar3,0),
       puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
       plVar5 != (long *)0x0)) {
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03463420;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,0);
LAB_03463420:
      uVar7 = (*(code *)*puVar6)(plVar5);
      lVar4 = thunk_FUN_01f116d0(plVar3,*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        uVar11 = *(undefined8 *)puVar2;
        lVar4 = thunk_FUN_01f116d0(plVar3,uVar11);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar3,uVar11);
        }
        lVar4 = *(long *)puVar2;
        plVar5 = (long *)thunk_FUN_01f116d0(plVar3,lVar4);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar3,lVar4);
        }
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_034634cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,0);
LAB_034634cc:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


