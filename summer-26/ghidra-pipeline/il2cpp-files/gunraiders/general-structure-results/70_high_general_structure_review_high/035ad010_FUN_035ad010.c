/*
FUNCTION_NAME: FUN_035ad010
ENTRY_POINT: 035ad010
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_035ad010(long param_1,long *param_2,int param_3,int param_4,float param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  float local_68;
  int local_64;
  
  puVar5 = Method_UnityEngine_UIElements_TextValueField<float>_get_formatString__;
  puVar4 = Method_UnityEngine_UIElements_TextValueField<float>__ctor__;
  puVar3 = Method_UnityEngine_UIElements_TextValueField<float>_AddLabelDragger<float>__;
  puVar2 = System_Security_Cryptography_RSAPKCS1KeyExchangeFormatter_TypeInfo;
  if ((DAT_04537c00 & 1) == 0) {
    FUN_01c5d288(System_Security_Cryptography_RSAPKCS1KeyExchangeFormatter_TypeInfo);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextValueField<float>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextValueField<float>_AddLabelDragger<float>__);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextValueField<float>_get_formatString__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextValueField<uint>_AddLabelDragger<uint>__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextValueField<uint>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextValueField<uint>_get_formatString__);
    DAT_04537c00 = 1;
  }
  uVar6 = DAT_00b92000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02fc9b70(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03332e30(uVar6,0,0);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  FUN_03313b6c(param_1,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar7 = *(long *)puVar5;
  }
  puVar4 = GameAnalyticsSDK_State_GAState_TypeInfo;
  puVar3 = PTR_DAT_042305b8;
  puVar2 = PTR_DAT_0422fd80;
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (lVar7 == 0) {
LAB_035ad610:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  if (0 < iVar1) {
    iVar12 = 0;
    do {
      if (iVar1 == iVar12) goto LAB_035ad60c;
      if (*(int *)(lVar7 + (long)iVar12 * 4 + 0x20) == param_4) {
        iVar12 = (param_4 * 10) / 1000;
        iVar1 = 0;
        if (iVar12 != 0) {
          iVar1 = param_3 / iVar12;
        }
        *(long **)(param_1 + 0x78) = param_2;
        *(int *)(param_1 + 0x44) = param_3;
        *(int *)(param_1 + 0x48) = iVar12;
        if (param_3 != iVar1 * iVar12) {
          plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,3);
          local_64 = *(int *)(param_1 + 0x44);
          lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_64);
          if (plVar8 == (long *)0x0) goto LAB_035ad610;
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_035ad614;
          if ((int)plVar8[3] == 0) goto LAB_035ad60c;
          plVar8[4] = lVar7;
          local_68 = ((float)*(int *)(param_1 + 0x44) * 1000.0) / (float)param_4;
          lVar7 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304e0,&local_68);
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_035ad614;
          if (*(uint *)(plVar8 + 3) < 2) goto LAB_035ad60c;
          plVar8[5] = lVar7;
          local_6c = *(undefined4 *)(param_1 + 0x48);
          lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_6c);
          if ((lVar7 != 0) &&
             (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_035ad614;
          if (*(uint *)(plVar8 + 3) < 3) goto LAB_035ad60c;
          plVar8[6] = lVar7;
          if (param_2 == (long *)0x0) goto LAB_035ad610;
          lVar9 = *param_2;
          lVar7 = *(long *)puVar4;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          uVar6 = *(undefined8 *)
                   Method_UnityEngine_UIElements_TextValueField<uint>_AddLabelDragger<uint>__;
          if (uVar11 == 0) goto LAB_035ad3b8;
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_035ad3a0;
        }
        *(int *)(param_1 + 0x4c) = param_4;
        *(float *)(param_1 + 0x50) = param_5;
        *(undefined4 *)(param_1 + 0x70) = param_6;
        *(undefined4 *)(param_1 + 0x74) = param_7;
        uVar6 = FUN_035ad628(param_4,param_5,iVar12,param_4,param_7);
        *(undefined8 *)(param_1 + 0x58) = uVar6;
        FUN_035ad6d4();
        plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,5);
        local_64 = param_4;
        lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_64);
        if (plVar8 == (long *)0x0) goto LAB_035ad610;
        if ((lVar7 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_035ad614;
        if ((int)plVar8[3] == 0) goto LAB_035ad60c;
        plVar8[4] = lVar7;
        local_68 = param_5;
        lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_68);
        if ((lVar7 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_035ad614;
        if (*(uint *)(plVar8 + 3) < 2) goto LAB_035ad60c;
        plVar8[5] = lVar7;
        local_6c = *(undefined4 *)(param_1 + 0x48);
        lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_6c);
        if ((lVar7 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_035ad614;
        if (*(uint *)(plVar8 + 3) < 3) goto LAB_035ad60c;
        plVar8[6] = lVar7;
        local_70 = 0;
        if (*(int *)(param_1 + 0x50) != 0) {
          local_70 = *(int *)(param_1 + 0x44) / *(int *)(param_1 + 0x50);
        }
        lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_70);
        if ((lVar7 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_035ad614;
        if (*(uint *)(plVar8 + 3) < 4) goto LAB_035ad60c;
        plVar8[7] = lVar7;
        local_74 = *(undefined4 *)(param_1 + 0x74);
        lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_74);
        if ((lVar7 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_035ad614;
        if (*(uint *)(plVar8 + 3) < 5) goto LAB_035ad60c;
        plVar8[8] = lVar7;
        if (param_2 == (long *)0x0) goto LAB_035ad610;
        lVar7 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uVar6 = *(undefined8 *)Method_UnityEngine_UIElements_TextValueField<uint>__ctor__;
        if (uVar11 == 0) goto LAB_035ad5d0;
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_035ad5b8;
      }
      iVar12 = iVar12 + 1;
    } while (iVar1 != iVar12);
  }
  plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  local_64 = param_4;
  lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_64);
  if (plVar8 == (long *)0x0) goto LAB_035ad610;
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_035ad614:
    uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,0);
  }
  if ((int)plVar8[3] == 0) {
LAB_035ad60c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar8[4] = lVar7;
  if (param_2 == (long *)0x0) goto LAB_035ad610;
  lVar9 = *param_2;
  lVar7 = *(long *)puVar4;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  uVar6 = *(undefined8 *)Method_UnityEngine_UIElements_TextValueField<uint>_get_formatString__;
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) goto LAB_035ad3c8;
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  goto LAB_035ad3b8;
LAB_035ad3c8:
  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
  goto System_Data_DataRelationCollection_DataTableRelationCollection__GetDataSet;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_035ad5b8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
      puVar10 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
      goto LAB_035ad5f0;
    }
  }
LAB_035ad5d0:
  puVar10 = (undefined8 *)FUN_01c72498(param_2,*(long *)puVar4,1);
LAB_035ad5f0:
  (*(code *)*puVar10)(param_2,3,uVar6,plVar8,puVar10[1]);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_035ad3a0:
    if (*(long *)(piVar13 + -2) == lVar7) goto LAB_035ad3c8;
  }
LAB_035ad3b8:
  puVar10 = (undefined8 *)FUN_01c72498(param_2,lVar7,1);
System_Data_DataRelationCollection_DataTableRelationCollection__GetDataSet:
  (*(code *)*puVar10)(param_2,1,uVar6,plVar8,puVar10[1]);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


