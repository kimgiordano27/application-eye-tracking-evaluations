/*
FUNCTION_NAME: FUN_05ee4894
ENTRY_POINT: 05ee4894
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ee4894(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_06bc4655 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9db8);
                    /* try { // try from 05ee48bc to 05fe48cb has its CatchHandler @ 05ee4aa4 */
    FUN_02f08768(Method_System_Xml_Schema_XmlListConverter_ToArray<XPathNavigator>__);
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteStartObjectHandleExceptions__
                );
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerContext_CheckIfTypeSerializable__
                );
    FUN_02f08768(
                Method_System_Runtime_Serialization_XmlObjectSerializerContext_GetDataContractsForKnownTypes__
                );
                    /* try { // try from 05ee48ec to 05fe48fb has its CatchHandler @ 05ee4ac8 */
    FUN_02f08768(PTR_DAT_067c9e40);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Runtime_Serialization_XmlObjectSerializerContext_IncrementItemCount__
                );
                    /* try { // try from 05ee4910 to 05fe4917 has its CatchHandler @ 05ee4aa0 */
    DAT_06bc4655 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar2 = FUN_04854ffc(*(long *)(param_1 + 0x40),
                         *(undefined8 *)
                          Method_System_Runtime_Serialization_XmlObjectSerializerContext_CheckIfTypeSerializable__
                        );
    if (iVar2 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 05ee4948 to 05fe495b has its CatchHandler @ 05ee4abc */
      uVar3 = FUN_048554f8(*(long *)(param_1 + 0x40),0,
                           *(undefined8 *)
                            Method_System_Runtime_Serialization_XmlObjectSerializer_WriteStartObjectHandleExceptions__
                          );
      if ((uVar3 & 1) != 0) {
        return;
      }
                    /* try { // try from 05ee4964 to 05fe4977 has its CatchHandler @ 05ee4ab8 */
      if (DAT_06bc472c == '\0') {
        FUN_02f08768(PTR_DAT_067cc488);
        DAT_06bc472c = '\x01';
      }
      puVar1 = PTR_DAT_067cc488;
      lVar4 = *(long *)PTR_DAT_067cc488;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar1;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x98);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
      }
      uVar3 = FUN_060f078c(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (DAT_06bc472c == '\0') {
          FUN_02f08768(PTR_DAT_067cc488);
          DAT_06bc472c = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar4 = *(long *)puVar1;
        }
        FUN_05edcde4(param_1,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x98));
        return;
      }
      lVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9e40);
      FUN_060f1570(lVar4,*(undefined8 *)
                          Method_System_Runtime_Serialization_XmlObjectSerializerContext_IncrementItemCount__
                   ,0);
      if (lVar4 != 0) {
        FUN_060f74cc(lVar4,0x3d,0);
        FUN_060f0c58(lVar4,0,0);
        uVar7 = *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<XPathNavigator>__;
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar5 = (long *)FUN_050e4454(uVar7,0);
        if (plVar5 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
          if (*(int *)(*(long *)PTR_DAT_067c9db8 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9db8);
          }
          uVar7 = FUN_05ede1f8(uVar7);
          lVar6 = FUN_033d910c(lVar4,*(undefined8 *)
                                      Method_System_Runtime_Serialization_XmlObjectSerializerContext_GetDataContractsForKnownTypes__
                              );
          if (lVar6 != 0) {
            FUN_05edc68c(lVar6,uVar7);
            uVar7 = FUN_05edc1e0(lVar6,0);
            FUN_05ee3198(uVar7,lVar6);
            FUN_060f0c58(lVar4,1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


