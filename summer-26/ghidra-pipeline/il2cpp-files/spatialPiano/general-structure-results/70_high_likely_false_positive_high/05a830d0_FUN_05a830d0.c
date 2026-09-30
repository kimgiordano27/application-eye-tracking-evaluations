/*
FUNCTION_NAME: FUN_05a830d0
ENTRY_POINT: 05a830d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a830d0(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  long lVar1;
  char *pcVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  undefined1 auVar17 [16];
  undefined4 local_190;
  undefined4 uStack_18c;
  int local_178 [22];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar4 = Method_UnityEngine_UIElements_Columns_UxmlObjectFactory<Columns>__ctor__;
  if ((DAT_06bc2364 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_DynamicArray<Name>_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_UIElements_UxmlFactory<Vector4Field,_Vector4Field_UxmlTraits>__ctor__
                );
    FUN_02f08768(Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_SortColumnDescription_UxmlObjectFactory<SortColumnDescription>__ctor__
                );
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(
                Method_UnityEngine_UIElements_SortColumnDescriptions_UxmlObjectFactory<SortColumnDescriptions>__ctor__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_Columns_UxmlObjectFactory<Columns>__ctor__);
    FUN_02f08768(PTR_DAT_067cc628);
    FUN_02f08768(PTR_DAT_067ce968);
    FUN_02f08768(Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>__ctor__);
    DAT_06bc2364 = 1;
  }
  local_70 = 0;
  local_d0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05a8d620(lVar8,0);
  if (param_1 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar10 = thunk_FUN_02f45270();
    uVar11 = thunk_FUN_02f6ef30(PTR_DAT_067ca368);
    FUN_0504ee1c(uVar10,uVar11,0);
    uVar11 = thunk_FUN_02f6ef30(
                               Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar11);
  }
  *param_3 = 0;
  *param_4 = 0;
  auVar17 = FUN_05a778b8(param_1);
  if (lVar8 != 0) {
    pauVar16 = (undefined1 (*) [16])(lVar8 + 0x10);
    *pauVar16 = auVar17;
    puVar5 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__;
    puVar4 = PTR_DAT_067c9338;
    if ((param_2 < 0) || (iVar7 = auVar17._12_4_, iVar7 <= param_2)) {
      local_178[0] = param_2;
      uVar10 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),local_178);
      FUN_02a7da48(lVar8);
      thunk_FUN_02f6ef30(
                        Method_UnityEngine_UIElements_UxmlFactory<Vector4Field,_Vector4Field_UxmlTraits>__ctor__
                        );
      local_190 = *(undefined4 *)(lVar8 + 0x1c);
      uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar4 + 0x48),&local_190);
      uVar13 = thunk_FUN_02f6ef30(
                                 Method_Unity_AppUI_UI_NumericalField_UxmlSerializedData<double>__ctor__
                                 );
      uVar10 = FUN_04f7005c(uVar13,uVar10,param_1,uVar11,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar11 = thunk_FUN_02f45270();
      uVar13 = thunk_FUN_02f6ef30(
                                 Method_UnityEngine_UIElements_UxmlFactory<ToggleButtonGroup,_ToggleButtonGroup_UxmlTraits>__ctor__
                                 );
      FUN_0505262c(uVar11,uVar10,uVar13,0);
      uVar10 = thunk_FUN_02f6ef30(
                                 Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>__ctor__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar11,uVar10);
    }
    FUN_0404805c(local_178,pauVar16,param_2,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__);
    memcpy(&local_120,local_178,0x58);
    uVar9 = FUN_05a90350(&local_120,0);
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) {
        FUN_05a78fb8(param_1);
        lVar8 = *(long *)(param_1 + 200);
        if (lVar8 == 0) goto LAB_05a83528;
      }
      FUN_05a779ac(lVar8);
      lVar14 = *(long *)(lVar8 + 0x60);
      uVar6 = FUN_05a79368(param_1,param_2);
      if (lVar14 == 0) goto LAB_05a83528;
      iVar7 = FUN_05a98a74(lVar14,*(undefined4 *)(lVar8 + 0x58),uVar6,0);
      lVar8 = FUN_05a92e24(lVar14,0);
      pcVar2 = (char *)(lVar8 + (long)iVar7 * 0x20);
      if (*pcVar2 == '\0') {
        uVar10 = 0;
      }
      else {
        lVar8 = *(long *)(lVar14 + 0x18);
        if (lVar8 == 0) goto LAB_05a83528;
        uVar3 = *(ushort *)(pcVar2 + 0xe);
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar3) {
LAB_05a8352c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar10 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8 + 0x20);
      }
      FUN_0404805c(local_178,pauVar16,param_2,*(undefined8 *)puVar5);
      memcpy(&local_c0,local_178,0x58);
      uVar11 = FUN_05a9b3c8(&local_c0,0);
      uVar9 = FUN_04f6ebb4(uVar11,0);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      if (((uVar9 & 1) == 0) &&
         (uVar9 = FUN_04f6ebb4(*(undefined8 *)(param_1 + 0x38),0), uVar11 = local_78,
         (uVar9 & 1) == 0)) {
        uVar11 = FUN_05a9b3c8(&local_c0,0);
        uVar11 = FUN_04f65260(uVar11,*(undefined8 *)
                                      Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>__ctor__
                              ,0);
      }
      local_78 = uVar11;
      FUN_05a9b81c(&local_c0,param_3,param_4,param_5,uVar10,0);
    }
    else {
      FUN_0404805c(local_178,pauVar16,param_2,*(undefined8 *)puVar5);
      memcpy(&local_120,local_178,0x58);
      uVar10 = FUN_05a93d10(&local_120,0);
      FUN_05aaa524(&local_190,uVar10,0);
      param_2 = param_2 + 1;
      *(int *)(lVar8 + 0x20) = param_2;
      iVar15 = param_2;
      if (param_2 < iVar7) {
        do {
          FUN_0404805c(local_178,pauVar16,param_2,*(undefined8 *)puVar5);
          memcpy(&local_120,local_178,0x58);
          uVar9 = FUN_05a925d4(&local_120,0);
          iVar15 = param_2;
          if ((uVar9 & 1) == 0) break;
          param_2 = param_2 + 1;
          iVar15 = iVar7;
        } while (iVar7 != param_2);
        param_2 = *(int *)(lVar8 + 0x20);
      }
      puVar4 = PTR_DAT_067c9070;
      *(int *)(lVar8 + 0x30) = iVar15 - param_2;
      uVar10 = FUN_02f0880c(*(undefined8 *)puVar4);
      *(undefined8 *)(lVar8 + 0x28) = uVar10;
      puVar4 = PTR_DAT_067cc628;
      if (0 < *(int *)(lVar8 + 0x30)) {
        uVar9 = 0;
        do {
          uVar11 = FUN_05a8305c(param_1,(int)uVar9 + *(int *)(lVar8 + 0x20),param_5);
          uVar12 = FUN_04f6ebb4(uVar11,0);
          lVar14 = *(long *)(lVar8 + 0x28);
          uVar10 = *(undefined8 *)puVar4;
          if ((uVar12 & 1) == 0) {
            uVar10 = uVar11;
          }
          if (lVar14 == 0) goto LAB_05a83528;
          if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05a8352c;
          lVar1 = uVar9 * 8;
          uVar9 = uVar9 + 1;
          *(undefined8 *)(lVar14 + lVar1 + 0x20) = uVar10;
        } while ((long)uVar9 < (long)*(int *)(lVar8 + 0x30));
      }
      uVar10 = FUN_05a9c0e8(CONCAT44(uStack_18c,local_190),0);
      uVar9 = FUN_04f6ebb4(uVar10,0);
      if ((uVar9 & 1) == 0) {
        uVar11 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>_TypeInfo
                                   );
        FUN_04e02ad4(uVar11,lVar8,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_SortColumnDescriptions_UxmlObjectFactory<SortColumnDescriptions>__ctor__
                     ,0);
        FUN_05aae970(uVar10,uVar11,0);
      }
      else {
        FUN_0355644c(*(undefined8 *)PTR_DAT_067ce968,*(undefined8 *)(lVar8 + 0x28),
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_SortColumnDescription_UxmlObjectFactory<SortColumnDescription>__ctor__
                    );
      }
    }
    return;
  }
LAB_05a83528:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


