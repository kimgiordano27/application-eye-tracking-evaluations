/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Data.SceneData>
ENTRY_POINT: 04f8e24c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f8e31c) */

uint Newtonsoft_Json_JsonConvert__DeserializeObject<Data_SceneData>(code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x22;
  uint unaff_w23;
  long *unaff_x26;
  long *in_stack_00000018;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) == 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04f8e130;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x26,0);
LAB_04f8e130:
    unaff_w23 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if ((unaff_w23 & 1) == 0) {
      unaff_w23 = 0;
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04f8e1b4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,lVar4,0);
LAB_04f8e1b4:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = **(long **)(unaff_x19 + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar3 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04f8e234;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_04f8e234:
    param_1 = (code *)*puVar2;
  }
  if (in_stack_00000018 != (long *)0x0) {
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 04f8e284 to 0508e28b has its CatchHandler @ 04f8e408 */
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 04f8e290 to 0508e29f has its CatchHandler @ 04f8e3fc */
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04f8e2c4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
                    /* try { // try from 04f8e2a8 to 0508e2b7 has its CatchHandler @ 04f8e404 */
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_04f8e2c4:
                    /* try { // try from 04f8e2c4 to 0508e2cb has its CatchHandler @ 04f8e3f8 */
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
                    /* try { // try from 04f8e2d0 to 0508e2db has its CatchHandler @ 04f8e3f4 */
                    /* try { // try from 04f8e2e0 to 0508e2e7 has its CatchHandler @ 04f8e3e0 */
  return unaff_w23 & 1;
}


