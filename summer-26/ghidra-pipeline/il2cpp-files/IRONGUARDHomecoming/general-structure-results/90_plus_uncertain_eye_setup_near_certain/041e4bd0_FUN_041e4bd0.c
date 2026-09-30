/*
FUNCTION_NAME: FUN_041e4bd0
ENTRY_POINT: 041e4bd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x041e4e08) */
/* WARNING: Removing unreachable block (ram,0x041e4e40) */
/* WARNING: Removing unreachable block (ram,0x041e4e54) */

void FUN_041e4bd0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = Method_System_Globalization_DateTimeFormatInfo_internalGetMonthName__;
  if ((DAT_04840f9b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a568);
    thunk_FUN_01efb3a4(PTR_DAT_0458fc30);
    thunk_FUN_01efb3a4(PTR_DAT_04590140);
    thunk_FUN_01efb3a4(PTR_DAT_0458a2f8);
    thunk_FUN_01efb3a4(PTR_DAT_04590148);
    thunk_FUN_01efb3a4(Method_System_Globalization_DateTimeFormatInfo_internalGetMonthName__);
    DAT_04840f9b = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_041e2be0(uVar8);
  if (((uVar3 & 1) != 0) &&
     (FUN_041f7ccc(param_2,*(undefined4 *)(param_1 + 0x9c),0), param_2 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData__)) {
      FUN_041f4824(param_2,*(undefined4 *)(param_1 + 0x9c),param_1,0);
    }
  }
  uVar3 = FUN_041f7fb0(param_2,param_1,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0458fc30 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_041de228(param_1);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar4,*(undefined8 *)(param_1 + 0x50));
    plVar9 = *(long **)(param_1 + 0x50);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0458a568) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041e4d80;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_0458a568,0);
LAB_041e4d80:
    (*(code *)*puVar5)(plVar9,plVar4,puVar5[1]);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_041e4df0;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_041e4df0:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  FUN_025ebc08(param_1,param_2,*(undefined8 *)PTR_DAT_04590140);
  FUN_041f7dc4(param_2,*(undefined4 *)(param_1 + 0x9c),0);
  return;
}


