/*
FUNCTION_NAME: FUN_01cb6474
ENTRY_POINT: 01cb6474
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_20;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01cb6780) */

void FUN_01cb6474(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((DAT_03feda4b & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda4b = 1;
  }
  if (param_5 == 0) {
LAB_01cb6914:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_01cb8664(param_5);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar5 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_4 + 0x70);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(uVar12,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_01cb6914;
      uVar12 = FUN_0391c2b8(*(long *)(param_5 + 0x10),0);
      uVar6 = FUN_0391c2b8(param_4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar5 = FUN_03922f24(uVar12,uVar6,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    fVar15 = *(float *)(param_4 + 0x40);
    if (0.0 < fVar15) {
      fVar16 = *(float *)(param_4 + 0x3c);
      fVar18 = (float)*(undefined8 *)(param_4 + 0x34);
      fVar19 = (float)((ulong)*(undefined8 *)(param_4 + 0x34) >> 0x20);
      if (*(char *)(param_4 + 0x29) == '\0') {
        fVar17 = *(float *)(param_4 + 0x80);
        fVar18 = fVar18 * fVar17;
        fVar19 = fVar19 * fVar17;
        uVar5 = CONCAT44(fVar19,fVar18);
        fVar14 = fVar16 * fVar17;
        fVar15 = fVar15 + fVar17;
        fVar18 = fVar18 / fVar15;
        fVar19 = fVar19 / fVar15;
        fVar16 = fVar14 / fVar15;
      }
      else {
        uVar6 = *(undefined8 *)(param_4 + 100);
        fVar17 = *(float *)(param_4 + 0x6c);
        uVar12 = *(undefined8 *)(param_4 + 0x78);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar12,0,0);
        if ((uVar5 & 1) == 0) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          pfVar10 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          fVar13 = *pfVar10;
          param_2 = pfVar10[1];
          param_3 = pfVar10[2];
        }
        else {
          if (*(long *)(param_4 + 0x78) == 0) goto LAB_01cb6914;
          fVar13 = (float)FUN_03959e50(*(long *)(param_4 + 0x78),0);
        }
        fVar14 = *(float *)(param_4 + 0x80);
        fVar16 = fVar16 / fVar15 + (fVar17 - param_3);
        uVar5 = (ulong)(uint)fVar16;
        fVar18 = (fVar18 / fVar15 + ((float)uVar6 - fVar13)) * fVar14;
        fVar19 = (fVar19 / fVar15 + ((float)((ulong)uVar6 >> 0x20) - param_2)) * fVar14;
        fVar16 = fVar14 * fVar16;
      }
      puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
      lVar7 = *(long *)(param_5 + 0x30);
      if (lVar7 != 0) {
        iVar11 = 0;
        while (lVar7 = FUN_0391fab4(lVar7,0), lVar7 != 0) {
          iVar4 = FUN_0392a654(lVar7,0);
          fVar15 = (float)uVar5;
          if (iVar4 <= iVar11) {
            if (*(char *)(param_4 + 0x28) != '\0') {
              FUN_01cbcc7c(param_4);
              uVar12 = *(undefined8 *)(param_4 + 0x78);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar5 = FUN_0391f968(uVar12,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(long *)(param_4 + 0x78) == 0) break;
                uVar5 = FUN_0395a324(*(long *)(param_4 + 0x78),0);
                if ((uVar5 & 1) != 0) {
                  uVar12 = *(undefined8 *)(param_4 + 0x50);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar5 = FUN_0391f968(uVar12,0,0);
                  if (((uVar5 & 1) != 0) && (fVar18 = *(float *)(param_4 + 0x40), 0.0 < fVar18)) {
                    fVar17 = *(float *)(param_4 + 0x3c);
                    fVar19 = (float)*(undefined8 *)(param_4 + 0x34);
                    fVar16 = (float)((ulong)*(undefined8 *)(param_4 + 0x34) >> 0x20);
                    if (*(char *)(param_4 + 0x29) == '\0') {
                      fVar13 = fVar18 + *(float *)(param_4 + 0x80);
                      uVar5 = CONCAT44((fVar16 * fVar18) / fVar13,(fVar19 * fVar18) / fVar13);
                      fVar13 = (fVar18 * fVar17) / fVar13;
                    }
                    else {
                      if (*(long *)(param_4 + 0x50) == 0) break;
                      fVar21 = *(float *)(param_4 + 0x60);
                      uVar12 = *(undefined8 *)(param_4 + 0x58);
                      fVar20 = (float)FUN_03959e50(*(long *)(param_4 + 0x50),0);
                      fVar13 = *(float *)(param_4 + 0x40);
                      uVar5 = CONCAT44((((float)((ulong)uVar12 >> 0x20) - fVar15) - fVar16 / fVar18)
                                       * fVar13,(((float)uVar12 - fVar20) - fVar19 / fVar18) *
                                                fVar13);
                      fVar13 = fVar13 * ((fVar21 - fVar14) - fVar17 / fVar18);
                    }
                    if (*(long *)(param_4 + 0x50) == 0) break;
                    FUN_0395ae9c(uVar5,uVar5 >> 0x20,fVar13,*(long *)(param_4 + 0x50),1,0);
                  }
                }
              }
            }
            *(undefined1 *)(param_4 + 0x84) = 0;
            return;
          }
          if (((*(long *)(param_5 + 0x30) == 0) ||
              (lVar7 = FUN_0391fab4(*(long *)(param_5 + 0x30),0), lVar7 == 0)) ||
             (lVar7 = FUN_0392a9fc(lVar7,iVar11,0), lVar7 == 0)) break;
          lVar8 = FUN_01e8a9f8(lVar7,*(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar9 = FUN_0391f968(lVar8,0,0);
          if ((uVar9 & 1) != 0) {
            FUN_0391c2b8(lVar7,0);
            fVar15 = (float)FUN_01cbcef4();
            fVar17 = *(float *)(param_4 + 0x24);
            if (0.0 < fVar17) {
              fVar13 = (float)FUN_03928d34(lVar7,0);
              fVar22 = *(float *)(param_4 + 0x44);
              fVar21 = *(float *)(param_4 + 0x48);
              fVar20 = *(float *)(param_4 + 0x4c);
              if (DAT_03fed25c == '\0') {
                thunk_FUN_01ad9084(puVar3);
                DAT_03fed25c = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar13 = fVar13 - fVar22;
              fVar17 = fVar17 - fVar21;
              fVar14 = fVar14 - fVar20;
              fVar17 = 1.0 - SQRT(fVar13 * fVar13 + fVar17 * fVar17 + fVar14 * fVar14) /
                             *(float *)(param_4 + 0x24);
              if (fVar17 < 0.0) {
                fVar17 = 0.0;
              }
              fVar15 = fVar15 * fVar17;
            }
            if (lVar8 == 0) break;
            fVar14 = fVar16 * fVar15;
            uVar5 = (ulong)(uint)(fVar19 * fVar15);
            FUN_0395ae9c(CONCAT44(fVar19 * fVar15,fVar18 * fVar15),uVar5,lVar8,1,0);
          }
          lVar7 = *(long *)(param_5 + 0x30);
          iVar11 = iVar11 + 1;
          if (lVar7 == 0) break;
        }
      }
      goto LAB_01cb6914;
    }
  }
  return;
}


