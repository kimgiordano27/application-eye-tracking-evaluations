/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<Dictionary.Entry<int,-Vector3>>
ENTRY_POINT: 01c4f514
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<Dictionary_Entry<int,_Vector3>>
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed618 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
                      );
    DAT_03fed618 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar5 == 0) goto LAB_01c4f6bc;
    uVar4 = FUN_03928fa8(lVar5,0);
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_01c4f6bc;
    FUN_03928fa8(*(long *)(param_2 + 0x40),0);
    FUN_03929030(uVar4,param_1,lVar5,0);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = FUN_01c71b24(0);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    lVar3 = FUN_0391c27c(param_2,0);
    if ((lVar3 == 0) || (FUN_03928d34(lVar3,0), lVar5 == 0)) goto LAB_01c4f6bc;
    FUN_01c71c98(lVar5,uVar4,0);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    if ((*(char *)(*(long *)(param_2 + 0x20) + 0x20) != '\0') && (0.0 < *(float *)(param_2 + 0x54)))
    {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar5 = FUN_01c4997c();
      if ((*(long *)(param_2 + 0x28) == 0) || (lVar5 == 0)) goto LAB_01c4f6bc;
      FUN_01c4f6c0(0x3f000000,*(undefined4 *)(param_2 + 0x54),DAT_00b555a8,lVar5,
                   *(undefined4 *)(*(long *)(param_2 + 0x28) + 0x20));
    }
    if (*(long *)(param_2 + 0x68) != 0) {
      FUN_022055b4(param_1,*(long *)(param_2 + 0x68),
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
                  );
      return;
    }
    return;
  }
LAB_01c4f6bc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


