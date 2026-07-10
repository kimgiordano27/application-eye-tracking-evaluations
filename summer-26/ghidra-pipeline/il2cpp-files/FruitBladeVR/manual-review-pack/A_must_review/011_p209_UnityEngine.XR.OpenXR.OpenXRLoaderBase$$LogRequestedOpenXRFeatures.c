/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRLoaderBase$$LogRequestedOpenXRFeatures
ENTRY_POINT: 036dbb30
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_OpenXR_OpenXRLoaderBase__LogRequestedOpenXRFeatures(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  int local_9c;
  ulong local_98;
  ulong *puStack_90;
  long local_88;
  ulong local_80;
  ulong *puStack_78;
  long local_70;
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef7265 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRLoaderBase_FeatureLoggingInfo>_Dispose___03ce7530
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRLoaderBase_FeatureLoggingInfo>_MoveNext___03ce7538
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRLoaderBase_FeatureLoggingInfo>_get_Current___03ce7540
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_GetEnumerator___03ce7548
                );
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo_03cb70a0);
    FUN_01c5c92c(PTR_System_Text_StringBuilder_TypeInfo_03cb73b8);
    FUN_01c5c92c(PTR_string___TypeInfo_03cb5c00);
    FUN_01c5c92c(PTR_StringLiteral_41_03cc54c0);
    FUN_01c5c92c(PTR_StringLiteral_2766_03ce7550);
    FUN_01c5c92c(PTR_StringLiteral_4776_03ce7558);
    FUN_01c5c92c(PTR_StringLiteral_549_03ce7560);
    FUN_01c5c92c(PTR_StringLiteral_607_03ce7568);
    FUN_01c5c92c(PTR_StringLiteral_87_03cb79f8);
    FUN_01c5c92c(PTR_StringLiteral_295_03ce7570);
    FUN_01c5c92c(PTR_StringLiteral_1084_03ce7578);
    FUN_01c5c92c(PTR_StringLiteral_4375_03ce7420);
    FUN_01c5c92c(PTR_StringLiteral_287_03ce7580);
    FUN_01c5c92c(PTR_StringLiteral_1088_03ce7588);
    FUN_01c5c92c(PTR_StringLiteral_286_03cbcec0);
    FUN_01c5c92c(PTR_StringLiteral_1_03cb62a8);
    FUN_01c5c92c(PTR_StringLiteral_609_03ce7590);
    DAT_03ef7265 = 1;
  }
  local_80 = 0;
  puStack_78 = (ulong *)0x0;
  local_70 = 0;
  lVar4 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar4,0,0);
  puVar1 = PTR_System_Text_StringBuilder_TypeInfo_03cb73b8;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      return;
    }
    plVar6 = (long *)thunk_FUN_01c8fc48(*(undefined8 *)
                                         PTR_System_Text_StringBuilder_TypeInfo_03cb73b8);
    puVar2 = PTR_StringLiteral_1_03cb62a8;
    System_Text_StringBuilder___ctor(plVar6,*(undefined8 *)PTR_StringLiteral_1_03cb62a8,0);
    plVar7 = (long *)thunk_FUN_01c8fc48(*(undefined8 *)puVar1);
    System_Text_StringBuilder___ctor(plVar7,*(undefined8 *)puVar2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,*(long *)(param_1 + 0x20),
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_GetEnumerator___03ce7548
                );
      local_80 = local_98;
      puVar3 = PTR_StringLiteral_607_03ce7568;
      puVar2 = PTR_StringLiteral_87_03cb79f8;
      puVar1 = PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo_03cb70a0;
      iVar14 = 0;
      local_70 = local_88;
      local_98 = 0;
      puStack_78 = puStack_90;
      puStack_90 = &local_80;
      while (uVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                *(undefined8 *)
                                 PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRLoaderBase_FeatureLoggingInfo>_MoveNext___03ce7538
                               ), lVar4 = local_70, (uVar5 & 1) != 0) {
        lVar8 = FUN_01c5ca18(*(undefined8 *)PTR_string___TypeInfo_03cb5c00,7);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_01cc8040();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar4 + 0x10);
        thunk_FUN_01cc8040();
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_StringLiteral_1088_03ce7588;
        thunk_FUN_01cc8040();
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar4 + 0x18);
        thunk_FUN_01cc8040();
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar3;
        thunk_FUN_01cc8040();
        if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar4 + 0x20);
        thunk_FUN_01cc8040();
        if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_StringLiteral_286_03cbcec0;
        thunk_FUN_01cc8040();
        uVar9 = System_String__Concat(lVar8,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4(uVar9,uVar9);
        }
        System_Text_StringBuilder__Append(plVar6,uVar9,0);
        uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x28),0);
        if ((uVar5 & 1) == 0) {
          uVar9 = System_String__Concat
                            (*(undefined8 *)PTR_StringLiteral_609_03ce7590,
                             *(undefined8 *)(lVar4 + 0x28),
                             *(undefined8 *)PTR_StringLiteral_286_03cbcec0,0);
          System_Text_StringBuilder__Append(plVar6,uVar9,0);
          if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          lVar8 = System_String__Split(*(long *)(lVar4 + 0x28),0x20,0,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar5 = 0;
            uVar13 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5cbdc();
              }
              uVar9 = *(undefined8 *)(lVar8 + 0x20 + uVar5 * 8);
              uVar13 = System_String__IsNullOrWhiteSpace(uVar9,0);
              if ((uVar13 & 1) == 0) {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                uVar13 = UnityEngine_XR_OpenXR_OpenXRLoaderBase__Internal_IsExtensionEnabled(uVar9);
                if ((uVar13 & 1) == 0) {
                  iVar14 = iVar14 + 1;
                  lVar10 = FUN_01c5ca18(*(undefined8 *)PTR_string___TypeInfo_03cb5c00,9);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbd4();
                  }
                  if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_01cc8040();
                  if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x28) = uVar9;
                  thunk_FUN_01cc8040((undefined8 *)(lVar10 + 0x28),uVar9);
                  if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_StringLiteral_1084_03ce7578;
                  thunk_FUN_01cc8040();
                  if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar4 + 0x10);
                  thunk_FUN_01cc8040();
                  if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_StringLiteral_295_03ce7570;
                  thunk_FUN_01cc8040();
                  if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar4 + 0x18);
                  thunk_FUN_01cc8040();
                  if (*(uint *)(lVar10 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)puVar3;
                  thunk_FUN_01cc8040();
                  if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar4 + 0x20);
                  thunk_FUN_01cc8040();
                  if (*(uint *)(lVar10 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbdc();
                  }
                  *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)PTR_StringLiteral_287_03ce7580;
                  thunk_FUN_01cc8040();
                  uVar9 = System_String__Concat(lVar10,0);
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5cbd4(uVar9,uVar9);
                  }
                  System_Text_StringBuilder__Append(plVar7,uVar9,0);
                }
              }
              uVar13 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
        }
        System_Text_StringBuilder__Append(plVar6,*(undefined8 *)PTR_StringLiteral_41_03cc54c0,0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_List_Enumerator<OpenXRLoaderBase_FeatureLoggingInfo>_Dispose___03ce7530
                );
      uVar9 = UnityEngine_XR_OpenXR_DiagnosticReport__GetSection
                        (*(undefined8 *)PTR_StringLiteral_4375_03ce7420);
      UnityEngine_XR_OpenXR_DiagnosticReport__AddSectionBreak();
      puVar1 = PTR_DAT_03cb5cf0;
      local_98 = local_98 & 0xffffffff00000000;
      uVar11 = thunk_FUN_01c8f880(*(undefined8 *)(PTR_DAT_03cb5cf0 + 0x50),&local_98);
      if (plVar6 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        puVar2 = PTR_StringLiteral_549_03ce7560;
        uVar11 = System_String__Format
                           (*(undefined8 *)PTR_StringLiteral_549_03ce7560,uVar11,uVar12,0);
        UnityEngine_XR_OpenXR_DiagnosticReport__AddSectionEntry
                  (uVar9,*(undefined8 *)PTR_StringLiteral_2766_03ce7550,uVar11);
        UnityEngine_XR_OpenXR_DiagnosticReport__AddSectionBreak(uVar9);
        local_9c = iVar14;
        uVar11 = thunk_FUN_01c8f880(*(undefined8 *)(puVar1 + 0x50),&local_9c);
        if (plVar7 != (long *)0x0) {
          uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          uVar11 = System_String__Format(*(undefined8 *)puVar2,uVar11,uVar12,0);
          UnityEngine_XR_OpenXR_DiagnosticReport__AddSectionEntry
                    (uVar9,*(undefined8 *)PTR_StringLiteral_4776_03ce7558,uVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


