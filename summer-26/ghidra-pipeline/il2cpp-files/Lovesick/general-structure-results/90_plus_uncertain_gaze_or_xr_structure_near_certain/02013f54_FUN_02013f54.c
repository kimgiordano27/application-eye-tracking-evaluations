/*
FUNCTION_NAME: FUN_02013f54
ENTRY_POINT: 02013f54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_7
*/


undefined8 FUN_02013f54(long param_1,int param_2,int *param_3,ulong param_4)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_64;
  
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02013efc with catch @ 02013f54
                        */
                    /* try { // try from 02013f6c to 02113f83 has its CatchHandler @ 02013fc8 */
                    /* try { // try from 02013f84 to 02113fb7 has its CatchHandler @ 02013e50 */
  if ((DAT_03780946 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    DAT_03780946 = 1;
  }
  if (param_2 < *param_3) {
    iVar12 = 0;
    iVar13 = 0;
    bVar3 = 0;
    bVar5 = false;
    bVar4 = 1;
    iVar11 = 1;
    bVar6 = false;
    local_64 = param_2;
    do {
      uVar1 = *(ushort *)(param_1 + (long)local_64 * 2);
      iVar7 = param_2;
      if (bVar5) {
        iVar10 = local_64;
        if (9 < uVar1 - 0x30) goto LAB_02014038;
LAB_02014014:
        bVar4 = 0;
        iVar13 = iVar13 + 1;
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__ + 0xe0
                    ) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01fc78ec(uVar1,0);
        iVar10 = local_64;
        if ((uVar8 & 1) != 0) goto LAB_02014014;
LAB_02014038:
        if (4 < iVar13) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
        if (iVar13 != 0) {
          iVar12 = iVar12 + 1;
          iVar11 = local_64 - iVar13;
        }
        uVar1 = *(ushort *)(param_1 + (long)local_64 * 2);
        if (uVar1 < 0x2f) {
          if (uVar1 == 0x25) {
            iVar10 = *param_3;
            do {
              local_64 = local_64 + 1;
              if (iVar10 == local_64) {
                return 0;
              }
              sVar2 = *(short *)(param_1 + (long)local_64 * 2);
              if (sVar2 == 0x2f) goto LAB_0201416c;
              iVar7 = local_64;
            } while (sVar2 != 0x5d);
          }
          else {
            if (uVar1 != 0x2e) {
              return 0;
            }
            if (!(bool)(bVar3 ^ 1)) {
              return 0;
            }
            local_64 = *param_3;
            uVar8 = FUN_01d1fe7c(param_1,iVar11,&local_64,1,0,0,0);
            if ((uVar8 & 1) == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
            iVar13 = 0;
            iVar12 = iVar12 + 1;
            bVar3 = 1;
            iVar10 = local_64 + -1;
          }
        }
        else if (uVar1 == 0x2f) {
LAB_0201416c:
          if (bVar5 || iVar12 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
          if ((param_4 & 1) != 0) {
            return 0;
          }
          iVar13 = 0;
          bVar4 = 1;
          bVar5 = true;
          iVar10 = local_64;
          iVar7 = param_2;
        }
        else if (uVar1 == 0x3a) {
          iVar10 = local_64;
          if ((local_64 < 1) || (*(short *)(param_1 + (long)(local_64 + -1) * 2) != 0x3a)) {
            iVar13 = 0;
            bVar4 = 1;
          }
          else {
            if (bVar6) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
            bVar4 = 0;
            iVar13 = 0;
            bVar6 = true;
          }
        }
        else {
          if (uVar1 != 0x5d) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
          iVar10 = *param_3;
          iVar7 = local_64;
        }
      }
      param_2 = iVar7;
      local_64 = iVar10 + 1;
    } while (local_64 < *param_3);
    if (bVar5) {
      if (1 < iVar13 - 1U) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
      iVar11 = 9;
    }
    else {
      iVar11 = 8;
    }
    uVar9 = 0;
    if ((iVar13 < 5) && ((bool)(bVar4 ^ 1))) {
      bVar5 = iVar12 < iVar11;
      if (!bVar6) {
        bVar5 = iVar12 == iVar11;
      }
      uVar9 = 0;
      if ((bVar5) && (iVar10 == *param_3)) {
        *param_3 = param_2 + 1;
        uVar9 = 1;
      }
    }
  }
  else {
Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity:
    uVar9 = 0;
  }
  return uVar9;
}


