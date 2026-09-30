/*
FUNCTION_NAME: FUN_02e52b38
ENTRY_POINT: 02e52b38
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


undefined8 FUN_02e52b38(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  float extraout_s0;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_03ff0345 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    DAT_03ff0345 = 1;
  }
  plVar15 = *(long **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar15 == (long *)0x0) goto LAB_02e52f1c;
    lVar12 = plVar15[4];
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
    }
    uVar10 = (**(code **)(*plVar15 + 0x278))(plVar15,*(undefined8 *)(*plVar15 + 0x280));
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    thunk_FUN_01b4f09c();
    (**(code **)(*plVar15 + 600))(plVar15,*(undefined8 *)(*plVar15 + 0x260));
    iVar5 = (**(code **)(*plVar15 + 0x268))(plVar15,*(undefined8 *)(*plVar15 + 0x270));
    if ((plVar15[9] == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_02e52f1c;
    iVar2 = *(int *)(param_1 + 0x28);
    iVar8 = *(int *)(plVar15[9] + 0x1c);
    iVar6 = FUN_038e998c(*(long *)(param_1 + 0x30),0);
    puVar4 = Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__;
    iVar6 = (iVar8 / 1000) * iVar2 * iVar6;
    uVar10 = FUN_01b47fd0(*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,iVar6
                         );
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar10);
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar7 = (**(code **)(*plVar15 + 0x288))(plVar15,*(undefined8 *)(*plVar15 + 0x290));
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar7;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_02e52f1c;
    iVar2 = *(int *)(param_1 + 0x28);
    iVar8 = FUN_038e998c(*(long *)(param_1 + 0x30),0);
    iVar8 = iVar2 * (iVar5 / 1000) * iVar8;
    iVar5 = 0;
    if (iVar6 != 0) {
      iVar5 = iVar8 / iVar6;
    }
    *(int *)(param_1 + 0x4c) = iVar8;
    *(int *)(param_1 + 0x50) = iVar5;
    uVar10 = FUN_01b47fd0(*(undefined8 *)puVar4);
    *(undefined8 *)(param_1 + 0x58) = uVar10;
    thunk_FUN_01b4f09c();
  }
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_0391f968(uVar10,0,0);
  if ((uVar11 & 1) == 0) {
    if (plVar15 == (long *)0x0) goto LAB_02e52f1c;
  }
  else {
    if (plVar15 == (long *)0x0) {
LAB_02e52f1c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
    if (((uVar11 & 1) != 0) && ((char)plVar15[8] != '\0')) {
      lVar12 = 0;
      fVar18 = extraout_s0;
      do {
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298(fVar18);
        }
        uVar11 = FUN_0391f968(uVar10,0,0);
        if ((uVar11 & 1) == 0) {
LAB_02e52efc:
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        iVar5 = (**(code **)(*plVar15 + 0x288))(plVar15,*(undefined8 *)(*plVar15 + 0x290));
        if (iVar5 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        *(int *)(param_1 + 0x48) = iVar5;
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_02e52f1c;
        iVar8 = *(int *)(param_1 + 0x40);
        iVar9 = FUN_038e9950(*(long *)(param_1 + 0x30),0);
        iVar6 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x4c) + iVar6;
        if (iVar5 + iVar9 * iVar8 <= iVar2) goto LAB_02e52efc;
        lVar16 = *(long *)(param_1 + 0x30);
        if (lVar16 == 0) goto LAB_02e52f1c;
        uVar10 = *(undefined8 *)(param_1 + 0x58);
        iVar8 = FUN_038e9950(lVar16,0);
        iVar5 = 0;
        if (iVar8 != 0) {
          iVar5 = iVar6 / iVar8;
        }
        FUN_038e9a04(lVar16,uVar10,iVar6 - iVar5 * iVar8,0);
        lVar16 = *(long *)(param_1 + 0x58);
        if (lVar16 == 0) goto LAB_02e52f1c;
        uVar3 = *(uint *)(lVar16 + 0x18);
        if ((long)((ulong)uVar3 << 0x20) < 1) {
          fVar18 = 0.0;
        }
        else {
          uVar13 = 0;
          uVar11 = 0;
          fVar17 = 0.0;
          do {
            if (uVar3 <= uVar11) {
LAB_02e52f18:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            fVar19 = *(float *)(lVar16 + 0x20 + uVar11 * 4);
            iVar5 = *(int *)(param_1 + 0x50);
            iVar8 = 0;
            if (iVar5 != 0) {
              iVar8 = (int)uVar11 / iVar5;
            }
            fVar18 = fVar19 * fVar19;
            if (fVar19 * fVar19 <= fVar17) {
              fVar18 = fVar17;
            }
            if ((int)uVar11 == iVar8 * iVar5) {
              lVar14 = *(long *)(param_1 + 0x38);
              if (lVar14 == 0) goto LAB_02e52f1c;
              if ((int)uVar13 < (int)*(uint *)(lVar14 + 0x18)) {
                if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_02e52f18;
                lVar1 = (long)(int)uVar13;
                uVar13 = uVar13 + 1;
                *(float *)(lVar14 + lVar1 * 4 + 0x20) = fVar19;
              }
            }
            uVar11 = uVar11 + 1;
            fVar17 = fVar18;
          } while ((long)uVar11 < (long)(int)uVar3);
        }
        lVar16 = plVar15[7];
        iVar5 = (int)plVar15[10] + 1;
        if (lVar16 != 0) {
          lVar12 = lVar16;
        }
        *(int *)(plVar15 + 10) = iVar5;
        if (lVar16 != 0) {
          if (lVar12 == 0) goto LAB_02e52f1c;
          fVar18 = (float)(**(code **)(lVar12 + 0x18))
                                    (*(undefined8 *)(lVar12 + 0x40),iVar5,
                                     *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar12 + 0x28))
          ;
        }
        *(int *)(param_1 + 0x44) = iVar2;
      } while( true );
    }
  }
  if ((char)plVar15[8] != '\0') {
    (**(code **)(*plVar15 + 0x2d8))(plVar15,*(undefined8 *)(*plVar15 + 0x2e0));
  }
  return 0;
}


