/*
FUNCTION_NAME: Unity.Burst.CompilerServices.Hint$$Assume
ENTRY_POINT: 020140e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_13;functionality_possible_biometrics_hits_6
*/


undefined8 Unity_Burst_CompilerServices_Hint__Assume(void)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *unaff_x19;
  int iVar8;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x22;
  int iVar9;
  int unaff_w25;
  int iVar10;
  ulong unaff_x28;
  uint unaff_w29;
  uint in_stack_00000008;
  int iStack000000000000000c;
  
  iStack000000000000000c = *unaff_x19;
  uVar4 = FUN_01d1fe7c();
  if ((uVar4 & 1) == 0) {
Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity:
    uVar5 = 0;
  }
  else {
    iVar10 = 0;
    iVar9 = unaff_w25 + 1;
    iVar6 = iStack000000000000000c + -1;
    while( true ) {
      iVar8 = unaff_w20;
      iStack000000000000000c = iVar6 + 1;
      if (*unaff_x19 <= iStack000000000000000c) break;
      uVar1 = *(ushort *)(unaff_x22 + (long)iStack000000000000000c * 2);
      unaff_w20 = iVar8;
      if ((unaff_x28 & 1) == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__ + 0xe0
                    ) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_01fc78ec(uVar1,0);
        if ((uVar4 & 1) == 0) goto LAB_02014038;
LAB_02014014:
        unaff_w29 = 0;
        iVar10 = iVar10 + 1;
        iVar6 = iStack000000000000000c;
      }
      else {
        if (uVar1 - 0x30 < 10) goto LAB_02014014;
LAB_02014038:
        if (4 < iVar10) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
        if (iVar10 != 0) {
          iVar9 = iVar9 + 1;
        }
        uVar1 = *(ushort *)(unaff_x22 + (long)iStack000000000000000c * 2);
        if (uVar1 < 0x2f) {
          if (uVar1 != 0x25) {
            return 0;
          }
          iVar6 = *unaff_x19;
          do {
            iStack000000000000000c = iStack000000000000000c + 1;
            if (iVar6 == iStack000000000000000c) {
              return 0;
            }
            sVar2 = *(short *)(unaff_x22 + (long)iStack000000000000000c * 2);
            if (sVar2 == 0x2f) goto LAB_0201416c;
            unaff_w20 = iStack000000000000000c;
          } while (sVar2 != 0x5d);
        }
        else if (uVar1 == 0x2f) {
LAB_0201416c:
          if ((unaff_x28 & 1) != 0 || iVar9 == 0)
          goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
          if ((unaff_x21 & 1) != 0) {
            return 0;
          }
          iVar10 = 0;
          unaff_w29 = 1;
          unaff_x28 = 1;
          iVar6 = iStack000000000000000c;
          unaff_w20 = iVar8;
        }
        else if (uVar1 == 0x3a) {
          iVar6 = iStack000000000000000c;
          if ((iStack000000000000000c < 1) ||
             (*(short *)(unaff_x22 + (long)(iStack000000000000000c + -1) * 2) != 0x3a)) {
            iVar10 = 0;
            unaff_w29 = 1;
          }
          else {
            if ((in_stack_00000008 & 1) != 0)
            goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
            unaff_w29 = 0;
            iVar10 = 0;
            in_stack_00000008 = 1;
          }
        }
        else {
          if (uVar1 != 0x5d) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
          iVar6 = *unaff_x19;
          unaff_w20 = iStack000000000000000c;
        }
      }
    }
    if ((unaff_x28 & 1) == 0) {
      iVar7 = 8;
    }
    else {
      if (1 < iVar10 - 1U) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeAngularVelocity;
      iVar7 = 9;
    }
    uVar5 = 0;
    if ((iVar10 < 5) && (((unaff_w29 ^ 1) & 1) != 0)) {
      bVar3 = iVar9 < iVar7;
      if ((in_stack_00000008 & 1) == 0) {
        bVar3 = iVar9 == iVar7;
      }
      uVar5 = 0;
      if ((bVar3) && (iVar6 == *unaff_x19)) {
        *unaff_x19 = iVar8 + 1;
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}


