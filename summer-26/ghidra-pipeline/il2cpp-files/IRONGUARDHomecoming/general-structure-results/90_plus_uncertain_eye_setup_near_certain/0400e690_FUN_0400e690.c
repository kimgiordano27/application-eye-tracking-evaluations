/*
FUNCTION_NAME: FUN_0400e690
ENTRY_POINT: 0400e690
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


/* WARNING: Removing unreachable block (ram,0x0400e83c) */

void FUN_0400e690(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_045857f8;
  if ((DAT_0483bc65 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045857f8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_ConvertToString<UnsafeText>__);
    thunk_FUN_01efb3a4(PTR_DAT_045856b0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c878);
    DAT_0483bc65 = 1;
  }
  FUN_02e99924(param_1,param_2,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0457c878;
  if (param_2 != 0) {
    lVar2 = FUN_023381fc(param_2,param_1,*(undefined8 *)PTR_DAT_045856b0);
    lVar3 = thunk_FUN_01f116d0(param_1,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      if (lVar2 == 0) goto LAB_0400e838;
      if (*(char *)(lVar2 + 0x10) != '\0') {
        FUN_03ed72bc(lVar3,param_2,0);
        return;
      }
    }
    if ((char)param_1[5] != '\0') {
      if (lVar2 == 0) goto LAB_0400e838;
      if (*(char *)(lVar2 + 0x11) == '\0') {
        if (param_1[4] == 0) goto LAB_0400e838;
        uVar4 = FUN_0400e8ec(lVar3,param_2);
        if ((uVar4 & 1) != 0) {
          plVar5 = (long *)FUN_03fadc10(param_2,0);
          (**(code **)(*param_1 + 0x4a8))(param_1,plVar5,0,*(undefined8 *)(*param_1 + 0x4b0));
          if (plVar5 != (long *)0x0) {
            lVar2 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar6 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0400e818;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01ecb238(plVar5,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_0400e818:
            (*(code *)*puVar6)(plVar5,puVar6[1]);
          }
        }
      }
    }
    return;
  }
LAB_0400e838:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


