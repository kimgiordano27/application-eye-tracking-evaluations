/*
FUNCTION_NAME: FUN_060f9360
ENTRY_POINT: 060f9360
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060f9360(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  puVar4 = 
  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
  ;
                    /* try { // try from 060f9368 to 061f9377 has its CatchHandler @ 060f9378 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 060f9368 with catch @ 060f9378
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 060f90cc with catch @ 060f937c
                        */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 060f9090 with catch @ 060f9380
                        */
                    /* try { // try from 060f9388 to 061f938b has its CatchHandler @ 060f93d0 */
                    /* try { // try from 060f938c to 061f93af has its CatchHandler @ 060f8e40 */
                    /* catch(type#1 @ 066644a8) { ... } // from try @ 060f8fc4 with catch @ 060f9390
                        */
  if ((DAT_06e9538f & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a65e18);
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3Int,_IntegerField,_int>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                );
    FUN_02e3ca1c(System_Xml_Linq_XHashtable<WeakReference>_TypeInfo);
    FUN_02e3ca1c(System_WeakReference<VisualElement>_TypeInfo);
    FUN_02e3ca1c(System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo);
    FUN_02e3ca1c(System_Xml_Linq_XHashtable<XName>_TypeInfo);
    FUN_02e3ca1c(System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>_TypeInfo)
    ;
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
                );
    FUN_02e3ca1c(System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
    FUN_02e3ca1c(System_WeakReference<IPool>_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a68670);
    FUN_02e3ca1c(PTR_DAT_06a69b18);
    FUN_02e3ca1c(PTR_DAT_06a65ed8);
    FUN_02e3ca1c(PTR_DAT_06a62760);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TypeInfo
                );
    FUN_02e3ca1c(
                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                );
    DAT_06e9538f = 1;
  }
  lVar9 = *(long *)puVar4;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar9 = *(long *)puVar4;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar9 != 0) {
    iVar8 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar8) {
      FUN_05628afc(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar8 = FUN_04def2c8(*(long *)(param_1 + 0x28),
                           *(undefined8 *)
                            UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3Int,_IntegerField,_int>_TypeInfo
                          );
      if (0 < iVar8) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = FUN_04def2d8(*(long *)(param_1 + 0x28),
                                 *(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                                ), puVar7 = System_Xml_Linq_XHashtable<XName>_TypeInfo,
           puVar6 = System_Xml_Linq_XHashtable<WeakReference>_TypeInfo,
           puVar5 = 
           UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
           , puVar3 = System_WeakReference<IPool>_TypeInfo, puVar2 = PTR_DAT_06a68670, lVar9 == 0))
        goto LAB_060f978c;
        FUN_03d8bba8(&local_a0,lVar9,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TypeInfo
                    );
        local_60 = local_90;
        puStack_68 = puStack_98;
        local_70 = local_a0;
        local_a0 = 0;
        puStack_98 = &local_70;
        while (uVar10 = FUN_0505904c(&local_70,*(undefined8 *)puVar7), uVar11 = local_60,
              (uVar10 & 1) != 0) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar10 = FUN_052e89a4(param_2,local_60,*(undefined8 *)puVar5);
          if ((uVar10 & 1) == 0) {
            lVar9 = *(long *)puVar4;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar9 = *(long *)puVar4;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
            if (lVar9 == 0) {
LAB_060f9788:
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar12 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_060f9788;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar13 = uVar11;
              thunk_FUN_02ee2be8(puVar13,uVar11);
            }
            else {
              FUN_03f2b60c(lVar9,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            FUN_052e8b74(param_2,uVar11,*(undefined8 *)puVar3);
          }
        }
        FUN_05059048(&local_70,*(undefined8 *)puVar6);
      }
      puVar3 = System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo;
      puVar2 = System_WeakReference<VisualElement>_TypeInfo;
      if (param_2 != 0) {
        if (0 < *(int *)(param_2 + 0x20)) {
          FUN_052e8e18(&local_88,param_2,
                       *(undefined8 *)System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
          local_a0 = 0;
          puStack_98 = &local_88;
          while (uVar10 = FUN_04fc09e8(&local_88,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
            FUN_060f8764(param_1,local_78);
          }
          FUN_04fc09e4(&local_88,*(undefined8 *)puVar2);
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar9 = *(long *)puVar4;
        }
        puVar3 = 
        UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TypeInfo;
        puVar2 = PTR_DAT_06a65e18;
        lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) < 1) {
            return;
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          }
          uVar11 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
          FUN_04d318f4(uVar11,param_1,*(undefined8 *)puVar3,0);
          if (lVar12 != 0) {
            FUN_03f2bf50(lVar12,uVar11,*(undefined8 *)PTR_DAT_06a65ed8);
            lVar9 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            if (lVar9 != 0) {
              iVar8 = *(int *)(lVar9 + 0x18);
              *(undefined4 *)(lVar9 + 0x18) = 0;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (iVar8 < 1) {
                return;
              }
              FUN_05628afc(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_060f978c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


