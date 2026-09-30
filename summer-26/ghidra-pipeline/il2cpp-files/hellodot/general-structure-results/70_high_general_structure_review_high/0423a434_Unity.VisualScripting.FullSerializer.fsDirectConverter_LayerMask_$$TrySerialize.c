/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TrySerialize
ENTRY_POINT: 0423a434
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
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TrySerialize(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 unaff_x20;
  code *pcVar14;
  int iVar15;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x29;
  
  uVar6 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd008,0);
  uVar7 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(param_1,uVar6,0);
  puVar3 = PTR_DAT_065e0c98;
  puVar2 = PTR_DAT_065ca3e0;
  if ((uVar7 & 1) == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c9f08);
    uVar6 = thunk_FUN_02cea894();
    uVar11 = thunk_FUN_02c7737c(PTR_DAT_065de908);
    FUN_04f2c64c(uVar6,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar6);
  }
  iVar15 = 0;
  uVar5 = 0;
  while( true ) {
    lVar8 = *unaff_x25;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02ce0978();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02ce0978();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar12 = *unaff_x25;
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar8 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_02ce0978(lVar12);
      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
      lVar8 = *unaff_x25;
    }
    pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02ce0978(lVar8);
    }
    iVar4 = (*pcVar14)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
    if (iVar4 <= iVar15) {
      if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
    lVar8 = *unaff_x25;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02ce0978();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02ce0978();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar12 = *unaff_x25;
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar8 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_02ce0978(lVar12);
      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
      lVar8 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x40);
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02ce0978(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
    *(int *)(unaff_x29 + -0xc) = iVar15;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
    (**(code **)(lVar8 + 0x10))(uVar6);
    lVar8 = *unaff_x25;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02ce0978();
    }
    plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
    if (plVar9 == (long *)0x0) break;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    puVar10 = (ulong *)thunk_FUN_02cea9e8();
    uVar13 = *puVar10;
    uVar7 = uVar13 & 0x7ff0000000000000;
    if ((-uVar13 & 0x7ff0000000000000) != 0) {
      uVar7 = uVar13;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar5 = FUN_04e7f908(uVar5,(uint)(uVar7 >> 0x20) ^ (uint)uVar7,0);
    iVar15 = iVar15 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


