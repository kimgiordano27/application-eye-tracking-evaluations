/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Cowatching_LeaveSession
ENTRY_POINT: 055b2d64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 Oculus_Platform_CAPI__ovr_Cowatching_LeaveSession(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 3000));
  FUN_02d965b8(System_Action<OVRColocationSession_Data>_TypeInfo);
  FUN_02d965b8(System_Action<bool,_string[],_int,_ReadingContext>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x649) = 1;
  if (unaff_x20 == 0) goto LAB_055b3198;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  if (*(int *)(*(long *)PTR_DAT_06a0da50 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_055bfe34(0);
  puVar1 = System_Net_ServicePoint_var;
  if ((uVar5 & 1) == 0) {
    uVar7 = FUN_0552e850(0);
    uVar8 = FUN_0552e850(0);
    uVar9 = thunk_FUN_02dfd288(System_Action<PhysicsScene,_IntPtr,_int,_bool>_TypeInfo);
    uVar11 = thunk_FUN_02dfd288(System_Action<string,_string,_string,_string>_TypeInfo);
    uVar7 = FUN_0536dcdc(uVar9,uVar7,uVar11,uVar8,0);
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar8 = FUN_0547e2f8(0);
  }
  else {
    plVar15 = *(long **)(unaff_x21 + 0x28);
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)System_Net_ServicePoint_var) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_055b2e14;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)System_Net_ServicePoint_var,0);
LAB_055b2e14:
      iVar4 = (*(code *)*puVar6)(plVar15,puVar6[1]);
      if (2 < iVar4) {
        if (unaff_x19 == (long *)0x0) goto LAB_055b3198;
        plVar15 = *(long **)(unaff_x21 + 0x28);
        uVar7 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
        }
        uVar8 = FUN_0547e2f8(0);
        uVar8 = FUN_055873e0(*(undefined8 *)
                              System_Action<bool,_string[],_int,_ReadingContext>_TypeInfo,uVar8,
                             *(undefined8 *)(unaff_x20 + 0x60),0);
        if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
        }
        uVar9 = thunk_FUN_02dd3048();
        uVar7 = FUN_05570ab4(uVar9,uVar7,uVar8,0);
        if (plVar15 == (long *)0x0) goto LAB_055b3198;
        lVar12 = *plVar15;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_055b2f24;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)puVar1,1);
LAB_055b2f24:
        (*(code *)*puVar6)(plVar15,3,uVar7,0,puVar6[1]);
      }
    }
    puVar1 = PTR_DAT_06a1bc88;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                              );
    FUN_055aa764();
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_053f1f74(lVar12,uVar8,uVar7,0);
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
        uVar9 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar5 & 1) == 0) {
          thunk_FUN_02dfd288(PTR_DAT_069fc178);
          FUN_0297e1b4();
          uVar8 = FUN_0547e2f8(0);
          uVar7 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
          uVar14 = uVar9;
          goto LAB_055b322c;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar7 = FUN_055d29a8();
        if (lVar12 == 0) goto LAB_055b3198;
        FUN_053f2720(lVar12,uVar9,uVar7,0);
      }
      else if (iVar4 != 5) {
        if (iVar4 == 0xd) goto LAB_055b3074;
        FUN_02979e58();
        (**(code **)(*unaff_x19 + 0x188))();
        thunk_FUN_02dfd288(System_Drawing_Point_var);
        uVar14 = FUN_0551e574();
        uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        FUN_05362cb4(uVar7,uVar14,0);
        goto LAB_055b3234;
      }
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar5 & 1) != 0);
    FUN_055b578c();
LAB_055b3074:
    if (*(char *)(unaff_x20 + 0x2a) == '\0') {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar8 = FUN_0547e2f8(0);
      FUN_02979e58();
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      uVar7 = thunk_FUN_02dfd288(System_Action<string,_string,_LogType>_TypeInfo);
    }
    else {
      lVar16 = *(long *)(unaff_x20 + 0xc0);
      if (lVar16 != 0) {
        plVar15 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
        if (plVar15 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar10 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
LAB_055b3264:
            uVar14 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar14,0);
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar12;
            LeanTween__value(plVar15 + 4,lVar12);
            if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b3198;
            lVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2);
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
            goto LAB_055b3264;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
              plVar15[5] = lVar12;
              LeanTween__value(plVar15 + 5,lVar12);
              uVar14 = (**(code **)(lVar16 + 0x18))
                                 (*(undefined8 *)(lVar16 + 0x40),plVar15,
                                  *(undefined8 *)(lVar16 + 0x28));
              if (unaff_x22 != 0) {
                FUN_055b4f70();
              }
              FUN_055b5334();
              FUN_055b5560();
              return uVar14;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        goto LAB_055b3198;
      }
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar8 = FUN_0547e2f8(0);
      uVar7 = thunk_FUN_02dfd288(
                                System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                );
    }
  }
LAB_055b322c:
  FUN_055873e0(uVar7,uVar8,uVar14,0);
LAB_055b3234:
  uVar14 = FUN_05574a94();
  uVar7 = thunk_FUN_02dfd288(System_Action<IntPtr,_int,_IntPtr,_int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar14,uVar7);
}


