/*
FUNCTION_NAME: FUN_02132a8c
ENTRY_POINT: 02132a8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02132d30) */

void FUN_02132a8c(long param_1,undefined8 *param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  plVar5 = *(long **)(param_4 + 0x38);
  if (plVar5 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_BootConfigData__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Bootstring_Decode__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar5 = *(long **)(param_4 + 0x38);
    if (plVar5 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar5 = *(long **)(param_4 + 0x38);
    }
  }
  if ((*(byte *)(*plVar5 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar1 = thunk_FUN_01f117cc();
  FUN_0254bfe8(lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  uVar8 = param_2[1];
  uVar3 = *param_2;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2[2];
    *(undefined8 *)(lVar1 + 0x18) = uVar8;
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    thunk_FUN_01f51358(lVar1 + 0x10,0);
    if ((param_1 != 0) &&
       (lVar2 = FUN_032a01b0(param_1,*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20)),
       lVar2 != 0)) {
      plVar5 = (long *)thunk_FUN_03ed4570(lVar2,0);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_BootConfigData__ctor__);
      FUN_02e67a8c(uVar3,lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10),0);
      lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar1 == 0) {
        lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01ecaf44();
        }
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01ecaf44();
        }
        uVar8 = **(undefined8 **)(lVar1 + 0xb8);
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_Bootstring_Decode__);
        FUN_02e6c0a0(lVar1,uVar8,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30),0);
        lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
        lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        thunk_FUN_01f51358(*(long *)(lVar2 + 0xb8) + 8,lVar1);
      }
      FUN_02458150(plVar5,uVar3,param_3,lVar1,1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x38));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03ed669c(plVar5,0);
      lVar1 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02132d04;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02132d04:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


