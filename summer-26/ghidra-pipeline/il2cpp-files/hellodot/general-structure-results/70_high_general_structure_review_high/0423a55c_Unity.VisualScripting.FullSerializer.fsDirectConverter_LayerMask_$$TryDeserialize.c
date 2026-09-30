/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 0423a55c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined4
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize
          (long param_1,long param_2)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ushort *in_x9;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  code *pcVar9;
  undefined8 uVar10;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    uVar2 = *in_x9;
    do {
      uVar10 = **(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x40);
      if ((uVar2 & 1) == 0) {
        param_1 = FUN_02ce0978(param_1);
      }
                    /* try { // try from 0423a588 to 0433a737 has its CatchHandler @ 0423a588
                       catch() { ... } // from try @ 0423a588 with catch @ 0423a588
                       catch() { ... } // from try @ 0423a7b8 with catch @ 0423a588
                       catch() { ... } // from try @ 0423a7cc with catch @ 0423a588
                       catch() { ... } // from try @ 0423a808 with catch @ 0423a588
                       catch() { ... } // from try @ 0423a844 with catch @ 0423a588 */
      lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = unaff_w23;
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      (**(code **)(lVar6 + 0x10))(uVar10);
      lVar6 = *unaff_x25;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978();
      }
      plVar4 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018();
      }
      puVar5 = (ulong *)thunk_FUN_02cea9e8();
      uVar8 = *puVar5;
      uVar1 = uVar8 & 0x7ff0000000000000;
      if ((-uVar8 & 0x7ff0000000000000) != 0) {
        uVar1 = uVar8;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      unaff_w21 = FUN_04e7f908(unaff_w21,(uint)(uVar1 >> 0x20) ^ (uint)uVar1,0);
      unaff_w23 = unaff_w23 + 1;
      lVar6 = *unaff_x25;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar7 = *unaff_x25;
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar6 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
        uVar2 = *(ushort *)(*unaff_x25 + 0x135);
        lVar6 = *unaff_x25;
      }
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02ce0978(lVar6);
      }
      iVar3 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
      if (iVar3 <= unaff_w23) {
        if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return unaff_w21;
      }
      lVar6 = *unaff_x25;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      param_2 = *unaff_x25;
      uVar2 = *(ushort *)(param_2 + 0x135);
      param_1 = param_2;
    } while ((uVar2 & 1) != 0);
    param_2 = FUN_02ce0978(param_2);
    param_1 = *unaff_x25;
    in_x9 = (ushort *)(param_1 + 0x135);
  } while( true );
}


