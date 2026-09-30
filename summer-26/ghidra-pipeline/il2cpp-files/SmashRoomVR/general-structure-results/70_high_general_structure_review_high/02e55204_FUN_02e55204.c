/*
FUNCTION_NAME: FUN_02e55204
ENTRY_POINT: 02e55204
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined8 FUN_02e55204(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_03ff0365 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    DAT_03ff0365 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar11 != 0) {
LAB_02e552c0:
      puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar9 = *(undefined8 *)(lVar11 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_0391f968(uVar9,0,0);
      if ((uVar10 & 1) != 0) {
        uVar9 = FUN_02e5432c(lVar11);
        uVar10 = FUN_02ee6cf0(uVar9,0);
        if ((((uVar10 & 1) == 0) && (uVar10 = FUN_038eb72c(uVar9,0), (uVar10 & 1) != 0)) &&
           (*(char *)(lVar11 + 0x20) != '\0')) {
          lVar14 = 0;
          do {
            uVar9 = *(undefined8 *)(lVar11 + 0x40);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03923030(uVar9,0);
            if ((uVar10 & 1) == 0) {
LAB_02e5549c:
              *(undefined8 *)(param_1 + 0x18) = 0;
              thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
            uVar9 = FUN_02e5432c(lVar11);
            iVar6 = FUN_038eb7ac(uVar9,0);
            if (iVar6 < *(int *)(param_1 + 0x30)) {
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            }
            *(int *)(param_1 + 0x30) = iVar6;
            if (*(long *)(lVar11 + 0x40) == 0) goto LAB_02e554bc;
            iVar8 = *(int *)(param_1 + 0x28);
            iVar7 = FUN_038e9950(*(long *)(lVar11 + 0x40),0);
            lVar13 = *(long *)(param_1 + 0x38);
            if (lVar13 == 0) goto LAB_02e554bc;
            iVar2 = *(int *)(param_1 + 0x2c);
            iVar1 = iVar2 + *(int *)(lVar13 + 0x18);
            if (iVar6 + iVar7 * iVar8 <= iVar1) goto LAB_02e5549c;
            lVar12 = *(long *)(lVar11 + 0x40);
            if (lVar12 == 0) goto LAB_02e554bc;
            iVar8 = FUN_038e9950(lVar12,0);
            iVar6 = 0;
            if (iVar8 != 0) {
              iVar6 = iVar2 / iVar8;
            }
            FUN_038e9a04(lVar12,lVar13,iVar2 - iVar6 * iVar8,0);
            lVar13 = *(long *)(param_1 + 0x38);
            if (lVar13 == 0) goto LAB_02e554bc;
            uVar3 = *(uint *)(lVar13 + 0x18);
            if ((long)((ulong)uVar3 << 0x20) < 1) {
              fVar16 = 0.0;
            }
            else {
              uVar10 = 0;
              fVar16 = 0.0;
              do {
                if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                fVar15 = *(float *)(lVar13 + 0x20 + uVar10 * 4);
                uVar10 = uVar10 + 1;
                fVar15 = fVar15 * fVar15;
                if (fVar15 <= fVar16) {
                  fVar15 = fVar16;
                }
                fVar16 = fVar15;
              } while ((long)uVar10 < (long)(int)uVar3);
            }
            *(long *)(lVar11 + 0x30) = lVar13;
            thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x30));
            lVar13 = *(long *)(lVar11 + 0x70);
            iVar6 = *(int *)(lVar11 + 0x5c) + 1;
            if (lVar13 != 0) {
              lVar14 = lVar13;
            }
            *(int *)(lVar11 + 0x5c) = iVar6;
            if (lVar13 != 0) {
              if (lVar14 == 0) goto LAB_02e554bc;
              (**(code **)(lVar14 + 0x18))
                        (fVar16,*(undefined8 *)(lVar14 + 0x40),iVar6,*(undefined8 *)(lVar11 + 0x30),
                         *(undefined8 *)(lVar14 + 0x28));
            }
            *(int *)(param_1 + 0x2c) = iVar1;
          } while( true );
        }
      }
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (lVar11 != 0) {
      uVar9 = FUN_02e5432c(lVar11);
      uVar5 = FUN_038eb7ac(uVar9,0);
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      if (*(long *)(lVar11 + 0x30) != 0) {
        uVar9 = FUN_01b47fd0(*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,
                             *(undefined4 *)(*(long *)(lVar11 + 0x30) + 0x18));
        *(undefined8 *)(param_1 + 0x38) = uVar9;
        thunk_FUN_01b4f09c();
        goto LAB_02e552c0;
      }
    }
  }
LAB_02e554bc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


