/*
FUNCTION_NAME: FUN_056319d4
ENTRY_POINT: 056319d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05631f1c) */
/* WARNING: Removing unreachable block (ram,0x05631fb8) */
/* WARNING: Removing unreachable block (ram,0x05631d58) */

undefined8 FUN_056319d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_06dbbb05 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e888);
    FUN_02d965b8(PTR_DAT_06a0e8c0);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_06dbbb05 = 1;
  }
  puVar2 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  iVar1 = *(int *)(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 0x28);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
      FUN_0552aca4(lVar10,0);
      plVar9 = (long *)(param_1 + 0x30);
      *plVar9 = lVar10;
      LeanTween__value(plVar9,lVar10);
      lVar10 = *plVar9;
      if (lVar10 == 0) goto LAB_05631fb4;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(lVar10 + 0x10) = uVar3;
      LeanTween__value();
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_05631fb4;
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_06350670(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((*plVar9 == 0) || (plVar7 == (long *)0x0)) goto LAB_05631fb4;
        *(undefined1 *)(plVar7 + 9) = 1;
        FUN_0563e294(plVar7 + 7,0);
        uVar3 = DAT_010fbbd0;
        goto LAB_05631f98;
      }
LAB_05631bb8:
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar10 == 0)) goto LAB_05631fb4;
      thunk_FUN_063544b0(lVar10,*(undefined8 *)
                                 System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                         ,0);
      lVar10 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02dcfd18();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02dcfd18();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
      }
      uVar4 = FUN_0634eb94(lVar10,0,0);
      if ((uVar4 & 1) == 0) {
        uVar6 = 2;
        uVar8 = 1;
      }
      else {
        if (lVar10 == 0) goto LAB_05631fb4;
        uVar6 = *(undefined4 *)(lVar10 + 0x26c);
        uVar8 = *(undefined4 *)(lVar10 + 0x270);
      }
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar10 == 0)) goto LAB_05631fb4;
      FUN_0632bec8(lVar10,uVar6,0);
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar10 == 0)) goto LAB_05631fb4;
      FUN_0632c090(lVar10,uVar8,0);
      puVar2 = PTR_DAT_06a0e8c0;
      lVar10 = *(long *)(param_1 + 0x30);
      if (lVar10 == 0) goto LAB_05631fb4;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0563c9e8(0);
      uVar3 = DAT_010fc988;
      if ((uVar4 & 1) != 0) goto LAB_05631f6c;
    }
    else {
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        goto LAB_05631bb8;
      }
      if (iVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (**(long **)(*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo + 0xb8) == 0)
    goto LAB_05631fb4;
    lVar10 = *(long *)(**(long **)(*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo + 0xb8
                                  ) + 0x18);
    if (lVar10 != 0) {
      FUN_062feb1c(lVar10,0);
    }
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar12 = FUN_0384564c(*(long *)(lVar5 + 0x28),
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_TypeInfo
                          );
    *(undefined1 (*) [16])(lVar5 + 0x18) = auVar12;
    if (lVar10 != 0) {
      FUN_062feba4(lVar10,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0563c9e8(0);
    uVar3 = DAT_010fc420;
    if ((uVar4 & 1) != 0) goto LAB_05631f6c;
LAB_05631d8c:
    puVar2 = PTR_DAT_06a0e888;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05631fb4;
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x30) = 0;
    lVar10 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02dcfd18();
    }
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    uVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc868);
    FUN_054521e8(uVar3,uVar11,
                 *(undefined8 *)
                  System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo,0);
    if (lVar10 == 0) goto LAB_05631fb4;
    uVar3 = FUN_056874b4(lVar10,uVar3,0);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    LeanTween__value();
LAB_05631e2c:
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_05631fb4;
    uVar4 = FUN_0555c064(*(long *)(param_1 + 0x38),0);
    uVar3 = DAT_010fbc70;
    if ((uVar4 & 1) == 0) goto LAB_05631f6c;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05631fb4;
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x30) == '\0') {
      if (plVar7 != (long *)0x0) {
        *(undefined1 *)(plVar7 + 9) = 1;
        FUN_0563e294(plVar7 + 7,0);
        uVar3 = DAT_010fcba0;
LAB_05631f98:
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        return 1;
      }
      goto LAB_05631fb4;
    }
LAB_05631e50:
    if (plVar7 == (long *)0x0) goto LAB_05631fb4;
    *(undefined1 *)(plVar7 + 9) = 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    LeanTween__value((undefined8 *)(param_1 + 0x38),0);
    if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0563c9e8(0);
    uVar3 = DAT_010fbf50;
    if ((uVar4 & 1) != 0) {
LAB_05631f6c:
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      return 1;
    }
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        goto LAB_05631d8c;
      }
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_05631e2c;
    }
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_05631e50;
    }
    if (iVar1 != 6) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (**(long **)(*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo + 0xb8) != 0) {
    lVar10 = *(long *)(**(long **)(*(long *)System_Collections_Generic_HashSet<Text>_TypeInfo + 0xb8
                                  ) + 0x28);
    if (lVar10 != 0) {
      FUN_062feb1c(lVar10,0);
    }
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0632f118(lVar5,0,1,0);
    if (lVar10 != 0) {
      FUN_062feba4(lVar10,0);
    }
    if ((*(long *)(param_1 + 0x30) != 0) && (plVar7 != (long *)0x0)) {
      plVar7[6] = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
      LeanTween__value();
      (**(code **)(*plVar7 + 0x1b8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1c0));
      FUN_0563e294(plVar7 + 7,0);
      return 0;
    }
  }
LAB_05631fb4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


