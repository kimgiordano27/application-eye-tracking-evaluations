/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 01a05384
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int in_w8;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  int *unaff_x20;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 01a05394 to 01b053bb has its CatchHandler @ 01a056d0 */
  uVar10 = FUN_0268b4e0();
  if ((uVar10 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 200) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 200) + 0xd0) == '\0') {
      return;
    }
    iVar1 = *unaff_x20;
    iVar8 = FUN_013025fc();
    if (iVar1 == iVar8) {
      return;
    }
    if ((unaff_x20[4] & 0xfffffffeU) != 2) {
      return;
    }
    FUN_01a04f24(&stack0x000000a0);
                    /* try { // try from 01a053f0 to 01b05417 has its CatchHandler @ 01a056cc */
    *(undefined8 *)(unaff_x19 + 0x1b8) = uStack00000000000000b4;
    *(ulong *)(unaff_x19 + 0x1b0) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    *(ulong *)(unaff_x19 + 0x1ac) = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    *(undefined8 *)(unaff_x19 + 0x1a4) = in_stack_000000a0;
    FUN_01a05544();
    uVar11 = FUN_01a05014();
    *(undefined8 *)(unaff_x19 + 0x178) = uVar11;
    FUN_01a056a8(&stack0x00000140);
    uVar9 = FUN_013025fc();
    in_stack_00000088 = in_stack_00000148;
    in_stack_00000080 = in_stack_00000140;
    uStack0000000000000094 = uStack0000000000000154;
    uStack0000000000000090 = uStack0000000000000150;
                    /* try { // try from 01a05454 to 01b0547f has its CatchHandler @ 01a056dc */
    FUN_01997794(&stack0x00000100,uVar9,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x100),0);
    uVar7 = in_stack_00000130;
    uVar6 = in_stack_00000128;
    uVar5 = in_stack_00000120;
    uVar4 = in_stack_00000118;
    uVar3 = in_stack_00000110;
    uVar2 = in_stack_00000108;
    uVar11 = in_stack_00000100;
    if ((*(long *)(unaff_x19 + 200) != 0) &&
       (plVar15 = *(long **)(*(long *)(unaff_x19 + 200) + 0xb0), plVar15 != (long *)0x0)) {
      lVar13 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    /* try { // try from 01a054b8 to 01b054e7 has its CatchHandler @ 01a056d8 */
      if (uVar10 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)Method_System_Data_DataTable_ReadXml__) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01a054fc;
          }
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_00d59724(plVar15,*(long *)Method_System_Data_DataTable_ReadXml__,0);
LAB_01a054fc:
      in_stack_00000168 = uVar2;
      in_stack_00000160 = uVar11;
      in_stack_00000178 = uVar4;
      in_stack_00000170 = uVar3;
      in_stack_00000188 = uVar6;
      in_stack_00000180 = uVar5;
      in_stack_00000190 = uVar7;
                    /* try { // try from 01a0551c to 01b0554b has its CatchHandler @ 01a056d4 */
      (*(code *)*puVar12)(plVar15,&stack0x00000160,puVar12[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


