/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 055dd464
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
               (long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  long lVar6;
  uint in_w9;
  long lVar7;
  long lVar8;
  uint unaff_w20;
  uint uVar9;
  int unaff_w21;
  ushort unaff_w22;
  uint uVar10;
  ulong unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  
code_r0x055dd464:
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(param_1);
    in_w9 = (uint)*(ushort *)(*(long *)(*unaff_x27 + 0xb8) + 8);
  }
  if (in_w9 == unaff_w22) {
    unaff_w26 = unaff_w26 + 1;
  }
LAB_055dd488:
  unaff_w21 = unaff_w21 + 1;
  if (unaff_w21 != unaff_w24) {
                    /* try { // try from 055dd494 to 056dd4bf has its CatchHandler @ 055dddec */
    sVar5 = FUN_05487524();
    lVar6 = *unaff_x27;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar6);
      lVar6 = *unaff_x27;
    }
    lVar7 = *(long *)(lVar6 + 0xb8);
    if (*(short *)(lVar7 + 10) != sVar5) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar6);
        lVar7 = *(long *)(*unaff_x27 + 0xb8);
      }
      if (*(short *)(lVar7 + 8) != sVar5) goto LAB_055dd500;
    }
  }
  unaff_w25 = unaff_w25 + 1;
LAB_055dd500:
  do {
    if (unaff_w21 == unaff_w24) {
                    /* try { // try from 055dd510 to 056dd517 has its CatchHandler @ 055ddd88 */
      if ((unaff_w25 == 0) && (unaff_w26 == 0)) {
                    /* try { // try from 055dd530 to 056dd533 has its CatchHandler @ 055ddda4 */
        return;
      }
      lVar6 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f548,unaff_w24 - unaff_w25);
                    /* try { // try from 055dd558 to 056dd55f has its CatchHandler @ 055dddac */
      if ((unaff_x23 & 1) == 0) {
        if (lVar6 == 0) goto LAB_055dd720;
        if ((*(int *)(lVar6 + 0x18) == 0) ||
           (*(undefined2 *)(lVar6 + 0x20) = 0x5c, *(int *)(lVar6 + 0x18) == 1)) goto LAB_055dd71c;
        *(undefined2 *)(lVar6 + 0x22) = 0x5c;
      }
                    /* try { // try from 055dd580 to 056dd583 has its CatchHandler @ 055ddda4 */
      puVar4 = PTR_DAT_06a368c0;
      if (unaff_w24 <= (int)unaff_w20) goto LAB_055dd6f8;
      if (lVar6 == 0) {
LAB_055dd720:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar3 = unaff_w24 - 1;
      uVar10 = unaff_w20;
      goto LAB_055dd59c;
    }
    unaff_w22 = FUN_05487524();
    param_1 = *unaff_x27;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(param_1);
      param_1 = *unaff_x27;
    }
    lVar6 = *(long *)(param_1 + 0xb8);
    if (*(ushort *)(lVar6 + 10) == unaff_w22) break;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(param_1);
      param_1 = *unaff_x27;
      lVar6 = *(long *)(param_1 + 0xb8);
    }
    if (*(ushort *)(lVar6 + 8) == unaff_w22) break;
    unaff_w21 = unaff_w21 + 1;
  } while( true );
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(param_1);
    param_1 = *unaff_x27;
  }
  uVar2 = *(ushort *)(*(long *)(param_1 + 0xb8) + 8);
  in_w9 = (uint)uVar2;
  if (*(ushort *)(*(long *)(param_1 + 0xb8) + 10) != uVar2) goto code_r0x055dd464;
  goto LAB_055dd488;
LAB_055dd59c:
  do {
                    /* try { // try from 055dd5a4 to 056dd5a7 has its CatchHandler @ 055ddd98 */
    if (*(int *)(lVar6 + 0x18) <= (int)uVar10) break;
    sVar5 = FUN_05487524();
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar7);
      lVar7 = *(long *)puVar4;
    }
    lVar8 = *(long *)(lVar7 + 0xb8);
    if (*(short *)(lVar8 + 10) == sVar5) {
LAB_055dd608:
                    /* try { // try from 055dd608 to 056dd60b has its CatchHandler @ 055dddc8 */
      uVar9 = *(uint *)(lVar6 + 0x18);
      uVar1 = uVar10 + 1;
      if (uVar1 != uVar9) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar7);
          uVar9 = *(uint *)(lVar6 + 0x18);
        }
        if (uVar9 <= uVar10) {
LAB_055dd71c:
                    /* WARNING: Subroutine does not return */
          FUN_02e3cccc();
        }
        *(undefined2 *)(lVar6 + (long)(int)uVar10 * 2 + 0x20) =
             *(undefined2 *)(*(long *)(*(long *)puVar4 + 0xb8) + 10);
        uVar9 = unaff_w20;
        uVar10 = uVar1;
        if ((int)unaff_w20 < (int)uVar3) {
          do {
                    /* try { // try from 055dd650 to 056dd677 has its CatchHandler @ 055ddc44 */
            uVar1 = uVar9 + 1;
            sVar5 = FUN_05487524();
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar7);
              lVar7 = *(long *)puVar4;
            }
            lVar8 = *(long *)(lVar7 + 0xb8);
            if (*(short *)(lVar8 + 10) != sVar5) {
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar7);
                lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
              }
              unaff_w20 = uVar9;
              if (*(short *)(lVar8 + 8) != sVar5) break;
            }
                    /* try { // try from 055dd6b4 to 056dd6df has its CatchHandler @ 055ddc3c */
            unaff_w20 = uVar3;
            uVar9 = uVar1;
          } while (uVar3 != uVar1);
        }
      }
    }
    else {
                    /* try { // try from 055dd5e4 to 056dd5ef has its CatchHandler @ 055ddd94 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 055dd5f0 to 056dd5f7 has its CatchHandler @ 055dddcc */
        thunk_FUN_02e9a04c(lVar7);
        lVar7 = *(long *)puVar4;
        lVar8 = *(long *)(lVar7 + 0xb8);
      }
      if (*(short *)(lVar8 + 8) == sVar5) goto LAB_055dd608;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_055dd71c;
      *(short *)(lVar6 + (long)(int)uVar10 * 2 + 0x20) = sVar5;
      uVar10 = uVar10 + 1;
    }
    unaff_w20 = unaff_w20 + 1;
  } while ((int)unaff_w20 < unaff_w24);
LAB_055dd6f8:
  FUN_0548a2b0(0,lVar6,0);
  return;
}


