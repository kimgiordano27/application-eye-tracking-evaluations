/*
FUNCTION_NAME: FUN_059ffce0
ENTRY_POINT: 059ffce0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;telemetry_or_network_hits_11;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_059ffce0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  undefined8 local_38;
  
  puVar4 = Method_System_Nullable<OVRPose>__ctor__;
  puVar2 = Method_System_Nullable<NullValueHandling>_get_HasValue__;
  puVar1 = PTR_DAT_067cbf70;
  if ((DAT_06bc1f15 & 1) == 0) {
    FUN_02f08768(Method_System_Nullable<OVRPose>__ctor__);
    FUN_02f08768(Method_System_Nullable<NullValueHandling>_get_HasValue__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_Add__
                );
    FUN_02f08768(PTR_DAT_067cbf70);
    FUN_02f08768(PTR_DAT_067ca970);
    FUN_02f08768(Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_02f08768(PTR_DAT_067cbfa8);
    FUN_02f08768(
                Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_get_Item__
                );
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_System_Nullable<OVRPose>_get_HasValue__);
    FUN_02f08768(Method_System_Nullable<OVRPose>_get_Value__);
    FUN_02f08768(Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__);
    FUN_02f08768(Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
    DAT_06bc1f15 = 1;
  }
  puVar5 = Method_System_Nullable<OVRPose>_get_Value__;
  puVar3 = 
  Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_get_Item__;
  local_38 = 0;
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_04828774(uVar6,*(undefined8 *)puVar4);
  lVar7 = *(long *)puVar1;
  *(undefined8 *)(param_1 + 0x380) = uVar6;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059890fc(param_1,0);
  FUN_0624193c(param_1,*(undefined8 *)puVar5,0);
  FUN_05987b50(param_1,3,0);
  plVar8 = (long *)FUN_0623cb0c(param_1,0);
  uVar6 = FUN_042f5ed8(1,*(undefined8 *)puVar3);
  puVar1 = PTR_DAT_067ca970;
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067ca970) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 99) * 0x10 + 0x138);
          goto LAB_059ffec0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067ca970,99);
LAB_059ffec0:
    (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
    plVar8 = (long *)FUN_0623cb0c(param_1,0);
    auVar12 = FUN_0625c4e0(0,0);
    puVar2 = Method_System_Collections_Generic_List<UIVertex>__ctor__;
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x2b) * 0x10 + 0x138);
            goto LAB_059fff50;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0x2b);
LAB_059fff50:
      (*(code *)*puVar9)(plVar8,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar9[1]);
      lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_0598c530(lVar7,0);
      puVar2 = Method_System_Nullable<OVRPose>_get_HasValue__;
      puVar1 = PTR_DAT_067cbfa8;
      if (lVar7 != 0) {
        FUN_0623f514(lVar7,*(undefined8 *)Method_System_Nullable<OVRPose>_get_HasValue__,0);
        uVar6 = *(undefined8 *)puVar2;
        *(long *)(param_1 + 0x390) = lVar7;
        FUN_0624193c(lVar7,uVar6,0);
        local_38 = *(undefined8 *)(param_1 + 0x260);
        FUN_0624b7dc(&local_38,*(undefined8 *)(param_1 + 0x390),0);
        lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_059a2ae8(lVar7,0);
        puVar2 = Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__;
        puVar1 = 
        Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_Add__
        ;
        if (lVar7 != 0) {
          FUN_0623f514(lVar7,*(undefined8 *)
                              Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__,0);
          uVar6 = *(undefined8 *)puVar2;
          *(long *)(param_1 + 0x3a0) = lVar7;
          FUN_0624193c(lVar7,uVar6,0);
          local_38 = *(undefined8 *)(param_1 + 0x260);
          FUN_0624b7dc(&local_38,*(undefined8 *)(param_1 + 0x3a0),0);
          lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          FUN_05984284(lVar7,0);
          puVar2 = Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__;
          puVar1 = PTR_DAT_067c9cb8;
          if (lVar7 != 0) {
            FUN_0623f514(lVar7,*(undefined8 *)
                                Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__,0);
            FUN_059855f8(lVar7,2,0);
            FUN_059856c8(lVar7,3,0);
            FUN_05985798(lVar7,1,0);
            uVar6 = *(undefined8 *)puVar2;
            *(long *)(param_1 + 0x388) = lVar7;
            FUN_0624193c(lVar7,uVar6,0);
            local_38 = *(undefined8 *)(param_1 + 0x260);
            FUN_0624b7dc(&local_38,*(undefined8 *)(param_1 + 0x388),0);
            lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_0623f858(lVar7,0);
            puVar1 = Method_System_Nullable<OVRTelemetryMarker>__ctor__;
            if (lVar7 != 0) {
              FUN_0623f514(lVar7,*(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>__ctor__,0
                          );
              uVar6 = *(undefined8 *)puVar1;
              *(long *)(param_1 + 0x378) = lVar7;
              FUN_0624193c(lVar7,uVar6,0);
              local_38 = *(undefined8 *)(param_1 + 0x260);
              FUN_0624b7dc(&local_38,*(undefined8 *)(param_1 + 0x378),0);
              FUN_05a002d4(param_1,0);
              if (*(long *)(param_1 + 0x3a0) != 0) {
                FUN_0599f254(*(long *)(param_1 + 0x3a0),*(undefined8 *)PTR_DAT_067cbf00,0);
                FUN_05a00220(param_1,0);
                FUN_05a00338(param_1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


