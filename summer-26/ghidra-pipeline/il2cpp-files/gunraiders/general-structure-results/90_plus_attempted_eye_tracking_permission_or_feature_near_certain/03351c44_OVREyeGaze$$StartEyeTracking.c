/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 03351c44
PROGRAM: gunraiders-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_12;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03352074) */

void OVREyeGaze__StartEyeTracking(ulong param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x21;
  long lVar14;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f998);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<PolyNode>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<PolyNode>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Polygon>_Dispose__);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Polygon>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<PhotonPlayer>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<PickedUpWeapons>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Polygon>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<MaterialPropertyBlock>_Dispose__)
    ;
    *(undefined1 *)(unaff_x21 + 0x45f) = 1;
  }
  lVar14 = *(long *)(param_2 + 0x18);
  thunk_FUN_01c21c38();
  plVar7 = (long *)Method_System_Collections_Generic_List_Enumerator<PolyNode>_MoveNext__;
  if (lVar14 == 0) {
    lVar14 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<PhotonPlayer>_get_Current__
                               );
    FUN_02ec0540(lVar14,1,*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<Polygon>_MoveNext__);
    thunk_FUN_01c21c38();
    *(long *)(param_2 + 0x18) = lVar14;
    plVar7 = (long *)Method_System_Collections_Generic_List_Enumerator<PolyNode>_MoveNext__;
  }
  Method_System_Collections_Generic_List_Enumerator<PolyNode>_MoveNext__ = (undefined *)plVar7;
  if (param_3 == (long *)0x0) {
LAB_03351d78:
    plVar5 = (long *)thunk_FUN_01c495e4(param_3,*plVar7);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar7) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03351df8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(plVar5,*plVar7,0);
LAB_03351df8:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar4 = Method_System_Collections_Generic_List_Enumerator<Polygon>_get_Current__;
      puVar3 = Method_System_Collections_Generic_List_Enumerator<Polygon>_Dispose__;
      puVar2 = PTR_DAT_04230960;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03351e70;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar2,0);
LAB_03351e70:
        uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03351f90;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_03351f3c;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_03351f24;
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03351ecc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar3,0);
LAB_03351ecc:
        uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar8 = FUN_032000a0(uVar8,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4(uVar8,uVar8);
        }
        FUN_02ec0bf8(lVar14,uVar8,*(undefined8 *)puVar4);
      } while( true );
    }
    lVar11 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                         Method_System_Collections_Generic_List_Enumerator<PolyNode>_get_Current__
                               );
    if (lVar11 == 0) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar8 = thunk_FUN_01c496e0();
      uVar9 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_Dispose__
                                );
      uVar10 = thunk_FUN_01c273e8(
                                 Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_MoveNext__
                                 );
      FUN_0323fce4(uVar8,uVar9,uVar10,0);
      uVar9 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<PooledProjectile>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar8,uVar9);
    }
    if (lVar14 == 0) {
LAB_03352010:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_02ec0cd4(lVar14,lVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<PickedUpWeapons>_Dispose__);
  }
  else {
    lVar11 = *param_3;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0422f998 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0422f998)) {
      if (lVar11 != *(long *)OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo)
      goto LAB_03351d78;
    }
    else {
      param_3 = (long *)FUN_032000a0(param_3,0);
    }
    if (lVar14 == 0) goto LAB_03352010;
    FUN_02ec0bf8(lVar14,param_3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<Polygon>_get_Current__);
  }
LAB_03351fd4:
  if (0 < *(int *)(lVar14 + 0x18)) {
    FUN_0335213c(param_2);
    return;
  }
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03351f24:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03351f84;
    }
  }
LAB_03351f3c:
  puVar6 = (undefined8 *)FUN_01c72498(plVar7,*(long *)PTR_DAT_0422fce8,0);
LAB_03351f84:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03351f90:
  if (lVar14 == 0) goto LAB_03352010;
  goto LAB_03351fd4;
}


