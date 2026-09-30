/*
FUNCTION_NAME: FUN_024b1944
ENTRY_POINT: 024b1944
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_024b1944(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  long local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar8 = DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MeshChannels_TypeInfo;
  puVar7 = PTR_DAT_033ea8a0;
                    /* try { // try from 024b1944 to 025b1947 has its CatchHandler @ 024b3944 */
                    /* try { // try from 024b1948 to 025b1957 has its CatchHandler @ 024b395c */
                    /* try { // try from 024b1968 to 025b1973 has its CatchHandler @ 024b3950 */
  if ((DAT_037826de & 1) == 0) {
                    /* try { // try from 024b1984 to 025b1987 has its CatchHandler @ 024b3928 */
                    /* try { // try from 024b1988 to 025b1997 has its CatchHandler @ 024b394c */
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_1944);
                    /* try { // try from 024b19a0 to 025b19ab has its CatchHandler @ 024b392c */
    thunk_FUN_00d48444(PTR_DAT_033ee488);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideMainDom__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<JsonSchemaModel>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__);
    thunk_FUN_00d48444(PTR_DAT_033eafe8);
    thunk_FUN_00d48444(StringLiteral_12913);
    thunk_FUN_00d48444(StringLiteral_13412);
    thunk_FUN_00d48444(System_Collections_Generic_List<XRGazeAssistance_InteractorData>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<NoteRecorder_NoteEventData>__ctor__);
    thunk_FUN_00d48444(StringLiteral_7029);
    thunk_FUN_00d48444(StringLiteral_1259);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_10650);
    thunk_FUN_00d48444(Oculus_Platform_LogEventName_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_CreateSceneDataResults>_SetException__
                      );
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MeshChannels_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputAction>_Dispose__
                      );
    thunk_FUN_00d48444(StringLiteral_2851);
    thunk_FUN_00d48444(StringLiteral_3143);
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6
                      );
    DAT_037826de = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)puVar8;
  plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,5);
  puVar7 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputAction>_Dispose__;
  if (plVar11 == (long *)0x0) goto LAB_024b228c;
  if ((*(long *)
        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputAction>_Dispose__ !=
       0) && (lVar12 = thunk_FUN_00d6225c(*(long *)
                                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputAction>_Dispose__
                                          ,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
LAB_024b2488:
    uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar14,0);
  }
  if ((int)plVar11[3] == 0) goto LAB_024b2484;
  plVar11[4] = *(long *)puVar7;
  lVar12 = FUN_0268b6ac(param_1,0);
  if ((lVar12 != 0) &&
     (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
  goto LAB_024b2488;
  puVar7 = StringLiteral_2851;
  uVar18 = *(uint *)(plVar11 + 3);
  if (uVar18 < 2) {
LAB_024b2484:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar11[5] = lVar12;
  lVar12 = *(long *)puVar7;
  if (lVar12 != 0) {
    lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
    if (lVar12 == 0) goto LAB_024b2488;
    uVar18 = *(uint *)(plVar11 + 3);
  }
  if (uVar18 < 3) goto LAB_024b2484;
  plVar11[6] = *(long *)puVar7;
  lVar12 = *(long *)(param_1 + 0x30);
  if (lVar12 != 0) {
    lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
    if (lVar13 == 0) goto LAB_024b2488;
    uVar18 = *(uint *)(plVar11 + 3);
  }
  puVar7 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  if (uVar18 < 4) goto LAB_024b2484;
  plVar11[7] = lVar12;
  lVar12 = *(long *)puVar7;
  if (lVar12 != 0) {
    lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
    if (lVar12 == 0) goto LAB_024b2488;
    uVar18 = *(uint *)(plVar11 + 3);
  }
  puVar8 = StringLiteral_302;
  if (uVar18 < 5) goto LAB_024b2484;
  plVar11[8] = *(long *)puVar7;
  uVar14 = FUN_01600844(plVar11,0);
  lVar12 = *(long *)puVar8;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar12);
  }
  FUN_02660eb4(uVar14,param_1,0);
  puVar7 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  lVar12 = param_1 + 0x50;
  FUN_026fd0f8(lVar12,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x10),0);
  FUN_026fd108(lVar12,**(undefined8 **)(*(long *)puVar7 + 0xb8),0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  fVar20 = *(float *)(*(long *)(param_1 + 0xf8) + 0x18);
  iVar19 = -0x80000000;
  if (fVar20 != INFINITY) {
    iVar19 = (int)fVar20;
  }
  FUN_026fd118(lVar12,iVar19,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd128(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x1c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd138(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x24),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd148(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x2c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd158(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x30),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd168(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x38),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd178(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x28),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd188(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x34),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd198(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x3c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd1a8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd1b8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x40),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd1c8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd1d8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x48),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd1e8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x4c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd1f8(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x50),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd200(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x54),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_024b228c;
  FUN_026fd210(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x58),lVar12,0);
  plVar11 = *(long **)(param_1 + 0xd8);
  if ((plVar11 == (long *)0x0) || (plVar11[3] == 0)) {
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,1);
    *(long **)(param_1 + 0xd8) = plVar11;
    if (plVar11 == (long *)0x0) goto LAB_024b228c;
  }
  lVar13 = *(long *)(param_1 + 0x100);
  if ((lVar13 != 0) &&
     (lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
  goto LAB_024b2488;
  if ((int)plVar11[3] == 0) goto LAB_024b2484;
  plVar11[4] = lVar13;
  lVar13 = *(long *)(param_1 + 0xf8);
  if (lVar13 == 0) goto LAB_024b228c;
  fVar20 = (float)*(undefined8 *)(lVar13 + 0x60);
  fVar21 = (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
  uVar16 = CONCAT44((int)fVar21,(int)fVar20);
  *(ulong *)(param_1 + 0x108) =
       uVar16 ^ (uVar16 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar21 == INFINITY),-(uint)(fVar20 == INFINITY));
  uVar18 = *(uint *)(param_1 + 400);
  iVar19 = -0x80000000;
  if (*(float *)(lVar13 + 0x5c) != INFINITY) {
    iVar19 = (int)*(float *)(lVar13 + 0x5c);
  }
  *(int *)(param_1 + 0x110) = iVar19;
  if ((uVar18 < 8) && ((0xcfU >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(&DAT_029587ec + (long)(int)uVar18 * 4);
  }
  lVar13 = *(long *)(param_1 + 0x1a0);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar13 + 0x18) < 5) goto LAB_024b2484;
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 == 0) goto LAB_024b228c;
    if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_024b2484;
    uVar14 = *(undefined8 *)(lVar13 + 0x60);
    *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(lVar13 + 0x68);
    *(undefined8 *)(lVar15 + 0x60) = uVar14;
    lVar13 = *(long *)(param_1 + 0x1a0);
    if (lVar13 == 0) goto LAB_024b228c;
    if (*(uint *)(lVar13 + 0x18) < 8) goto LAB_024b2484;
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 == 0) goto LAB_024b228c;
    if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_024b2484;
    uVar14 = *(undefined8 *)(lVar13 + 0x90);
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar13 + 0x98);
    *(undefined8 *)(lVar15 + 0x90) = uVar14;
  }
  lVar13 = *(long *)(param_1 + 0x130);
  if ((lVar13 != 0) && (iVar19 = *(int *)(lVar13 + 0x18), 0 < iVar19)) {
    if (*(long *)(param_1 + 0x138) == 0) {
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_1259);
      if (lVar15 == 0) goto LAB_024b228c;
      FUN_01320ebc(lVar15,iVar19,*(undefined8 *)StringLiteral_12913);
      lVar13 = *(long *)(param_1 + 0x130);
      *(long *)(param_1 + 0x138) = lVar15;
      if (lVar13 == 0) goto LAB_024b228c;
    }
    puVar10 = Method_SoccerBlocker_HideMainDom__;
    puVar9 = Method_UnityEngine_Events_UnityEvent<NoteRecorder_NoteEventData>__ctor__;
    iVar19 = 0;
    do {
      if (*(int *)(lVar13 + 0x18) <= iVar19) goto LAB_024b1fd8;
      lVar15 = *(long *)(param_1 + 0x138);
      FUN_0132138c(lVar13,iVar19,&local_98,*(undefined8 *)puVar9);
      if (lVar15 == 0) break;
      FUN_00cb6ed4(lVar15,local_98,*(undefined8 *)puVar10);
      lVar13 = *(long *)(param_1 + 0x130);
      iVar19 = iVar19 + 1;
    } while (lVar13 != 0);
    goto LAB_024b228c;
  }
