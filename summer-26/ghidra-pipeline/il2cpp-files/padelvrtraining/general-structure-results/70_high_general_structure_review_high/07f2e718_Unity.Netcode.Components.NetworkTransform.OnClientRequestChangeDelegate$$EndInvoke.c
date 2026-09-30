/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkTransform.OnClientRequestChangeDelegate$$EndInvoke
ENTRY_POINT: 07f2e718
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Unity_Netcode_Components_NetworkTransform_OnClientRequestChangeDelegate__EndInvoke
               (undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x26;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  plVar1 = (long *)thunk_FUN_03d2ee44(param_1,*unaff_x22);
  uVar3 = extraout_w8;
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto 
          Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar1,*unaff_x22,0);
Unity_Netcode_Components_NetworkTransform_NetworkTransformState__get_LastSerializedSize:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
    uVar3 = extraout_w8_00;
  }
  if (unaff_x19 == 0) {
    if ((unaff_w21 == 0x17) || (unaff_w21 == 0)) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (cRam000000000984ea87 == '\0') {
        FUN_03d2d2b0(PTR_DAT_0925efa8);
        cRam000000000984ea87 = '\x01';
      }
      lVar4 = *unaff_x26;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar4 = *unaff_x26;
      }
      **(undefined4 **)(lVar4 + 0xb8) = in_stack_00000000._4_4_;
      if (in_stack_00000008 != 0) {
        if (*(int *)(*(long *)PTR_StringLiteral_52275_0925ea90 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_067aca6c(in_stack_00000008,*(undefined8 *)PTR_DAT_0925fb58);
      }
      uVar3 = 1;
    }
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d540();
}


