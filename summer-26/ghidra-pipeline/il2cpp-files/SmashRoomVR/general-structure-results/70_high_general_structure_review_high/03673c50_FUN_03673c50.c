/*
FUNCTION_NAME: FUN_03673c50
ENTRY_POINT: 03673c50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03673c50(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  
  puVar2 = PTR_DAT_03d9b868;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff73f2 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9b140);
    thunk_FUN_01ad9084(PTR_DAT_03d9b870);
    thunk_FUN_01ad9084(PTR_DAT_03d99fd8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b878);
    thunk_FUN_01ad9084(PTR_DAT_03d9b148);
    thunk_FUN_01ad9084(PTR_DAT_03d9b150);
    thunk_FUN_01ad9084(PTR_DAT_03d9b880);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(StringLiteral_2293);
    thunk_FUN_01ad9084(StringLiteral_2294);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9b888);
    thunk_FUN_01ad9084(PTR_DAT_03d9b890);
    thunk_FUN_01ad9084(PTR_DAT_03d9b898);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b868);
    DAT_03ff73f2 = 1;
  }
  lVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_03081994(lVar6,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_03922f24(param_1,0,0);
  if ((uVar7 & 1) != 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar10 = thunk_FUN_01afaadc();
    uVar11 = thunk_FUN_01ad9084(PTR_DAT_03d83a18);
    FUN_02fd1220(uVar10,uVar11,0);
    uVar11 = thunk_FUN_01ad9084(PTR_DAT_03d9b8a8);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar10,uVar11);
  }
  if ((param_2 == 0) ||
     (uVar7 = FUN_01e9b31c(param_2,*(undefined8 *)PTR_DAT_03d99fd8), (uVar7 & 1) == 0)) {
    return;
  }
  if ((param_1 != 0) && (lVar8 = Unity_VisualScripting_Member__Invoke(param_1,0,0), lVar8 != 0)) {
    uVar7 = *(ulong *)(lVar8 + 0x18);
    lVar9 = FUN_01b47fd0(*(undefined8 *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                         ,uVar7 & 0xffffffff);
    if (lVar6 != 0) {
      plVar19 = (long *)(lVar6 + 0x18);
      *plVar19 = lVar9;
      thunk_FUN_01b4f09c(plVar19,lVar9);
      lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                );
      FUN_02b2c1b0(lVar9,param_2,*(undefined8 *)StringLiteral_2294);
      plVar20 = (long *)(lVar6 + 0x10);
      *plVar20 = lVar9;
      thunk_FUN_01b4f09c(plVar20,lVar9);
      if (*plVar20 != 0) {
        FUN_02b2e144(*plVar20,*(undefined8 *)StringLiteral_2293);
        uVar10 = FUN_01e4a1a0(lVar8,*plVar20,*(undefined8 *)PTR_DAT_03d9b870);
        puVar1 = PTR_DAT_03d9b140;
        if (0 < (int)uVar7) {
          uVar22 = 0;
          do {
            lVar8 = *plVar19;
            iVar5 = FUN_01e4920c(*plVar20,uVar22 & 0xffffffff,*(undefined8 *)puVar1);
            if (lVar8 == 0) goto LAB_036740f0;
            if (*(uint *)(lVar8 + 0x18) <= uVar22) goto LAB_036740ec;
            lVar9 = uVar22 * 4;
            uVar22 = uVar22 + 1;
            *(int *)(lVar8 + lVar9 + 0x20) = iVar5 + 1;
          } while ((uVar7 & 0xffffffff) != uVar22);
        }
        lVar8 = *(long *)(param_1 + 0x28);
        if (lVar8 != 0) {
          uVar14 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar14) {
            uVar21 = 0;
            do {
              if (uVar14 <= uVar21) {
LAB_036740ec:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar9 = *(long *)(lVar8 + (long)(int)uVar21 * 8 + 0x20);
              if ((lVar9 == 0) || (lVar15 = *(long *)(lVar9 + 0x10), lVar15 == 0))
              goto LAB_036740f0;
              iVar5 = *(int *)(lVar15 + 0x18);
              if (0 < iVar5) {
                lVar16 = *plVar19;
                iVar17 = 0;
                do {
                  if (iVar5 == iVar17) goto LAB_036740ec;
                  puVar18 = (uint *)(lVar15 + (long)iVar17 * 4 + 0x20);
                  uVar14 = *puVar18;
                  if (lVar16 == 0) goto LAB_036740f0;
                  if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_036740ec;
                  iVar17 = iVar17 + 1;
                  *puVar18 = uVar14 - *(int *)(lVar16 + (long)(int)uVar14 * 4 + 0x20);
                } while (iVar5 != iVar17);
              }
              FUN_0361bd08(lVar9,0);
              uVar14 = *(uint *)(lVar8 + 0x18);
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < (int)uVar14);
          }
          uVar11 = FUN_03632758(param_1,0);
          puVar2 = PTR_DAT_03d9b150;
          uVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b150);
          FUN_028b0ee8(uVar12,lVar6,*(undefined8 *)PTR_DAT_03d9b888,0);
          puVar1 = PTR_DAT_03d9b148;
          uVar11 = FUN_01ec70a0(uVar11,uVar12,*(undefined8 *)PTR_DAT_03d9b148);
          puVar4 = PTR_DAT_03d9b880;
          uVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b880);
          FUN_028b0e34(uVar12,lVar6,*(undefined8 *)PTR_DAT_03d9b890,0);
          puVar3 = PTR_DAT_03d9b878;
          uVar11 = FUN_01eb871c(uVar11,uVar12,*(undefined8 *)PTR_DAT_03d9b878);
          uVar12 = FUN_036328a4(param_1,0);
          uVar13 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
          FUN_028b0ee8(uVar13,lVar6,*(undefined8 *)PTR_DAT_03d9b898,0);
          uVar12 = FUN_01ec70a0(uVar12,uVar13,*(undefined8 *)puVar1);
          uVar13 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
          FUN_028b0e34(uVar13,lVar6,*(undefined8 *)PTR_DAT_03d9b8a0,0);
          uVar12 = FUN_01eb871c(uVar12,uVar13,*(undefined8 *)puVar3);
          FUN_03633308(param_1,uVar10,0,0);
          Unity_VisualScripting_MemberUtility__ExtendedDeclaringType(param_1,uVar11,0);
          FUN_0363294c(param_1,uVar12,0);
          return;
        }
      }
    }
  }
LAB_036740f0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


