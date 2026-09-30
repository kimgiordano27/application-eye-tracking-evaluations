/*
FUNCTION_NAME: FUN_0203a204
ENTRY_POINT: 0203a204
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0203a51c) */
/* WARNING: Removing unreachable block (ram,0x0203a700) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0203a204(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  bool bVar14;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_44;
  
                    /* try { // try from 0203a210 to 0213a21f has its CatchHandler @ 0203a3b4 */
  if ((DAT_03780a5e & 1) == 0) {
                    /* try { // try from 0203a238 to 0213a247 has its CatchHandler @ 0203a3b0 */
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(StringLiteral_10310);
                    /* try { // try from 0203a258 to 0213a273 has its CatchHandler @ 0203a3ac */
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
                    /* try { // try from 0203a274 to 0213a28f has its CatchHandler @ 0203a3a8 */
    thunk_FUN_00d48444(StringLiteral_268);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_68__);
    thunk_FUN_00d48444(Sirenix_Serialization_RegisterFormatterAttribute_var);
                    /* try { // try from 0203a290 to 0213a2ab has its CatchHandler @ 0203a3a4 */
    thunk_FUN_00d48444(PTR_DAT_033f5da8);
    thunk_FUN_00d48444(StringLiteral_110);
                    /* try { // try from 0203a2ac to 0213a2c7 has its CatchHandler @ 0203a3a0 */
    thunk_FUN_00d48444(PTR_DAT_033ee290);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
                    /* try { // try from 0203a2c8 to 0213a2cb has its CatchHandler @ 0203a3b4 */
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
                      );
                    /* try { // try from 0203a2cc to 0213a2ff has its CatchHandler @ 0203a3ac */
    DAT_03780a5e = 1;
  }
  local_44 = 0;
  local_60 = 0;
  local_58 = 0;
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 4);
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  puVar4 = Sirenix_Serialization_RegisterFormatterAttribute_var;
  if ((uVar1 >> 3 & 1) != 0) {
    local_44 = FUN_02039480();
                    /* try { // try from 0203a300 to 0213a333 has its CatchHandler @ 0203a3a8 */
    uVar6 = FUN_0176eb1c(&local_44,0);
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar4,uVar6,0);
                    /* try { // try from 0203a334 to 0213a367 has its CatchHandler @ 0203a3a4 */
    (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x200));
    uVar1 = *(uint *)(param_1 + 4);
  }
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x1d8))
              (param_1,*(undefined8 *)StringLiteral_110,*(undefined8 *)(*param_1 + 0x1e0));
    plVar7 = (long *)FUN_020393d0();
    puVar4 = StringLiteral_10310;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 0203a368 to 0213a39b has its CatchHandler @ 0203a3a0 */
    plVar7 = (long *)(**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar3 = PTR_DAT_033f38b8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar14 = true;
    do {
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0203a3e4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar10,0);
LAB_0203a3e4:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar4);
        if (plVar7 == (long *)0x0) goto LAB_0203a510;
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar4;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 == 0) goto LAB_0203a4e8;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0203a4d0;
      }
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0203a444;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar10,1);
LAB_0203a444:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (!bVar14) {
        (**(code **)(*param_1 + 0x1d8))
                  (param_1,*(undefined8 *)puVar3,*(undefined8 *)(*param_1 + 0x1e0));
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      (**(code **)(*param_1 + 0x1d8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x1e0));
      bVar14 = false;
    } while( true );
  }
  goto LAB_0203a548;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0203a4d0:
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0203a504;
    }
  }
LAB_0203a4e8:
  puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar10,0);
LAB_0203a504:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0203a510:
  (**(code **)(*param_1 + 0x1f8))
            (param_1,**(undefined8 **)
                       (*(long *)
                         System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                       + 0xb8),*(undefined8 *)(*param_1 + 0x200));
  uVar1 = *(uint *)(param_1 + 4);
LAB_0203a548:
  puVar4 = StringLiteral_268;
  plVar7 = (long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  plVar9 = (long *)StringLiteral_2672;
  if ((uVar1 >> 4 & 1) != 0) {
    uVar6 = FUN_020394d4();
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar4,uVar6,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x200));
    uVar1 = *(uint *)(param_1 + 4);
    plVar7 = (long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    plVar9 = (long *)StringLiteral_2672;
  }
  puVar8 = (undefined8 *)PTR_DAT_033ee290;
  Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ = (undefined *)plVar7;
  StringLiteral_2672 = (undefined *)plVar9;
  if ((uVar1 >> 1 & 1) != 0) {
    local_58 = FUN_020393e8(param_2);
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*plVar7);
    }
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_68__;
    puVar4 = 
    System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_TypeInfo
    ;
    uVar6 = FUN_01731954(0);
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(*plVar9);
    }
    uVar6 = FUN_017507b8(&local_58,*(undefined8 *)puVar3,uVar6,0);
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar4,uVar6,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x200));
    uVar1 = *(uint *)(param_1 + 4);
    puVar8 = (undefined8 *)PTR_DAT_033ee290;
  }
  PTR_DAT_033ee290 = (undefined *)puVar8;
  puVar2 = (undefined8 *)PTR_DAT_033f5da8;
  if ((uVar1 >> 2 & 1) != 0) {
    local_60 = FUN_02039564(param_2);
    uVar6 = FUN_0176fc30(&local_60,0);
    uVar6 = FUN_015f5b28(*puVar8,uVar6,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x200));
    uVar1 = *(uint *)(param_1 + 4);
    puVar2 = (undefined8 *)PTR_DAT_033f5da8;
  }
  PTR_DAT_033f5da8 = (undefined *)puVar2;
  if ((uVar1 >> 5 & 1) != 0) {
    lVar10 = *(long *)(param_2 + 0x20);
    if (lVar10 == 0) {
      lVar10 = FUN_017b81a0(0);
      *(long *)(param_2 + 0x20) = lVar10;
    }
    uVar6 = FUN_015f5b28(*puVar2,lVar10,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x200));
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return;
}


