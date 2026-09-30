/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Cowatching_SetPresenterData
ENTRY_POINT: 055b2e90
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Oculus_Platform_CAPI__ovr_Cowatching_SetPresenterData(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x28;
  
  if (*(int *)(**(long **)(param_1 + 0x9e8) + 0xe4) == 0) {
    thunk_FUN_02df485c(**(long **)(param_1 + 0x9e8));
  }
  thunk_FUN_02dd3048();
  FUN_05570ab4();
  if (unaff_x25 != (long *)0x0) {
    lVar9 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_055b2f24;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c();
LAB_055b2f24:
    (*(code *)*puVar5)();
    puVar1 = PTR_DAT_06a1bc88;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                              );
    FUN_055aa764();
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_053f1f74(lVar9,uVar12,uVar6,0);
    puVar3 = System_Action<RenderTexture>_TypeInfo;
    puVar2 = PTR_DAT_06a1bbb8;
    puVar1 = PTR_DAT_069fc180;
    if (unaff_x19 != (long *)0x0) {
      do {
        iVar4 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar4 == 4) {
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar7 == (long *)0x0) goto LAB_055b3198;
          uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) == 0) {
            thunk_FUN_02dfd288(PTR_DAT_069fc178);
            FUN_0297e1b4();
            uVar12 = FUN_0547e2f8(0);
            uVar6 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
            goto LAB_055b322c;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar12 = FUN_055d29a8();
          if (lVar9 == 0) goto LAB_055b3198;
          FUN_053f2720(lVar9,uVar6,uVar12,0);
        }
        else if (iVar4 != 5) {
          if (iVar4 == 0xd) goto LAB_055b3074;
          FUN_02979e58();
          (**(code **)(*unaff_x19 + 0x188))();
          thunk_FUN_02dfd288(System_Drawing_Point_var);
          uVar6 = FUN_0551e574();
          uVar12 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
          FUN_05362cb4(uVar12,uVar6,0);
          goto LAB_055b3234;
        }
        uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
      } while ((uVar10 & 1) != 0);
      FUN_055b578c();
LAB_055b3074:
      if (*(char *)(unaff_x20 + 0x2a) == '\0') {
        thunk_FUN_02dfd288(PTR_DAT_069fc178);
        FUN_0297e1b4();
        uVar12 = FUN_0547e2f8(0);
        FUN_02979e58();
        uVar6 = thunk_FUN_02dfd288(System_Action<string,_string,_LogType>_TypeInfo);
      }
      else {
        lVar13 = *(long *)(unaff_x20 + 0xc0);
        if (lVar13 != 0) {
          plVar7 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
          if (plVar7 != (long *)0x0) {
            if ((lVar9 != 0) &&
               (lVar8 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_055b3264:
              uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar6,0);
            }
            if ((int)plVar7[3] != 0) {
              plVar7[4] = lVar9;
              LeanTween__value(plVar7 + 4,lVar9);
              if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b3198;
              lVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2);
              if ((lVar9 != 0) &&
                 (lVar8 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
              goto LAB_055b3264;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                plVar7[5] = lVar9;
                LeanTween__value(plVar7 + 5,lVar9);
                uVar6 = (**(code **)(lVar13 + 0x18))
                                  (*(undefined8 *)(lVar13 + 0x40),plVar7,
                                   *(undefined8 *)(lVar13 + 0x28));
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
        uVar12 = FUN_0547e2f8(0);
        uVar6 = thunk_FUN_02dfd288(
                                  System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                  );
      }
LAB_055b322c:
      FUN_055873e0(uVar6,uVar12);
LAB_055b3234:
      uVar6 = FUN_05574a94();
      uVar12 = thunk_FUN_02dfd288(System_Action<IntPtr,_int,_IntPtr,_int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar12);
    }
  }
LAB_055b3198:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


