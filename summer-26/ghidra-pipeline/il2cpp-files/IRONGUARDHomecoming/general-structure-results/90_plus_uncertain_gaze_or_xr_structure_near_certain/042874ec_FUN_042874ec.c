/*
FUNCTION_NAME: FUN_042874ec
ENTRY_POINT: 042874ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x042876f4) */

void FUN_042874ec(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_04841800 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04592fc8);
    thunk_FUN_01efb3a4(Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__);
    DAT_04841800 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (uVar3 = FUN_04286ea0(param_1,*(undefined8 *)(param_1 + 0x28),param_2,0), (uVar3 & 1) == 0)) {
    return;
  }
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    uVar4 = FUN_040703d4(param_1,0);
    puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar9,uVar4,0);
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_2 + 0xa0);
      uVar4 = FUN_040703d4(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      uVar3 = FUN_04073094(uVar9,uVar4,0);
      puVar2 = Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__;
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_042876f0;
        iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x10);
        lVar5 = *(long *)Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar2;
        }
        if (iVar1 != *(int *)(*(long *)(lVar5 + 0xb8) + 8)) {
          plVar6 = (long *)FUN_025eaefc(*(undefined8 *)(param_1 + 0x28),
                                        *(undefined8 *)PTR_DAT_04592fc8);
          FUN_04286fe0(param_1,plVar6,param_2);
          if (plVar6 != (long *)0x0) {
            lVar5 = *plVar6;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_042876b4;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01ecb238(plVar6,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_042876b4:
            (*(code *)*puVar7)(plVar6,puVar7[1]);
          }
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if ((lVar5 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      FUN_041f76d0(*(undefined4 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x30),
                   *(long *)(param_1 + 0x20),*(undefined4 *)(lVar5 + 0x10),0);
      return;
    }
  }
LAB_042876f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


