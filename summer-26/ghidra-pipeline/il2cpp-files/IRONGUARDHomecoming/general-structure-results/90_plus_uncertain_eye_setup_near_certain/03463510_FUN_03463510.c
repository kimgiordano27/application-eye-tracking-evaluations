/*
FUNCTION_NAME: FUN_03463510
ENTRY_POINT: 03463510
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 183
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03463510(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  if ((DAT_04832968 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<WrapMode>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_RuntimePanel_Create__);
    DAT_04832968 = 1;
  }
  plVar3 = (long *)FUN_03594a20(*(undefined8 *)(param_1 + 0x48),1,0);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_RuntimePanel_Create__ + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_RuntimePanel_Create__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar3);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar4 = (long *)FUN_03462c70(*(long *)(param_1 + 0x60),plVar3,0);
    lVar5 = thunk_FUN_01f116d0(plVar3,*(undefined8 *)puVar2);
    uVar6 = param_3;
    if (lVar5 != 0) {
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_Serializer_Get<WrapMode>__);
      if (plVar3 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        uVar10 = *(undefined8 *)puVar2;
        lVar5 = thunk_FUN_01f116d0(plVar3,uVar10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar3,uVar10);
        }
      }
      FUN_034636c8(uVar6,param_3,lVar5);
    }
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03463698;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,1);
LAB_03463698:
                    /* WARNING: Could not recover jumptable at 0x034636b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar4,param_2,uVar6,puVar7[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


