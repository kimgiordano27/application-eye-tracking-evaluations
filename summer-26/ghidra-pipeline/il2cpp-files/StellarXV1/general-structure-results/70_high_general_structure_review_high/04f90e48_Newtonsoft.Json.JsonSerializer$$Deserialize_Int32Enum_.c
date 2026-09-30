/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 04f90e48
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04f90f3c) */

int Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *in_stack_00000018;
  
LAB_04f90e58:
  uVar1 = (*(code *)*param_1)(unaff_x21,param_1[1]);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 04f90e6c to 05090e73 has its CatchHandler @ 04f91008 */
    if (unaff_w20 == unaff_w23) {
      FUN_04077840();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4();
    }
    unaff_w20 = unaff_w20 + 1;
                    /* try { // try from 04f90e78 to 05090e83 has its CatchHandler @ 04f91004 */
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
                    /* try { // try from 04f90e50 to 05090e5f has its CatchHandler @ 04f91010 */
          param_1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04f90e58;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x22,0);
    goto LAB_04f90e58;
  }
                    /* try { // try from 04f90e88 to 05090e8f has its CatchHandler @ 04f90ff0 */
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
                    /* try { // try from 04f90ea8 to 05090eab has its CatchHandler @ 04f90fe8 */
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04f90ee4;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
                    /* try { // try from 04f90ecc to 05090ed7 has its CatchHandler @ 04f91000 */
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_04f90ee4:
                    /* try { // try from 04f90ee4 to 05090eeb has its CatchHandler @ 04f90fec */
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
                    /* try { // try from 04f90ef8 to 05090f17 has its CatchHandler @ 04f90ff4 */
  return unaff_w20;
}


