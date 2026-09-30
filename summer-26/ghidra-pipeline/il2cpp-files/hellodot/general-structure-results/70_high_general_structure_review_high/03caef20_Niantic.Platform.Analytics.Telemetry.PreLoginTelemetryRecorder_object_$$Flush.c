/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.PreLoginTelemetryRecorder<object>$$Flush
ENTRY_POINT: 03caef20
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Niantic_Platform_Analytics_Telemetry_PreLoginTelemetryRecorder<object>__Flush
               (undefined8 param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  code *pcVar11;
  int unaff_w24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar6 = FUN_02ce0978(param_1);
  puVar3 = PTR_DAT_065c8d28;
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x168);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02ce0978(*(long *)(unaff_x20 + 0x20));
  }
  iVar4 = (*pcVar11)();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar3);
  }
  iVar4 = iVar4 * 3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  uVar5 = FUN_04f32070(4,iVar4 >> 1,0);
  FUN_04f32070(unaff_w21,uVar5,0);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar6 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_02ce0978(lVar10);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((uVar2 & 1) == 0) {
    FUN_02ce0978(lVar6);
  }
  (*pcVar11)();
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar6 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_02ce0978(lVar10);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    FUN_02ce0978(lVar6);
  }
  uVar7 = (*pcVar11)();
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar6 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x68);
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02ce0978(lVar6);
    }
    uVar8 = (*pcVar11)(in_stack_00000000,in_stack_00000008,
                       *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x68));
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar9 = *unaff_x19;
    uVar1 = unaff_x19[1];
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar6 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x170);
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_02ce0978(lVar6);
    }
    uVar9 = (*pcVar11)(uVar9,uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x170));
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar6 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
    if ((uVar2 & 1) == 0) {
      FUN_02ce0978(lVar6);
    }
    iVar4 = (*pcVar11)();
    FUN_05eaa79c(uVar8,uVar9,(long)(iVar4 * unaff_w24),0);
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar6 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02ce0978(lVar10);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x138);
    if ((uVar2 & 1) == 0) {
      FUN_02ce0978(lVar6);
    }
    (*pcVar11)();
  }
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  return;
}


