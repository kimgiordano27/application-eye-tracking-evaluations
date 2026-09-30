/*
FUNCTION_NAME: FUN_01ea43e0
ENTRY_POINT: 01ea43e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void FUN_01ea43e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  
                    /* try { // try from 01ea43f0 to 01fa441b has its CatchHandler @ 01ea45c4 */
  if ((DAT_0377fe66 & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_6908);
    thunk_FUN_00d48444(Method_System_Data_DataRelation_set_Nested__);
    thunk_FUN_00d48444(PTR_DAT_033efc88);
                    /* try { // try from 01ea444c to 01fa4453 has its CatchHandler @ 01ea45c0 */
    thunk_FUN_00d48444(StringLiteral_9044);
                    /* try { // try from 01ea4458 to 01fa445f has its CatchHandler @ 01ea45bc */
    thunk_FUN_00d48444(Method_UnityEngine_IntegratedSubsystem<XRMeshSubsystemDescriptor>__ctor__);
    DAT_0377fe66 = 1;
  }
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) goto LAB_01ea4748;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_4 == 0) goto LAB_01ea4748;
System_Xml_Serialization_XmlSerializer__Serialize:
    plVar13 = (long *)FUN_01ea6cc8(param_1,*(undefined8 *)(param_4 + 0x68));
    puVar2 = Method_UnityEngine_IntegratedSubsystem<XRMeshSubsystemDescriptor>__ctor__;
    if (plVar13 == (long *)0x0) {
      plVar13 = *(long **)(param_4 + 0x68);
      if (plVar13 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar5,param_4,0);
        return;
      }
      goto LAB_01ea4748;
    }
  }
  else {
    if (param_4 == 0) goto LAB_01ea4748;
    uVar12 = *(undefined8 *)(param_4 + 0x68);
    uVar5 = FUN_01eca598(*(long *)(param_2 + 0x88),0);
                    /* try { // try from 01ea4490 to 01fa449b has its CatchHandler @ 01ea45cc */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01ea449c to 01fa4573 has its CatchHandler @ 01ea4260 */
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar6 = FUN_01f76298(uVar12,uVar5,0);
    if ((uVar6 & 1) == 0) goto System_Xml_Serialization_XmlSerializer__Serialize;
    plVar13 = *(long **)(param_2 + 0x88);
    if (plVar13 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
      if ((*(byte *)(*plVar13 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar13);
      }
    }
    FUN_01e9df38(param_1,plVar13);
    if (plVar13 == (long *)0x0) goto LAB_01ea4748;
  }
  puVar2 = StringLiteral_6908;
  if ((*(byte *)(plVar13 + 0xe) >> 1 & 1) != 0) {
    FUN_01fad0ec(param_1,*(undefined8 *)PTR_DAT_033efc88,param_2,0);
  }
  FUN_01ea4a04(param_1,plVar13,param_2,*(undefined8 *)(param_4 + 0x58),
               *(undefined8 *)(param_4 + 0x60),2);
  lVar14 = plVar13[0x17];
  lVar7 = FUN_01ea29d0(param_1,*(undefined8 *)(param_4 + 0x50),1);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar10);
    lVar10 = *(long *)puVar2;
  }
  lVar11 = **(long **)(lVar10 + 0xb8);
  lVar9 = lVar7;
  if (lVar14 != lVar11) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar10);
      lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    }
    lVar9 = lVar14;
    if (lVar7 != lVar11) {
      plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           Method_System_Data_DataRelation_set_Nested__);
      if (plVar8 != (long *)0x0) {
        FUN_01ec2dac(plVar8,0);
        lVar10 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (lVar10 != 0) {
          FUN_01eb9088(lVar10,lVar14,0);
          lVar10 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (lVar10 != 0) {
            FUN_01eb9088(lVar10,lVar7,0);
            lVar9 = FUN_01ea5f58(param_1,plVar8);
            goto LAB_01ea468c;
          }
        }
      }
LAB_01ea4748:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_01ea468c:
  *(long *)(param_2 + 0xb8) = lVar9;
  iVar3 = FUN_01ea60c0(lVar9,param_2,param_3,lVar7);
  if ((iVar3 == 1) && (iVar3 = FUN_01ebc1b0(plVar13,0), iVar3 == 0)) {
    *(long *)(param_2 + 0x68) = plVar13[0xd];
  }
  *(int *)(param_2 + 0x90) = iVar3;
  iVar3 = FUN_01ebc1b0(plVar13,0);
  if (iVar3 != 1) {
    iVar3 = FUN_01ebc1b0(param_2,0);
    iVar4 = FUN_01ebc1b0(plVar13,0);
    if (iVar3 != iVar4) {
      FUN_01fad0ec(param_1,*(undefined8 *)StringLiteral_9044,param_2,0);
      return;
    }
  }
  *(long **)(param_2 + 0x60) = plVar13;
  *(undefined4 *)(param_2 + 0x5c) = 2;
  return;
}


