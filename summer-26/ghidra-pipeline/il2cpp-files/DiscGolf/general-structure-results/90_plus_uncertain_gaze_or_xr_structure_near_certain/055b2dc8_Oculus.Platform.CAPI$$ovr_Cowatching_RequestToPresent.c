/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Cowatching_RequestToPresent
ENTRY_POINT: 055b2dc8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Oculus_Platform_CAPI__ovr_Cowatching_RequestToPresent(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar14;
  long unaff_x28;
  long *plVar15;
  
  plVar15 = *(long **)(unaff_x28 + 0x9e0);
  uVar12 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *plVar15) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_055b2e14;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c();
LAB_055b2e14:
  iVar4 = (*(code *)*puVar5)();
  if (2 < iVar4) {
    if (unaff_x19 == (long *)0x0) goto LAB_055b3198;
    plVar14 = *(long **)(unaff_x21 + 0x28);
    uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
    }
    uVar7 = FUN_0547e2f8(0);
    uVar7 = FUN_055873e0(*(undefined8 *)System_Action<bool,_string[],_int,_ReadingContext>_TypeInfo,
                         uVar7,*(undefined8 *)(unaff_x20 + 0x60),0);
    if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
    }
    uVar8 = thunk_FUN_02dd3048();
    uVar6 = FUN_05570ab4(uVar8,uVar6,uVar7,0);
    if (plVar14 == (long *)0x0) goto LAB_055b3198;
    lVar11 = *plVar14;
    lVar10 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_055b2f24;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar14,lVar10,1);
LAB_055b2f24:
    (*(code *)*puVar5)(plVar14,3,uVar6,0,puVar5[1]);
  }
  puVar1 = PTR_DAT_06a1bc88;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                              System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                            );
  FUN_055aa764();
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_053f1f74(lVar10,uVar7,uVar6,0);
  puVar3 = System_Action<RenderTexture>_TypeInfo;
  puVar2 = PTR_DAT_06a1bbb8;
  puVar1 = PTR_DAT_069fc180;
  if (unaff_x19 == (long *)0x0) {
LAB_055b3198:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  do {
    iVar4 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar4 == 4) {
      plVar15 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar15 == (long *)0x0) goto LAB_055b3198;
      uVar6 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
      uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar12 & 1) == 0) {
        thunk_FUN_02dfd288(PTR_DAT_069fc178);
        FUN_0297e1b4();
        uVar7 = FUN_0547e2f8(0);
        uVar6 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
        goto LAB_055b322c;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_055d29a8();
      if (lVar10 == 0) goto LAB_055b3198;
      FUN_053f2720(lVar10,uVar6,uVar7,0);
    }
    else if (iVar4 != 5) {
      if (iVar4 == 0xd) goto LAB_055b3074;
      FUN_02979e58();
      (**(code **)(*unaff_x19 + 0x188))();
      thunk_FUN_02dfd288(System_Drawing_Point_var);
      uVar6 = FUN_0551e574();
      uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
      FUN_05362cb4(uVar7,uVar6,0);
      goto LAB_055b3234;
    }
    uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar12 & 1) != 0);
  FUN_055b578c();
LAB_055b3074:
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar7 = FUN_0547e2f8(0);
    FUN_02979e58();
    uVar6 = thunk_FUN_02dfd288(System_Action<string,_string,_LogType>_TypeInfo);
  }
  else {
    lVar11 = *(long *)(unaff_x20 + 0xc0);
    if (lVar11 != 0) {
      plVar15 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
      if (plVar15 != (long *)0x0) {
        if ((lVar10 != 0) &&
           (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0)) {
LAB_055b3264:
          uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar6,0);
        }
        if ((int)plVar15[3] != 0) {
          plVar15[4] = lVar10;
          LeanTween__value(plVar15 + 4,lVar10);
          if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b3198;
          lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2);
          if ((lVar10 != 0) &&
             (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
          goto LAB_055b3264;
          if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
            plVar15[5] = lVar10;
            LeanTween__value(plVar15 + 5,lVar10);
            uVar6 = (**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),plVar15,*(undefined8 *)(lVar11 + 0x28)
                              );
            if (unaff_x22 != 0) {
              FUN_055b4f70();
            }
            FUN_055b5334();
            FUN_055b5560();
            return uVar6;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_055b3198;
    }
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar7 = FUN_0547e2f8(0);
    uVar6 = thunk_FUN_02dfd288(
                              System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                              );
  }
LAB_055b322c:
  FUN_055873e0(uVar6,uVar7);
LAB_055b3234:
  uVar6 = FUN_05574a94();
  uVar7 = thunk_FUN_02dfd288(System_Action<IntPtr,_int,_IntPtr,_int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar6,uVar7);
}


