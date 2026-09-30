/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 054b9dd4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x054b9f64) */
/* WARNING: Removing unreachable block (ram,0x054ba018) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  long unaff_x22;
  char cStack0000000000000024;
  long in_stack_00000028;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x2e8));
  FUN_02d965b8(PTR_DAT_06a181b8);
                    /* try { // try from 054b9dec to 055b9def has its CatchHandler @ 054ba4f4 */
                    /* try { // try from 054b9df0 to 055b9dff has its CatchHandler @ 054ba53c */
  FUN_02d965b8(PTR_DAT_069fbb48);
  *(undefined1 *)(unaff_x22 + 0xcf8) = 1;
  puVar1 = PTR_DAT_069fc2e8;
                    /* try { // try from 054b9e00 to 055b9e0b has its CatchHandler @ 054ba520 */
  in_stack_00000028 = 0;
  cStack0000000000000024 = '\0';
  if ((unaff_x21 & 1) == 0) {
    if (unaff_w20 < 1) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar4 = thunk_FUN_02dd3144();
      uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a0f708);
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a1dd30);
      FUN_0544f840(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a21988);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar6);
    }
                    /* try { // try from 054b9e4c to 055b9e57 has its CatchHandler @ 054ba4f8 */
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
                    /* try { // try from 054b9e5c to 055b9e67 has its CatchHandler @ 054ba500 */
    iVar3 = FUN_054e9108(unaff_w20,8,0);
    puVar2 = PTR_DAT_06a181b8;
                    /* try { // try from 054b9e68 to 055b9ecf has its CatchHandler @ 054ba538 */
    if (iVar3 < 0x1001) {
      lVar5 = *(long *)PTR_DAT_06a181b8;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar2;
      }
      plVar9 = *(long **)(lVar5 + 0xb8);
      if (*plVar9 != 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          plVar9 = *(long **)(*(long *)puVar2 + 0xb8);
        }
        in_stack_00000028 = plVar9[1];
        cStack0000000000000024 = '\0';
        FUN_0554bf68(in_stack_00000028,&stack0x00000024,0);
                    /* try { // try from 054b9ed4 to 055b9ee3 has its CatchHandler @ 054ba534 */
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar2;
        }
        lVar8 = **(long **)(lVar5 + 0xb8);
                    /* try { // try from 054b9ef0 to 055b9f17 has its CatchHandler @ 054ba28c */
        if (lVar8 != 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
          }
          *(long *)(unaff_x19 + 0x28) = lVar8;
          LeanTween__value();
          **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
                    /* try { // try from 054b9f2c to 055b9f2f has its CatchHandler @ 054ba26c */
          LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
        }
                    /* try { // try from 054b9f44 to 055b9f63 has its CatchHandler @ 054ba274 */
        if (cStack0000000000000024 != '\0') {
          thunk_FUN_02da42ec(in_stack_00000028,0);
        }
      }
    }
    plVar9 = (long *)(unaff_x19 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_02d966a4(*(undefined8 *)puVar1,iVar3);
      *plVar9 = lVar5;
      LeanTween__value(plVar9,lVar5);
    }
    else {
      FUN_0550afb4(*plVar9,0,iVar3,0);
    }
  }
  else {
    uVar4 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc2e8,1);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    LeanTween__value();
    iVar3 = 0;
  }
  *(int *)(unaff_x19 + 0x5c) = iVar3;
  return;
}


