/*
FUNCTION_NAME: FUN_01cbd5f8
ENTRY_POINT: 01cbd5f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_19;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01cbd850) */

void FUN_01cbd5f8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_03feda4f & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda4f = 1;
  }
  if (param_2 != 0) {
    uVar5 = FUN_01cb8664(param_2);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar6 = FUN_0391c2b8(*(long *)(param_2 + 0x10),0);
      uVar7 = FUN_0391c2b8(param_1,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar6,uVar7,0);
      puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
      if ((uVar5 & 1) == 0) {
        return;
      }
      fVar13 = *(float *)(param_1 + 0x6c);
      if (fVar13 <= 0.0) {
        return;
      }
      fVar11 = *(float *)(param_1 + 0x68);
      if (fVar11 <= 0.0) {
        return;
      }
      lVar8 = *(long *)(param_2 + 0x30);
      if (lVar8 != 0) {
        fVar16 = *(float *)(param_1 + 0x48);
        fVar17 = *(float *)(param_1 + 0x4c);
        fVar18 = *(float *)(param_1 + 0x50);
        fVar15 = fVar18 * *(float *)(param_1 + 0x38) +
                 fVar16 * *(float *)(param_1 + 0x30) + fVar17 * *(float *)(param_1 + 0x34);
        fVar11 = fVar11 * ((fVar13 * fVar11) / (fVar13 + fVar11)) * fVar15;
        iVar10 = 0;
        while (lVar8 = FUN_0391fab4(lVar8,0), lVar8 != 0) {
          iVar4 = FUN_0392a654(lVar8,0);
          if (iVar4 <= iVar10) {
            return;
          }
          if (((*(long *)(param_2 + 0x30) == 0) ||
              (lVar8 = FUN_0391fab4(*(long *)(param_2 + 0x30),0), lVar8 == 0)) ||
             (lVar8 = FUN_0392a9fc(lVar8,iVar10,0), lVar8 == 0)) break;
          lVar9 = FUN_01e8a9f8(lVar8,*(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar5 = FUN_0391f968(lVar9,0,0);
          if ((uVar5 & 1) != 0) {
            FUN_0391c2b8(lVar8,0);
            fVar13 = (float)FUN_01cbcef4();
            fVar14 = *(float *)(param_1 + 0x28);
            if (0.0 < fVar14) {
              fVar12 = (float)FUN_03928d34(lVar8,0);
              fVar19 = *(float *)(param_1 + 0x3c);
              fVar20 = *(float *)(param_1 + 0x40);
              fVar21 = *(float *)(param_1 + 0x44);
              if (DAT_03fed25c == '\0') {
                thunk_FUN_01ad9084(puVar3);
                DAT_03fed25c = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar12 = fVar12 - fVar19;
              fVar14 = fVar14 - fVar20;
              fVar15 = fVar15 - fVar21;
              fVar15 = 1.0 - SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15) /
                             *(float *)(param_1 + 0x28);
              if (fVar15 < 0.0) {
                fVar15 = 0.0;
              }
              fVar13 = fVar13 * fVar15;
            }
            if (lVar9 == 0) break;
            fVar15 = fVar18 * fVar11 * fVar13;
            FUN_0395ae9c(fVar16 * fVar11 * fVar13,fVar17 * fVar11 * fVar13,lVar9,1,0);
          }
          lVar8 = *(long *)(param_2 + 0x30);
          iVar10 = iVar10 + 1;
          if (lVar8 == 0) break;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


