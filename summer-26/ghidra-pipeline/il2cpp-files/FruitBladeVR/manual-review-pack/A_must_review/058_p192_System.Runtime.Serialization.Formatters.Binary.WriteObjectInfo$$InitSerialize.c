/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitSerialize
ENTRY_POINT: 02fd7b48
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSerialize
               (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long *param_8)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 local_58;
  
  if ((DAT_03ef395c & 1) == 0) {
    FUN_01c5c92c(PTR_System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo_03cbbb08);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_FormatterServices_TypeInfo_03cbb6c8);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_ISurrogateSelector_TypeInfo_03cbb520);
    FUN_01c5c92c(
                PTR_System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo_03cbbd90
                );
    FUN_01c5c92c(PTR_System_Runtime_Serialization_SerializationInfo_TypeInfo_03cbbd80);
    DAT_03ef395c = 1;
  }
  local_58 = 0;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_01cc8040((long *)(param_1 + 0x20),param_2);
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x50),0);
  *(undefined8 *)(param_1 + 0x60) = param_6;
  thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x60),param_6);
  if (param_2 == 0) {
LAB_02fd7e98:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar3 = System_Type__get_IsArray(param_2,0);
  if ((uVar3 & 1) != 0) {
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitNoMembers(param_1);
    return;
  }
  if (param_8 != (long *)0x0) {
    (**(code **)(*param_8 + 0x178))
              (param_8,*(undefined8 *)(param_1 + 0x20),param_1 + 0x80,param_1 + 0x78,
               *(undefined8 *)(*param_8 + 0x180));
  }
  local_58 = 0;
  if (param_3 != (long *)0x0) {
    lVar7 = *param_3;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)PTR_System_Runtime_Serialization_ISurrogateSelector_TypeInfo_03cbb520) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02fd7cb8;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c8cb54(param_3,*(long *)
                                   PTR_System_Runtime_Serialization_ISurrogateSelector_TypeInfo_03cbb520
                          ,0);
LAB_02fd7cb8:
    uVar5 = (*(code *)*puVar4)(param_3,param_2,param_4,param_5,&local_58,puVar4[1]);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    thunk_FUN_01cc8040();
  }
  puVar1 = PTR_System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo_03cbbb08;
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar7 = *(long *)PTR_System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo_03cbbb08;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar7 = *(long *)puVar1;
    }
    lVar8 = *(long *)(lVar7 + 0xb8);
    if (*(long *)(lVar8 + 0xc0) == param_2) goto LAB_02fd7d54;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    plVar6 = *(long **)(lVar8 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_02fd7e98;
    uVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x290));
    if ((uVar3 & 1) == 0) goto LAB_02fd7d54;
    if (*(int *)(*(long *)PTR_System_Runtime_Serialization_FormatterServices_TypeInfo_03cbb6c8 +
                0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar2 = System_Runtime_Serialization_FormatterServices__UnsafeTypeForwardersIsEnabled(0);
    uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_System_Runtime_Serialization_SerializationInfo_TypeInfo_03cbbd80
                              );
    System_Runtime_Serialization_SerializationInfo___ctor
              (uVar5,param_2,param_7,(uVar2 ^ 0xffffffff) & 1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x30),uVar5);
    uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo_03cbbd90
                              );
    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(uVar5,param_2);
    puVar4 = (undefined8 *)(param_1 + 0x38);
    *puVar4 = uVar5;
    thunk_FUN_01cc8040(puVar4,uVar5);
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__CheckTypeForwardedFrom
              (*puVar4,param_2,*(undefined8 *)(param_1 + 0x80));
  }
  else {
    uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_System_Runtime_Serialization_SerializationInfo_TypeInfo_03cbbd80
                              );
    System_Runtime_Serialization_SerializationInfo___ctor(uVar5,param_2,param_7,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x30),uVar5);
    uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)
                                PTR_System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo_03cbbd90
                              );
    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(uVar5,param_2);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    thunk_FUN_01cc8040((undefined8 *)(param_1 + 0x38),uVar5);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
LAB_02fd7d54:
  if (*(char *)(param_1 + 0x28) == '\0') {
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitMemberInfo(param_1);
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__CheckTypeForwardedFrom
              (*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}


