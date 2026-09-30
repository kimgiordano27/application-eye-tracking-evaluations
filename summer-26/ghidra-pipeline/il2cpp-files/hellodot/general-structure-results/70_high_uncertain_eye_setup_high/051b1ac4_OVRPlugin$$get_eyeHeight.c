/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 051b1ac4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b1be0) */

void OVRPlugin__get_eyeHeight
               (float param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
               float param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar11;
  undefined8 unaff_d11;
  float fVar12;
  undefined8 unaff_d12;
  float unaff_s13;
  float in_s16;
  float in_s17;
  float in_s21;
  float in_s22;
  float in_s23;
  
  do {
    fVar9 = (float)param_3;
    fVar12 = (float)unaff_d12;
    fVar8 = (float)param_2;
    fVar11 = (float)unaff_d11;
    fVar10 = (fVar12 * fVar9 + param_5 + param_6) - fVar11 * fVar8;
    FUN_05f0278c(unaff_d8,unaff_d9,unaff_d10,fVar10,
                 (fVar11 * param_1 + in_s16 + in_s17) - unaff_s13 * fVar9,
                 (unaff_s13 * fVar8 + in_s22 + param_4) - fVar12 * param_1,
                 ((in_s23 - in_s21) - fVar12 * fVar8) - fVar11 * fVar9,unaff_x20,0);
    do {
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_051b19b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051b19b8:
      uVar6 = (*(code *)*puVar3)();
      puVar2 = PTR_DAT_065c8a48;
      if ((uVar6 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_02cea798();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_051b1b80;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_051b1b68;
      }
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_051b1a18;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051b1a18:
      unaff_x20 = (long *)(*(code *)*puVar3)();
    } while (unaff_x20 == (long *)0x0);
    bVar1 = *(byte *)(*unaff_x22 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(unaff_x20);
    }
    FUN_05f00f38(unaff_x20,0);
    unaff_d8 = FUN_05ee7574(&stack0x00000080,0);
    unaff_d12 = unaff_d9;
    unaff_d11 = unaff_d10;
    unaff_s13 = (float)thunk_FUN_05ee5fe0(&stack0x00000080,0);
    param_2 = unaff_d12;
    param_3 = unaff_d11;
    param_4 = fVar10;
    param_1 = (float)FUN_05f01db4(unaff_x20,0);
    param_5 = fVar10 * param_1;
    param_6 = unaff_s13 * param_4;
    in_s16 = fVar10 * (float)param_2;
    in_s17 = (float)unaff_d12 * param_4;
    in_s21 = unaff_s13 * param_1;
    in_s22 = fVar10 * (float)param_3;
    in_s23 = fVar10 * param_4;
    param_4 = (float)unaff_d11 * param_4;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_051b1b68:
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_051b1b9c;
    }
  }
LAB_051b1b80:
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar2,0);
LAB_051b1b9c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