LAB_024b1fd8:
  lVar13 = *(long *)(param_1 + 0x148);
  if (lVar13 == 0) {
    uVar16 = FUN_015fe7e8(0,**(undefined8 **)(*(long *)puVar7 + 0xb8),0);
    puVar9 = StringLiteral_3143;
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_CreateSceneDataResults>_SetException__
    ;
    if ((uVar16 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 0x148);
      goto UnityEngine_XR_Interaction_Toolkit_FocusExitEventArgs__set_interactableObject;
    }
    uVar14 = FUN_0268b6ac(param_1,0);
    uVar14 = FUN_01600424(*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar9,0);
    lVar13 = *(long *)puVar8;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar13);
    }
    FUN_0266185c(uVar14,param_1,0);
  }
  else {
UnityEngine_XR_Interaction_Toolkit_FocusExitEventArgs__set_interactableObject:
    *(long *)(param_1 + 0x38) = lVar13;
  }
  lVar13 = *(long *)(param_1 + 0xb0);
  if (lVar13 != 0) {
    lVar15 = *(long *)PTR_DAT_033eafe8;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar19 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar19) {
        FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
      }
    }
    lVar13 = *(long *)(param_1 + 0xc0);
    if (lVar13 != 0) {
      lVar15 = *(long *)Method_System_Collections_Generic_HashSet<Action>_GetEnumerator__;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
      if ((uVar16 & 1) == 0) {
        *(undefined4 *)(lVar13 + 0x18) = 0;
      }
      else {
        iVar19 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = 0;
        if (0 < iVar19) {
          FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
        }
      }
      puVar8 = StringLiteral_7029;
      puVar7 = PTR_DAT_033ee488;
      lVar13 = *(long *)(param_1 + 0x118);
      if (lVar13 != 0) {
        bVar6 = false;
        iVar19 = 0;
        do {
          if (*(int *)(lVar13 + 0x18) <= iVar19) {
            if (!bVar6) {
              uVar14 = FUN_0268b6ac(param_1,0);
              uVar14 = FUN_01600424(*(undefined8 *)
                                     Field_<PrivateImplementationDetails>_E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6
                                    ,uVar14,*(undefined8 *)
                                             System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                                    ,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar14,0);
              fVar20 = (float)FUN_026fd140(lVar12,0);
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              FUN_026fd47c(0,0,0,0,fVar20 / 5.0,&local_98,0);
              if (*(int *)(*(long *)StringLiteral_1944 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar23 = FUN_026fd238(0);
              lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
              if (lVar12 == 0) break;
              uStack_c8 = uStack_90;
              local_d0 = local_98;
              local_c0 = local_88;
              FUN_026fd73c(0x3f800000,lVar12,0,&local_d0,auVar23._0_8_,auVar23._8_8_,0,0);
              if (*(long *)(param_1 + 0xb0) == 0) break;
              FUN_00cb72b4(*(long *)(param_1 + 0xb0),lVar12,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__);
              lVar15 = *(long *)(param_1 + 0xc0);
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10650);
              if ((lVar13 == 0) || (FUN_024aadb0(lVar13,0x20,param_1,lVar12), lVar15 == 0)) break;
              FUN_00cb70c4(lVar15,lVar13,
                           *(undefined8 *)Method_System_Linq_Enumerable_First<JsonSchemaModel>__);
            }
            FUN_024b0f64(param_1);
            return;
          }
          FUN_0132138c(lVar13,iVar19,&local_98,*(undefined8 *)puVar8);
          lVar13 = local_98;
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          if (lVar15 == 0) break;
          FUN_026fd688(lVar15,0);
          iVar19 = iVar19 + 1;
          FUN_026fd624(lVar15,iVar19,0);
          if (lVar13 == 0) break;
          fVar20 = *(float *)(lVar13 + 0x18) + *(float *)(lVar13 + 0x20) + 0.5;
          fVar21 = *(float *)(lVar13 + 0x1c) + 0.5;
          iVar1 = -0x80000000;
          if (*(float *)(lVar13 + 0x14) != INFINITY) {
            iVar1 = (int)*(float *)(lVar13 + 0x14);
          }
          fVar22 = *(float *)(lVar13 + 0x20) + 0.5;
          iVar2 = -0x80000000;
          if (fVar20 != INFINITY) {
            iVar2 = (int)fVar20;
          }
          iVar3 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar3 = (int)fVar21;
          }
          iVar4 = -0x80000000;
          if (fVar22 != INFINITY) {
            iVar4 = (int)fVar22;
          }
          local_80 = 0;
          uStack_78 = 0;
          FUN_026fd290(&local_80,iVar1,*(int *)(param_1 + 0x10c) - iVar2,iVar3,iVar4,0);
          FUN_026fd660(lVar15,local_80,uStack_78,0);
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          FUN_026fd47c(*(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar13 + 0x20),
                       *(undefined4 *)(lVar13 + 0x24),*(undefined4 *)(lVar13 + 0x28),
                       *(undefined4 *)(lVar13 + 0x2c),&local_98,0);
          uStack_a8 = uStack_90;
          local_b0 = local_98;
          local_a0 = local_88;
          FUN_026fd640(lVar15,&local_b0,0);
          FUN_026fd670(*(undefined4 *)(lVar13 + 0x30),lVar15,0);
          FUN_026fd680(lVar15,0,0);
          if (*(long *)(param_1 + 0xb0) == 0) break;
          FUN_00cb72b4(*(long *)(param_1 + 0xb0),lVar15,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<CyclingWordSet>_GetEnumerator__);
          uVar5 = *(undefined4 *)(lVar13 + 0x10);
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10650);
          if (lVar17 == 0) break;
          FUN_024aadb0(lVar17,uVar5,param_1,lVar15);
          if (*(long *)(param_1 + 0xc0) == 0) break;
          bVar6 = (bool)(bVar6 | *(int *)(lVar13 + 0x10) == 0x20);
          FUN_00cb70c4(*(long *)(param_1 + 0xc0),lVar17,
                       *(undefined8 *)Method_System_Linq_Enumerable_First<JsonSchemaModel>__);
          lVar13 = *(long *)(param_1 + 0x118);
        } while (lVar13 != 0);
      }
    }
  }
LAB_024b228c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


