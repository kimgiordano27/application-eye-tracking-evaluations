/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 03351d1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03352074) */

void OVREyeGaze__OnPermissionGranted(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02ec0540(param_2,param_3,*param_1);
  thunk_FUN_01c21c38();
  *(long *)(unaff_x19 + 0x18) = unaff_x21;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<PolyNode>_MoveNext__;
  if (unaff_x20 == (long *)0x0) {
LAB_03351d78:
    plVar4 = (long *)thunk_FUN_01c495e4();
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03351df8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar2,0);
LAB_03351df8:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar3 = Method_System_Collections_Generic_List_Enumerator<Polygon>_Dispose__;
      puVar2 = PTR_DAT_04230960;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03351e70;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar2,0);
LAB_03351e70:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03351f90;
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03351f3c;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03351f24;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03351ecc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar3,0);
LAB_03351ecc:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = FUN_032000a0(uVar6,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(uVar6,uVar6);
        }
        FUN_02ec0bf8();
      } while( true );
    }
    lVar9 = thunk_FUN_01c495e4();
    if (lVar9 == 0) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar6 = thunk_FUN_01c496e0();
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_Dispose__
                                );
      uVar8 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_MoveNext__
                                );
      FUN_0323fce4(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar7);
    }
    if (unaff_x21 == 0) {
LAB_03352010:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_02ec0cd4();
  }
  else {
    lVar9 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0422f998 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0422f998)) {
      if (lVar9 != *(long *)OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo) goto LAB_03351d78;
    }
    else {
      FUN_032000a0();
    }
    if (unaff_x21 == 0) goto LAB_03352010;
    FUN_02ec0bf8();
  }
LAB_03351fd4:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_0335213c();
    return;
  }
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03351f24:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03351f84;
    }
  }
LAB_03351f3c:
  puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_0422fce8,0);
LAB_03351f84:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03351f90:
  if (unaff_x21 == 0) goto LAB_03352010;
  goto LAB_03351fd4;
}


