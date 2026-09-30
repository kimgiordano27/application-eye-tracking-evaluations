/*
FUNCTION_NAME: FUN_05d003a8
ENTRY_POINT: 05d003a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05d003a8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar4 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                    /* try { // try from 05d003a8 to 05e003b7 has its CatchHandler @ 05d003bc */
  puVar3 = OVRPlugin_OVRP_1_102_0_TypeInfo;
                    /* catch() { ... } // from try @ 05d00364 with catch @ 05d003bc
                       catch() { ... } // from try @ 05d003a8 with catch @ 05d003bc */
                    /* try { // try from 05d003c0 to 05e003c3 has its CatchHandler @ 05d004a4 */
                    /* try { // try from 05d003c4 to 05e003eb has its CatchHandler @ 05cfffbc */
                    /* catch() { ... } // from try @ 05d00174 with catch @ 05d003c8 */
                    /* catch() { ... } // from try @ 05d00328 with catch @ 05d003cc */
                    /* catch() { ... } // from try @ 05d00320 with catch @ 05d003d0 */
                    /* catch() { ... } // from try @ 05d001b8 with catch @ 05d003d4 */
  if ((DAT_06dc2e24 & 1) == 0) {
                    /* try { // try from 05d003ec to 05e00403 has its CatchHandler @ 05d00494 */
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__);
    FUN_02d965b8(PTR_DAT_06a0ae00);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<RTHandle>_CopyTo__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1a9f0);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<RTHandle>_GetEnumerator__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<RTHandle>_Remove__);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Http_HttpException<T>_var);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<RTHandle>_get_Count__);
    FUN_02d965b8(PTR_DAT_06a0e100);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Texture,_DynamicAtlas_TextureInfo>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<ScheduledItem>__ctor__);
    DAT_06dc2e24 = 1;
  }
  puVar5 = Method_System_Collections_Generic_HashSet<RTHandle>_CopyTo__;
  puVar13 = (undefined8 *)(param_1 + 0x60);
  *puVar13 = *(undefined8 *)puVar4;
  LeanTween__value(puVar13);
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *(undefined4 *)(param_1 + 0x9c) = 100000;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05cf07c4(param_1,param_2,param_3,param_4,0);
  uVar14 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar14 = FUN_054f73b4(uVar14,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar9 = (long *)FUN_053f0e78(param_2,*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<RTHandle>_Remove__
                                ,uVar14,0);
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar11 = *(long *)Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
    bVar2 = *(byte *)(lVar11 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != lVar11)) goto LAB_05d006e4;
    *(long **)(param_1 + 0x58) = plVar9;
    if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != lVar11)) goto LAB_05d006e4;
  }
  puVar4 = Method_System_Collections_Generic_HashSet<ScheduledItem>__ctor__;
  puVar3 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  LeanTween__value(param_1 + 0x58,plVar9);
  uVar14 = FUN_054f73b4(*(undefined8 *)puVar3,0);
  lVar11 = FUN_053f0e78(param_2,*(undefined8 *)puVar4,uVar14,0);
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__;
  if (lVar11 == 0) {
    lVar10 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    uVar14 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__;
    lVar10 = thunk_FUN_02dd3048(lVar11,uVar14);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(lVar11,uVar14);
    }
    uVar14 = *(undefined8 *)puVar3;
    *(long *)(param_1 + 0x70) = lVar10;
    lVar10 = thunk_FUN_02dd3048(lVar11,uVar14);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(lVar11,uVar14);
    }
  }
  puVar4 = PTR_DAT_06a1a9f0;
  puVar3 = PTR_DAT_06a0ae00;
  LeanTween__value(param_1 + 0x70,lVar10);
  uVar14 = FUN_054f73b4(*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_053f0e78(param_2,*(undefined8 *)puVar4,uVar14,0);
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
LAB_05d006f4:
    puVar7 = Method_System_Collections_Generic_HashSet<RTHandle>_get_Count__;
    puVar6 = Method_System_Collections_Generic_HashSet<RTHandle>_GetEnumerator__;
    puVar5 = Method_System_Collections_Generic_Dictionary<Texture,_DynamicAtlas_TextureInfo>__ctor__
    ;
    puVar4 = Unity_Services_CloudSave_Internal_Http_HttpException<T>_var;
    puVar3 = PTR_DAT_06a0e100;
    LeanTween__value(param_1 + 0xa0,plVar9);
    uVar14 = FUN_053f3324(param_2,*(undefined8 *)puVar6,0);
    *(undefined8 *)(param_1 + 0x38) = uVar14;
    LeanTween__value((undefined8 *)(param_1 + 0x38),uVar14);
    uVar14 = FUN_053f3324(param_2,*(undefined8 *)puVar3,0);
    *(undefined8 *)(param_1 + 0x60) = uVar14;
    LeanTween__value(puVar13,uVar14);
    uVar14 = FUN_053f30a4(param_2,*(undefined8 *)puVar5,0);
    uVar12 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar14;
    uVar8 = FUN_053f2f64(param_2,uVar12,0);
    uVar14 = *(undefined8 *)puVar7;
    *(undefined4 *)(param_1 + 0x9c) = uVar8;
    uVar8 = FUN_053f2f64(param_2,uVar14,0);
    *(undefined4 *)(param_1 + 0x50) = uVar8;
    return;
  }
  lVar11 = *(long *)PTR_DAT_069ff488;
  bVar2 = *(byte *)(lVar11 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == lVar11)) {
    *(long **)(param_1 + 0xa0) = plVar9;
    if ((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == lVar11)) goto LAB_05d006f4;
  }
LAB_05d006e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96be0(plVar9);
}


