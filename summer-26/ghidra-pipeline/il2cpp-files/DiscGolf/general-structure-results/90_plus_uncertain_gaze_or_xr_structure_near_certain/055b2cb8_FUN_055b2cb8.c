/*
FUNCTION_NAME: FUN_055b2cb8
ENTRY_POINT: 055b2cb8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_055b2cb8(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_06dbb649 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(System_Action<RenderTexture>_TypeInfo);
    FUN_02d965b8(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(PTR_DAT_06a0da50);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(PTR_DAT_06a1bc88);
    FUN_02d965b8(PTR_DAT_06a1bbb8);
    FUN_02d965b8(System_Action<OVRColocationSession_Data>_TypeInfo);
    FUN_02d965b8(System_Action<bool,_string[],_int,_ReadingContext>_TypeInfo);
    DAT_06dbb649 = 1;
  }
  if (param_3 == 0) goto LAB_055b3198;
  uVar16 = *(undefined8 *)(param_3 + 0x60);
  if (*(int *)(*(long *)PTR_DAT_06a0da50 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_055bfe34(0);
  puVar1 = System_Net_ServicePoint_var;
  if ((uVar7 & 1) == 0) {
    uVar9 = FUN_0552e850(0);
    uVar10 = FUN_0552e850(0);
    uVar11 = thunk_FUN_02dfd288(System_Action<PhysicsScene,_IntPtr,_int,_bool>_TypeInfo);
    uVar13 = thunk_FUN_02dfd288(System_Action<string,_string,_string,_string>_TypeInfo);
    uVar9 = FUN_0536dcdc(uVar11,uVar9,uVar13,uVar10,0);
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar10 = FUN_0547e2f8(0);
  }
  else {
    plVar17 = *(long **)(param_1 + 0x28);
    if (plVar17 != (long *)0x0) {
      lVar14 = *plVar17;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)System_Net_ServicePoint_var) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_055b2e14;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02dd004c(plVar17,*(long *)System_Net_ServicePoint_var,0);
LAB_055b2e14:
      iVar5 = (*(code *)*puVar8)(plVar17,puVar8[1]);
      if (2 < iVar5) {
        if (param_2 == (long *)0x0) goto LAB_055b3198;
        plVar17 = *(long **)(param_1 + 0x28);
        uVar9 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
        }
        uVar10 = FUN_0547e2f8(0);
        uVar10 = FUN_055873e0(*(undefined8 *)
                               System_Action<bool,_string[],_int,_ReadingContext>_TypeInfo,uVar10,
                              *(undefined8 *)(param_3 + 0x60),0);
        if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
        }
        uVar11 = thunk_FUN_02dd3048(param_2,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var
                                   );
        uVar9 = FUN_05570ab4(uVar11,uVar9,uVar10,0);
        if (plVar17 == (long *)0x0) goto LAB_055b3198;
        lVar14 = *plVar17;
        uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar7 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_055b2f24;
            }
            uVar7 = uVar7 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_02dd004c(plVar17,*(long *)puVar1,1);
LAB_055b2f24:
        (*(code *)*puVar8)(plVar17,3,uVar9,0,puVar8[1]);
      }
    }
    puVar1 = PTR_DAT_06a1bc88;
    uVar10 = *(undefined8 *)(param_3 + 0x60);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                              );
    FUN_055aa764(uVar9,param_1,param_3,param_4);
    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_053f1f74(lVar14,uVar10,uVar9,0);
    puVar4 = System_Action<OVRColocationSession_Data>_TypeInfo;
    puVar3 = System_Action<RenderTexture>_TypeInfo;
    puVar2 = PTR_DAT_06a1bbb8;
    puVar1 = PTR_DAT_069fc180;
    if (param_2 == (long *)0x0) {
LAB_055b3198:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    do {
      iVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if (iVar5 == 4) {
        plVar17 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0))
        ;
        if (plVar17 == (long *)0x0) goto LAB_055b3198;
        uVar11 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
        uVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if ((uVar7 & 1) == 0) {
          thunk_FUN_02dfd288(PTR_DAT_069fc178);
          FUN_0297e1b4();
          uVar10 = FUN_0547e2f8(0);
          uVar9 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
          uVar16 = uVar11;
          goto LAB_055b322c;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_055d29a8(param_2,0);
        if (lVar14 == 0) goto LAB_055b3198;
        FUN_053f2720(lVar14,uVar11,uVar9,0);
      }
      else if (iVar5 != 5) {
        if (iVar5 == 0xd) goto LAB_055b3074;
        FUN_02979e58(param_2);
        uVar6 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        local_80 = thunk_FUN_02dfd288(System_Drawing_Point_var);
        uStack_78 = 0xffffffffffffffff;
        local_70 = uVar6;
        uVar16 = FUN_0551e574(&local_80,0);
        uVar9 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        uVar16 = FUN_05362cb4(uVar9,uVar16,0);
        goto LAB_055b3234;
      }
      uVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    } while ((uVar7 & 1) != 0);
    FUN_055b578c(param_1,param_2,param_3,lVar14,*(undefined8 *)puVar4);
LAB_055b3074:
    if (*(char *)(param_3 + 0x2a) == '\0') {
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar10 = FUN_0547e2f8(0);
      FUN_02979e58(param_3);
      uVar16 = *(undefined8 *)(param_3 + 0x60);
      uVar9 = thunk_FUN_02dfd288(System_Action<string,_string,_LogType>_TypeInfo);
    }
    else {
      lVar18 = *(long *)(param_3 + 0xc0);
      if (lVar18 != 0) {
        plVar17 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
        if (plVar17 != (long *)0x0) {
          if ((lVar14 != 0) &&
             (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar12 == 0)) {
LAB_055b3264:
            uVar16 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar16,0);
          }
          if ((int)plVar17[3] != 0) {
            plVar17[4] = lVar14;
            LeanTween__value(plVar17 + 4,lVar14);
            lVar14 = *(long *)(param_1 + 0x20);
            if (lVar14 == 0) goto LAB_055b3198;
            uStack_78 = *(undefined8 *)(lVar14 + 0x68);
            local_80 = *(undefined8 *)(lVar14 + 0x60);
            lVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&local_80);
            if ((lVar14 != 0) &&
               (lVar12 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar12 == 0))
            goto LAB_055b3264;
            if ((*(uint *)(plVar17 + 3) & 0xfffffffe) != 0) {
              plVar17[5] = lVar14;
              LeanTween__value(plVar17 + 5,lVar14);
              uVar16 = (**(code **)(lVar18 + 0x18))
                                 (*(undefined8 *)(lVar18 + 0x40),plVar17,
                                  *(undefined8 *)(lVar18 + 0x28));
              if (param_5 != 0) {
                FUN_055b4f70(param_1,param_2,param_5,uVar16);
              }
              FUN_055b5334(param_1,param_2,param_3,uVar16);
              FUN_055b5560(param_1,param_2,param_3,uVar16);
              return uVar16;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        goto LAB_055b3198;
      }
      thunk_FUN_02dfd288(PTR_DAT_069fc178);
      FUN_0297e1b4();
      uVar10 = FUN_0547e2f8(0);
      uVar9 = thunk_FUN_02dfd288(
                                System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                );
    }
  }
LAB_055b322c:
  uVar16 = FUN_055873e0(uVar9,uVar10,uVar16,0);
LAB_055b3234:
  uVar16 = FUN_05574a94(param_2,uVar16,0);
  uVar9 = thunk_FUN_02dfd288(System_Action<IntPtr,_int,_IntPtr,_int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar16,uVar9);
}


