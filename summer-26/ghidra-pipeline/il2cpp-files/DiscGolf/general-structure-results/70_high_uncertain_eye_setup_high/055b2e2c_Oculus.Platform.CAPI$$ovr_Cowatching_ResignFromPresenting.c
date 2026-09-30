/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Cowatching_ResignFromPresenting
ENTRY_POINT: 055b2e2c
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


undefined8 Oculus_Platform_CAPI__ovr_Cowatching_ResignFromPresenting(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar13;
  long lVar14;
  long *unaff_x28;
  
  plVar13 = *(long **)(unaff_x21 + 0x28);
  uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
  }
  uVar6 = FUN_0547e2f8(0);
  uVar6 = FUN_055873e0(*(undefined8 *)System_Action<bool,_string[],_int,_ReadingContext>_TypeInfo,
                       uVar6,*(undefined8 *)(unaff_x20 + 0x60),0);
  if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
  }
  uVar7 = thunk_FUN_02dd3048();
  uVar5 = FUN_05570ab4(uVar7,uVar5,uVar6,0);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_055b2f24;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar13,*unaff_x28,1);
LAB_055b2f24:
    (*(code *)*puVar8)(plVar13,3,uVar5,0,puVar8[1]);
    puVar1 = PTR_DAT_06a1bc88;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                              );
    FUN_055aa764();
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_053f1f74(lVar10,uVar6,uVar5,0);
    puVar3 = System_Action<RenderTexture>_TypeInfo;
    puVar2 = PTR_DAT_06a1bbb8;
    puVar1 = PTR_DAT_069fc180;
    if (unaff_x19 != (long *)0x0) {
      do {
        iVar4 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar4 == 4) {
          plVar13 = (long *)(**(code **)(*unaff_x19 + 0x198))();
          if (plVar13 == (long *)0x0) goto LAB_055b3198;
          uVar5 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
          uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar11 & 1) == 0) {
            thunk_FUN_02dfd288(PTR_DAT_069fc178);
            FUN_0297e1b4();
            uVar6 = FUN_0547e2f8(0);
            uVar5 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
            goto LAB_055b322c;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar6 = FUN_055d29a8();
          if (lVar10 == 0) goto LAB_055b3198;
          FUN_053f2720(lVar10,uVar5,uVar6,0);
        }
        else if (iVar4 != 5) {
          if (iVar4 == 0xd) goto LAB_055b3074;
          FUN_02979e58();
          (**(code **)(*unaff_x19 + 0x188))();
          thunk_FUN_02dfd288(System_Drawing_Point_var);
          uVar5 = FUN_0551e574();
          uVar6 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
          FUN_05362cb4(uVar6,uVar5,0);
          goto LAB_055b3234;
        }
        uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
      } while ((uVar11 & 1) != 0);
      FUN_055b578c();
LAB_055b3074:
      if (*(char *)(unaff_x20 + 0x2a) == '\0') {
        thunk_FUN_02dfd288(PTR_DAT_069fc178);
        FUN_0297e1b4();
        uVar6 = FUN_0547e2f8(0);
        FUN_02979e58();
        uVar5 = thunk_FUN_02dfd288(System_Action<string,_string,_LogType>_TypeInfo);
      }
      else {
        lVar14 = *(long *)(unaff_x20 + 0xc0);
        if (lVar14 != 0) {
          plVar13 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
          if (plVar13 != (long *)0x0) {
            if ((lVar10 != 0) &&
               (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
LAB_055b3264:
              uVar5 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar5,0);
            }
            if ((int)plVar13[3] != 0) {
              plVar13[4] = lVar10;
              LeanTween__value(plVar13 + 4,lVar10);
              if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b3198;
              lVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2);
              if ((lVar10 != 0) &&
                 (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
              goto LAB_055b3264;
              if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                plVar13[5] = lVar10;
                LeanTween__value(plVar13 + 5,lVar10);
                uVar5 = (**(code **)(lVar14 + 0x18))
                                  (*(undefined8 *)(lVar14 + 0x40),plVar13,
                                   *(undefined8 *)(lVar14 + 0x28));
                if (unaff_x22 != 0) {
                  FUN_055b4f70();
                }
                FUN_055b5334();
                FUN_055b5560();
                return uVar5;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          goto LAB_055b3198;
        }
        thunk_FUN_02dfd288(PTR_DAT_069fc178);
        FUN_0297e1b4();
        uVar6 = FUN_0547e2f8(0);
        uVar5 = thunk_FUN_02dfd288(
                                  System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                  );
      }
LAB_055b322c:
      FUN_055873e0(uVar5,uVar6);
LAB_055b3234:
      uVar5 = FUN_05574a94();
      uVar6 = thunk_FUN_02dfd288(System_Action<IntPtr,_int,_IntPtr,_int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar6);
    }
  }
LAB_055b3198:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


