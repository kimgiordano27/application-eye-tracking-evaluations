/*
FUNCTION_NAME: FUN_03b145fc
ENTRY_POINT: 03b145fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03b145fc(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  ulong uVar8;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_03ffdad4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdad4 = 1;
  }
  lVar2 = FUN_03b13edc(param_5);
  if (lVar2 != 0) {
    fVar5 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                             (lVar2,0);
    fVar15 = param_3;
    fVar6 = param_4;
    lVar2 = FUN_03b13edc(param_5);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar2 != 0) {
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor(lVar2,0);
      *(float *)(param_5 + 0xa0) = fVar5 + param_3 * 0.5;
      *(float *)(param_5 + 0xa4) = param_2 + param_4 * 0.5;
      *(undefined4 *)(param_5 + 0xa8) = 0;
      *(float *)(param_5 + 0xac) = fVar15 * 0.5;
      *(float *)(param_5 + 0xb0) = fVar6 * 0.5;
      *(undefined4 *)(param_5 + 0xb4) = 0;
      FUN_03b168c4(&local_68,param_5);
      *(undefined8 *)(param_5 + 0x98) = local_58;
      *(undefined8 *)(param_5 + 0x90) = uStack_60;
      *(undefined8 *)(param_5 + 0x88) = local_68;
      uVar4 = *(undefined8 *)(param_5 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_03b14950;
        fVar7 = *(float *)(param_5 + 0x9c);
        uVar13 = *(ulong *)(param_5 + 0x88);
        uVar14 = *(undefined4 *)(param_5 + 0x90);
        fVar15 = (float)*(undefined8 *)(param_5 + 0x94);
        fVar15 = fVar15 + fVar15;
        fVar5 = (float)((ulong)*(undefined8 *)(param_5 + 0x94) >> 0x20);
        fVar5 = fVar5 + fVar5;
        fVar16 = fVar7 + fVar7;
        fVar6 = (float)FUN_03928134(*(long *)(param_5 + 0x20),0);
        uVar10 = *(ulong *)(param_5 + 0xac);
        *(float *)(param_5 + 0x9c) = fVar16 * 0.5;
        fVar16 = (float)uVar10 + (float)uVar10;
        fVar9 = (float)(uVar10 >> 0x20);
        fVar9 = fVar9 + fVar9;
        uVar8 = CONCAT44(fVar9,fVar16);
        fVar16 = fVar16 - fVar15;
        fVar9 = fVar9 - fVar5;
        iVar11 = -(uint)(0.0 < fVar16);
        iVar12 = -(uint)(0.0 < fVar9);
        uVar3 = CONCAT44((float)(uVar13 >> 0x20) - (fVar7 + -0.5) * fVar9,
                         (float)uVar13 - (fVar6 + -0.5) * fVar16);
        uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(fVar5,fVar15)) & ~CONCAT44(iVar12,iVar11);
        uVar3 = uVar3 ^ (uVar3 ^ uVar13) & ~CONCAT44(iVar12,iVar11);
        uVar8 = CONCAT44((float)(uVar8 >> 0x20) * 0.5,(float)uVar8 * 0.5);
        *(ulong *)(param_5 + 0x94) = uVar8;
        *(ulong *)(param_5 + 0x88) = uVar3;
        *(undefined4 *)(param_5 + 0x90) = uVar14;
        if (*(int *)(param_5 + 0x2c) == 2) {
          if (DAT_03fed2da == '\0') {
            thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
            DAT_03fed2da = '\x01';
            uVar10 = (ulong)*(uint *)(param_5 + 0xac);
            uVar3 = (ulong)*(uint *)(param_5 + 0x88);
            uVar8 = (ulong)*(uint *)(param_5 + 0x94);
          }
          fVar5 = (float)uVar3 + (float)uVar8;
          fVar16 = (float)uVar3 - (float)uVar8;
          fVar6 = *(float *)(param_5 + 0xa0) + (float)uVar10;
          fVar7 = *(float *)(param_5 + 0xa0) - (float)uVar10;
          fVar15 = (*(float **)
                     (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                     0xb8))[1];
          if (fVar6 <= fVar5) {
            if (fVar7 < fVar16) {
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar6 = (float)FUN_03041580(fVar7 - fVar16,fVar6 - fVar5,0);
            }
            else {
              fVar6 = **(float **)
                        (*(long *)
                          Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8
                        );
            }
          }
          else {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar6 = (float)FUN_030415e4(fVar7 - fVar16,fVar6 - fVar5,0);
          }
          fVar7 = *(float *)(param_5 + 0xa4) - *(float *)(param_5 + 0xb0);
          fVar5 = *(float *)(param_5 + 0xa4) + *(float *)(param_5 + 0xb0);
          fVar16 = *(float *)(param_5 + 0x8c) - *(float *)(param_5 + 0x98);
          fVar9 = *(float *)(param_5 + 0x8c) + *(float *)(param_5 + 0x98);
          if (fVar16 <= fVar7) {
            if (fVar9 < fVar5) {
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar15 = (float)FUN_030415e4(fVar7 - fVar16,fVar5 - fVar9,0);
            }
          }
          else {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar15 = (float)FUN_03041580(fVar7 - fVar16,fVar5 - fVar9,0);
          }
          if (1.4013e-45 < fVar6 * fVar6 + fVar15 * fVar15) {
            if (*(long *)(param_5 + 0x20) != 0) {
              FUN_03927efc(*(long *)(param_5 + 0x20),0);
              if (*(char *)(param_5 + 0x28) == '\0') {
                if (*(long *)(param_5 + 0x20) == 0) goto LAB_03b14950;
                FUN_03927efc(*(long *)(param_5 + 0x20),0);
              }
              if (*(char *)(param_5 + 0x29) != '\0') {
                return;
              }
              if (*(long *)(param_5 + 0x20) != 0) {
                FUN_03927efc(*(long *)(param_5 + 0x20),0);
                return;
              }
            }
            goto LAB_03b14950;
          }
        }
      }
      return;
    }
  }
LAB_03b14950:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


