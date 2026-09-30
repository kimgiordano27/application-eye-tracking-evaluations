/*
FUNCTION_NAME: FUN_07811520
ENTRY_POINT: 07811520
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_07811520(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_07d96030;
  if ((DAT_0827231b & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98538);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_TryGetValue__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_get_Keys__);
    FUN_0373b518(PTR_DAT_07d98560);
    FUN_0373b518(Method_System_Collections_Generic_HashSet_Enumerator<GraphReference>_get_Current__)
    ;
    FUN_0373b518(PTR_DAT_07d96fe8);
    FUN_0373b518(PTR_DAT_07d86c58);
    FUN_0373b518(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    FUN_0373b518(PTR_DAT_07d96030);
    FUN_0373b518(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                );
    DAT_0827231b = 1;
  }
  puVar6 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  local_68 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_07716630(param_1,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar8 = *(long *)puVar6;
  }
  FUN_0771878c(param_1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x1c8),0);
  lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_07716630(lVar8,0);
  if ((lVar8 != 0) && (lVar9 = FUN_07716374(lVar8,0), puVar2 = PTR_DAT_07d86c58, lVar9 != 0)) {
    lVar12 = *(long *)(lVar9 + 0x10);
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d0);
    lVar14 = *(long *)PTR_DAT_07d86c58;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar13 = uVar11;
        thunk_FUN_037aeb94(puVar13);
      }
      else {
        FUN_049ceef4(lVar9,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      FUN_077162ac(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d0),0);
      *(long *)(param_1 + 0x508) = lVar8;
      thunk_FUN_037aeb94((long *)(param_1 + 0x508),lVar8);
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
      FUN_07716630(lVar8,0);
      if (lVar8 != 0) {
        FUN_077162ac(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x220),0);
        lVar9 = FUN_07716374(lVar8,0);
        if (lVar9 != 0) {
          lVar12 = *(long *)(lVar9 + 0x10);
          uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x220);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar13 = uVar11;
              thunk_FUN_037aeb94(puVar13);
            }
            else {
              FUN_049ceef4(lVar9,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            plVar10 = (long *)(param_1 + 0x4f8);
            *(long *)(param_1 + 0x4f8) = lVar8;
            thunk_FUN_037aeb94(plVar10,lVar8);
            if (*(long *)(param_1 + 0x4f8) != 0) {
              FUN_0771878c(*(long *)(param_1 + 0x4f8),
                           *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x220),0);
              lVar9 = *plVar10;
              lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
              FUN_07716630(lVar8,0);
              if (lVar8 != 0) {
                FUN_077162ac(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x228),0);
                lVar12 = FUN_07716374(lVar8,0);
                if (lVar12 != 0) {
                  lVar14 = *(long *)(lVar12 + 0x10);
                  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x228);
                  lVar15 = *(long *)puVar2;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  puVar4 = 
                  Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                  ;
                  if (lVar14 != 0) {
                    uVar1 = *(uint *)(lVar12 + 0x18);
                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                      puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar13 = uVar11;
                      thunk_FUN_037aeb94(puVar13);
                    }
                    else {
                      FUN_049ceef4(lVar12,uVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar12 = FUN_07716374(lVar8,0);
                    uVar11 = System_Convert__ToInt32
                                       (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x228),
                                        *(undefined8 *)puVar4,0);
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      lVar15 = *(long *)puVar2;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_037aeb94();
                        }
                        else {
                          FUN_049ceef4(lVar12,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        if (lVar9 != 0) {
                          FUN_0771dbc4(lVar9,lVar8,0);
                          lVar9 = *plVar10;
                          lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
                          FUN_07716630(lVar8,0);
                          if (lVar8 != 0) {
                            FUN_077162ac(lVar8,*(undefined8 *)
                                                (*(long *)(*(long *)puVar6 + 0xb8) + 0x228),0);
                            lVar12 = FUN_07716374(lVar8,0);
                            if (lVar12 != 0) {
                              lVar14 = *(long *)(lVar12 + 0x10);
                              uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x228);
                              lVar15 = *(long *)puVar2;
                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                              if (lVar14 != 0) {
                                uVar1 = *(uint *)(lVar12 + 0x18);
                                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                  puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                  *puVar13 = uVar11;
                                  thunk_FUN_037aeb94(puVar13);
                                }
                                else {
                                  FUN_049ceef4(lVar12,uVar11,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                puVar4 = 
                                Method_System_Collections_Generic_HashSet_Enumerator<GraphReference>_get_Current__
                                ;
                                if (lVar9 != 0) {
                                  FUN_0771dbc4(lVar9,lVar8,0);
                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
                                  FUN_077e832c(lVar8,0);
                                  if (lVar8 != 0) {
                                    FUN_077162ac(lVar8,*(undefined8 *)
                                                        (*(long *)(*(long *)puVar6 + 0xb8) + 0x1d8),
                                                 0);
                                    lVar9 = FUN_07716374(lVar8,0);
                                    if (lVar9 != 0) {
                                      lVar12 = *(long *)(lVar9 + 0x10);
                                      uVar11 = *(undefined8 *)
                                                (*(long *)(*(long *)puVar6 + 0xb8) + 0x1d8);
                                      lVar14 = *(long *)puVar2;
                                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                      if (lVar12 != 0) {
                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                          puVar13 = (undefined8 *)
                                                    (lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                          *puVar13 = uVar11;
                                          thunk_FUN_037aeb94(puVar13);
                                        }
                                        else {
                                          FUN_049ceef4(lVar9,uVar11,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar9 = FUN_07716374(lVar8,0);
                                        if (lVar9 != 0) {
                                          lVar12 = *(long *)(lVar9 + 0x10);
                                          uVar11 = *(undefined8 *)
                                                    (*(long *)(*(long *)puVar6 + 0xb8) + 0x1e0);
                                          lVar14 = *(long *)puVar2;
                                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                          if (lVar12 != 0) {
                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                              puVar13 = (undefined8 *)
                                                        (lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                              *puVar13 = uVar11;
                                              thunk_FUN_037aeb94(puVar13);
                                            }
                                            else {
                                              FUN_049ceef4(lVar9,uVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar14 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(param_1 + 0x510) = lVar8;
                                            thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x510),lVar8
                                                              );
                                            puVar4 = PTR_DAT_07d96fe8;
                                            if (*(long *)(param_1 + 0x508) != 0) {
                                              FUN_0771dbc4(*(long *)(param_1 + 0x508),
                                                           *(undefined8 *)(param_1 + 0x510),0);
                                              lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
                                              FUN_077eea90(lVar8,0);
                                              if (lVar8 != 0) {
                                                FUN_077162ac(lVar8,*(undefined8 *)
                                                                    (*(long *)(*(long *)puVar6 +
                                                                              0xb8) + 0x1f0),0);
                                                lVar9 = FUN_07716374(lVar8,0);
                                                if (lVar9 != 0) {
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar6 + 0xb8) +
                                                            0x1f0);
                                                  lVar14 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      puVar13 = (undefined8 *)
                                                                (lVar12 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                                      *puVar13 = uVar11;
                                                      thunk_FUN_037aeb94(puVar13);
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(param_1 + 0x518) = lVar8;
                                                  thunk_FUN_037aeb94(param_1 + 0x518,lVar8);
                                                  puVar5 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                                                  ;
                                                  puVar4 = PTR_DAT_07d98560;
                                                  if (*(long *)(param_1 + 0x508) != 0) {
                                                    FUN_0771dbc4(*(long *)(param_1 + 0x508),
                                                                 *(undefined8 *)(param_1 + 0x518),0)
                                                    ;
                                                    lVar8 = *(long *)(param_1 + 0x508);
                                                    uVar11 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_0440b9a8(uVar11,param_1,
                                                                 *(undefined8 *)puVar5,0);
                                                    puVar5 = PTR_DAT_07d98538;
                                                    if (lVar8 != 0) {
                                                      FUN_03efc8a0(lVar8,uVar11,0,
                                                                   *(undefined8 *)PTR_DAT_07d98538);
                                                      lVar9 = *(long *)(param_1 + 0x508);
                                                      lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                  puVar3);
                                                      FUN_07716630(lVar8,0);
                                                      if (lVar8 != 0) {
                                                        FUN_077162ac(lVar8,*(undefined8 *)
                                                                            (*(long *)(*(long *)
                                                  puVar6 + 0xb8) + 0x200),0);
                                                  lVar12 = FUN_07716374(lVar8,0);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0x200);
                                                    lVar15 = *(long *)puVar2;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        puVar13 = (undefined8 *)
                                                                  (lVar14 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                        *puVar13 = uVar11;
                                                        thunk_FUN_037aeb94(puVar13);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (lVar9 != 0) {
                                                    FUN_0771dbc4(lVar9,lVar8,0);
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07716630(lVar8,0);
                                                    if (lVar8 != 0) {
                                                      FUN_077162ac(lVar8,*(undefined8 *)
                                                                          (*(long *)(*(long *)puVar6
                                                                                    + 0xb8) + 0x238)
                                                                   ,0);
                                                      lVar9 = FUN_07716374(lVar8,0);
                                                      if (lVar9 != 0) {
                                                        lVar12 = *(long *)(lVar9 + 0x10);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar6 + 0xb8)
                                                                  + 0x238);
                                                        lVar14 = *(long *)puVar2;
                                                        *(int *)(lVar9 + 0x1c) =
                                                             *(int *)(lVar9 + 0x1c) + 1;
                                                        puVar7 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      puVar13 = (undefined8 *)
                                                                (lVar12 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                                      *puVar13 = uVar11;
                                                      thunk_FUN_037aeb94(puVar13);
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(param_1 + 0x500) = lVar8;
                                                  thunk_FUN_037aeb94(param_1 + 0x500,lVar8);
                                                  lVar8 = *(long *)(param_1 + 0x500);
                                                  uVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_0440b9a8(uVar11,param_1,*(undefined8 *)puVar7,
                                                               0);
                                                  if (lVar8 != 0) {
                                                    FUN_03efc8a0(lVar8,uVar11,0,
                                                                 *(undefined8 *)puVar5);
                                                    local_68 = *(undefined8 *)(param_1 + 0x440);
                                                    FUN_07721998(&local_68,
                                                                 *(undefined8 *)(param_1 + 0x508),0)
                                                    ;
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07716630(lVar8,0);
                                                    if (lVar8 != 0) {
                                                      FUN_077162ac(lVar8,*(undefined8 *)
                                                                          (*(long *)(*(long *)puVar6
                                                                                    + 0xb8) + 0x208)
                                                                   ,0);
                                                      lVar9 = FUN_07716374(lVar8,0);
                                                      if (lVar9 != 0) {
                                                        lVar12 = *(long *)(lVar9 + 0x10);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar6 + 0xb8)
                                                                  + 0x208);
                                                        lVar14 = *(long *)puVar2;
                                                        *(int *)(lVar9 + 0x1c) =
                                                             *(int *)(lVar9 + 0x1c) + 1;
                                                        puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_get_Keys__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      puVar13 = (undefined8 *)
                                                                (lVar12 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                                      *puVar13 = uVar11;
                                                      thunk_FUN_037aeb94(puVar13);
                                                    }
                                                    else {
                                                      FUN_049ceef4(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  FUN_07712384(lVar8,*(undefined8 *)
                                                                      (param_1 + 0x508),0);
                                                  *(long *)(param_1 + 0x4f0) = lVar8;
                                                  thunk_FUN_037aeb94(param_1 + 0x4f0,lVar8);
                                                  local_68 = *(undefined8 *)(param_1 + 0x440);
                                                  FUN_07721998(&local_68,
                                                               *(undefined8 *)(param_1 + 0x4f0),0);
                                                  FUN_07810fb8(param_1,param_2);
                                                  uStack_88 = param_3[1];
                                                  local_90 = *param_3;
                                                  uStack_78 = param_3[3];
                                                  uStack_80 = param_3[2];
                                                  FUN_07811100(param_1,&local_90);
                                                  uVar16 = *(undefined8 *)(param_1 + 0x4f8);
                                                  uVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07812050();
                                                  *(undefined8 *)(param_1 + 0x520) = uVar11;
                                                  thunk_FUN_037aeb94(param_1 + 0x520,uVar11);
                                                  FUN_07769880(uVar16,uVar11,0);
                                                  lVar8 = *(long *)(param_1 + 0x508);
                                                  uVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_0440b9a8(uVar11,param_1,*(undefined8 *)puVar2,
                                                               0);
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_TryGetValue__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    FUN_03efc8a0(lVar8,uVar11,0,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<Face,_FaceRebuildData>_TryGetValue__
                                                  );
                                                  lVar8 = *(long *)puVar2;
                                                  if (*(int *)(lVar8 + 0xe4) == 0) {
                                                    thunk_FUN_03798b70();
                                                    lVar8 = *(long *)puVar2;
                                                  }
                                                  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
                                                  if (lVar9 == 0) {
                                                    if (*(int *)(lVar8 + 0xe4) == 0) {
                                                      thunk_FUN_03798b70();
                                                      lVar8 = *(long *)puVar2;
                                                    }
                                                    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
                                                    lVar9 = thunk_FUN_037788cc(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_0440b9a8(lVar9,uVar11,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                                                  ,0);
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 8);
                                                  *plVar10 = lVar9;
                                                  thunk_FUN_037aeb94(plVar10,lVar9);
                                                  }
                                                  FUN_03efc8a0(param_1,lVar9,0,*(undefined8 *)puVar6
                                                              );
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


