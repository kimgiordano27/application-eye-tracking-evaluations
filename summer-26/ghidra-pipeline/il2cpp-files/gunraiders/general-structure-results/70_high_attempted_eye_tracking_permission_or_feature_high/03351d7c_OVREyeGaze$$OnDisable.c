/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 03351d7c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03352074) */

void OVREyeGaze__OnDisable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  long unaff_x23;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x23 + 0x130);
  plVar3 = (long *)thunk_FUN_01c495e4();
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar11) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03351df8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar3,*plVar11,0);
LAB_03351df8:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = Method_System_Collections_Generic_List_Enumerator<Polygon>_Dispose__;
    puVar1 = PTR_DAT_04230960;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    do {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03351e70;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)puVar1,0);
LAB_03351e70:
      uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_03351f90;
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_03351f3c;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_03351f24;
      }
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03351ecc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)puVar2,0);
LAB_03351ecc:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar5 = FUN_032000a0(uVar5,0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4(uVar5,uVar5);
      }
      FUN_02ec0bf8();
    } while( true );
  }
  lVar8 = thunk_FUN_01c495e4();
  if (lVar8 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar5 = thunk_FUN_01c496e0();
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_Dispose__
                              );
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_MoveNext__
                              );
    FUN_0323fce4(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar6);
  }
  if (unaff_x21 == 0) goto LAB_03352010;
  FUN_02ec0cd4();
  goto LAB_03351fd4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03351f24:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03351f84;
    }
  }
LAB_03351f3c:
  puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_0422fce8,0);
LAB_03351f84:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_03351f90:
  if (unaff_x21 == 0) {
LAB_03352010:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
LAB_03351fd4:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_0335213c();
    return;
  }
  return;
}


