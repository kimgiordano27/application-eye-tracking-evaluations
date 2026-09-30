/*
FUNCTION_NAME: FUN_02453d60
ENTRY_POINT: 02453d60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02453d60(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CultureInfo_get_CalendarType__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = (long *)FUN_04155a74(*(long *)(param_1 + 0x18),param_2,0);
    if (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02453e18;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02453e18:
      (*(code *)*puVar2)(plVar1,puVar2[1]);
    }
    plVar1 = (long *)FUN_02153c90(**(undefined8 **)(param_3 + 0x38));
    if (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_System_Globalization_CultureInfo_get_CalendarType__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02453e90;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_System_Globalization_CultureInfo_get_CalendarType__,0);
LAB_02453e90:
      (*(code *)*puVar2)(plVar1,uVar6,puVar2[1]);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_04155ba4(*(long *)(param_1 + 0x18),param_2,plVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


