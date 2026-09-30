/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 01d6d200
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0247d73a & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234cba8);
    DAT_0247d73a = 1;
  }
  if (param_3 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02352a70);
    FUN_01c5e120(uVar4,uVar5,0);
  }
  else {
    iVar2 = FUN_0105ce04(param_1);
    if (iVar2 == *(int *)(param_3 + 0x18)) {
      lVar3 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,iVar2);
      uVar1 = *(uint *)(param_3 + 0x18);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        do {
          if (uVar1 <= (uint)lVar7) {
LAB_01d6d2c4:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          lVar8 = *(long *)(param_3 + 0x20 + lVar7 * 8);
          iVar2 = (int)lVar8;
          if (lVar8 != iVar2) {
            thunk_FUN_010303a8(PTR_DAT_0234be28);
            uVar4 = thunk_FUN_010400dc();
            uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be20);
            uVar6 = thunk_FUN_010303a8(PTR_DAT_02358948);
            FUN_01c62494(uVar4,uVar5,uVar6,0);
            goto LAB_01d6d30c;
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar7) goto LAB_01d6d2c4;
          *(int *)(lVar3 + 0x20 + lVar7 * 4) = iVar2;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar1);
      }
      FUN_0105cfb0(param_1,param_2);
      return;
    }
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02358ab0);
    FUN_01c65ad0(uVar4,uVar5,0);
  }
LAB_01d6d30c:
  uVar5 = thunk_FUN_010303a8(PTR_DAT_02358b28);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar4,uVar5);
}


