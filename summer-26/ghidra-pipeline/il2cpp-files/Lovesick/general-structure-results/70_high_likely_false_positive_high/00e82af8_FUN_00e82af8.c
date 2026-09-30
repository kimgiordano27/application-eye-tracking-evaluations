/*
FUNCTION_NAME: FUN_00e82af8
ENTRY_POINT: 00e82af8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x00e82d44) */

undefined8 FUN_00e82af8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03774f86 & 1) == 0) {
    thunk_FUN_00d48444(Method_NaughtyAttributes_DropdownList<Vector3>_Add__);
    thunk_FUN_00d48444(OVRTriangleMesh_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6766);
    thunk_FUN_00d48444(System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7269);
    thunk_FUN_00d48444(Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__);
    thunk_FUN_00d48444(StringLiteral_4626);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_object>_TryGetValue__);
    thunk_FUN_00d48444(StringLiteral_9460);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12098);
    DAT_03774f86 = 1;
  }
  puVar9 = StringLiteral_9460;
  puVar2 = StringLiteral_6766;
  puVar6 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
  puVar3 = Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  lVar12 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x98) == 0)) goto LAB_00e82ef0;
    FUN_01323390(*(long *)(lVar12 + 0x98),&local_b8,*(undefined8 *)puVar9);
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar10 = FUN_012b894c(&local_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      lVar11 = FUN_00ac5aa0(&local_80,*(undefined8 *)puVar6);
      uVar13 = *(undefined8 *)(lVar12 + 0x90);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0268b4e0(lVar11,uVar13,0);
      if ((uVar10 & 1) == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar13 = *(undefined8 *)(lVar11 + 0x88);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0268c114(uVar13,0);
        uVar13 = FUN_0268fd4c(lVar11,0);
        FUN_0268c114(uVar13,0);
      }
    }
    FUN_012b8948(&local_80,*(undefined8 *)puVar2);
    FUN_00e77060(lVar12);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 00e82c0c to 00f82ccb has its CatchHandler @ 00e82c0c
                       catch() { ... } // from try @ 00e82c0c with catch @ 00e82c0c
                       catch() { ... } // from try @ 00e82d08 with catch @ 00e82c0c */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar8 = StringLiteral_7269;
    puVar7 = StringLiteral_4626;
    puVar5 = Method_NaughtyAttributes_DropdownList<Vector3>_Add__;
    puVar4 = Method_System_Collections_Generic_Dictionary<string,_object>_TryGetValue__;
    puVar2 = OVRTriangleMesh_TypeInfo;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x98) != 0)) {
      FUN_01323390(*(long *)(lVar12 + 0x98),&local_b8,*(undefined8 *)puVar9);
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      while (uVar10 = FUN_012b894c(&local_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
        lVar11 = FUN_00ac5aa0(&local_80,*(undefined8 *)puVar6);
        uVar13 = *(undefined8 *)(lVar12 + 0x78);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_0268b4e0(lVar11,uVar13,0);
        if ((uVar10 & 1) == 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = FUN_010c3404(lVar11,*(undefined8 *)puVar5);
          lVar11 = FUN_010dfe04(uVar13,*(undefined8 *)puVar2);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
                    /* try { // try from 00e82ccc to 00f82d07 has its CatchHandler @ 00e82d30 */
          FUN_01323390(lVar11,&local_b8,*(undefined8 *)puVar4);
          uStack_98 = uStack_b0;
          local_a0 = local_b8;
          local_90 = local_a8;
          while (uVar10 = FUN_012b894c(&local_a0,*(undefined8 *)puVar8), (uVar10 & 1) != 0) {
            lVar11 = FUN_00ac5ba8(&local_a0,*(undefined8 *)puVar7);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
                    /* try { // try from 00e82d08 to 00f82d43 has its CatchHandler @ 00e82c0c */
            uVar10 = FUN_026ea490(lVar11,0);
            if ((uVar10 & 1) != 0) {
              FUN_026ea974(lVar11,0);
            }
          }
                    /* catch() { ... } // from try @ 00e82ccc with catch @ 00e82d30 */
          FUN_012b8948(&local_a0,
                       *(undefined8 *)System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo);
        }
      }
      FUN_012b8948(&local_80,*(undefined8 *)StringLiteral_6766);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
      if (lVar12 != 0) {
        FUN_0268a094(0x3f800000,lVar12,0);
        *(long *)(param_1 + 0x18) = lVar12;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
LAB_00e82ef0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return 0;
}


