/*
FUNCTION_NAME: FUN_03852c78
ENTRY_POINT: 03852c78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x03852eb8) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_03852c78(undefined1 param_1 [16],float param_2,float param_3,long param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long local_98 [4];
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  if ((DAT_03ff8613 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_03ff8613 = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  local_98[2] = 0;
  local_98[1] = 0;
  uStack_78 = 0;
  local_74 = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  uVar4 = FUN_0380a6f0(param_4,param_5,0);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
  }
  else {
    if ((*(char *)(param_4 + 0x1e4) != '\0') && (param_5 != (long *)0x0)) {
      bVar1 = *(byte *)(*(long *)
                         Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                       + 0x130);
      if ((bVar1 <= *(byte *)(*param_5 + 0x130)) &&
         (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)
           Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__)) {
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(param_5,0,0);
        if ((uVar4 & 1) != 0) {
          if (param_5 == (long *)0x0) goto LAB_03852ef4;
          uVar4 = FUN_03831ffc(param_5,local_98 + 1,0);
          if ((uVar4 & 1) != 0) {
            lVar6 = *(long *)(param_4 + 0x38);
            uVar5 = FUN_03959ba8(local_98 + 1,0);
            if (lVar6 == 0) {
LAB_03852ef4:
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar4 = FUN_03843b30(lVar6,uVar5,local_98,0);
            if (((uVar4 & 1) != 0) && (local_98[0] == param_4)) {
              lVar6 = FUN_0391c27c(param_4,0);
              if (lVar6 != 0) {
                fVar7 = (float)FUN_03929130(lVar6,0);
                fVar11 = param_2;
                fVar13 = param_3;
                fVar8 = (float)FUN_03959c60(local_98 + 1,0);
                if (DAT_03fed315 == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                    );
                  DAT_03fed315 = '\x01';
                }
                puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
                if (*(int *)(*(long *)
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                fVar9 = SQRT((param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2) *
                             (fVar13 * fVar13 + fVar8 * fVar8 + fVar11 * fVar11));
                fVar12 = 0.0;
                if (DAT_00b55154 <= fVar9) {
                  fVar9 = (param_3 * fVar13 + fVar7 * fVar8 + param_2 * fVar11) / fVar9;
                  if (fVar9 < -1.0) {
                    fVar9 = -1.0;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  dVar10 = acos((double)fVar9);
                  fVar12 = (float)dVar10 * DAT_00b556e8;
                }
                return fVar12 <= *(float *)(param_4 + 0x1e8);
              }
              goto LAB_03852ef4;
            }
          }
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}


