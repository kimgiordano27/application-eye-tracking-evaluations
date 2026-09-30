/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 04f88504
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  long unaff_x21;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  
  if ((*(byte *)(unaff_x20 + 0xd42) & 1) == 0) {
    FUN_02b3c81c(System_Runtime_Remoting_IEnvoyInfo_var);
    FUN_02b3c81c(System_Xml_XmlElement_var);
    *(undefined1 *)(unaff_x20 + 0xd42) = 1;
  }
  puVar7 = System_Xml_XmlElement_var;
  puVar6 = System_Runtime_Remoting_IEnvoyInfo_var;
  fVar5 = DAT_010328cc;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_00000088 = 0;
  if (unaff_x21 == 0) {
LAB_04f88b24:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar13 = *(long *)(unaff_x21 + 0x48);
  uVar12 = 0;
  fVar32 = 0.0;
  in_stack_00000098 = lVar13;
  do {
    fVar19 = (float)param_4;
    fVar18 = (float)param_3;
    fVar36 = (float)param_2;
    lVar8 = *(long *)puVar7;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar8 = *(long *)puVar7;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_04f88b24;
    if (*(int *)(**(long **)(lVar8 + 0xb8) + 0x18) <= (int)uVar12) {
      return;
    }
    lVar8 = *(long *)(param_5 + 0x158);
    if (lVar8 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_04f88b20;
    lVar14 = (long)(int)uVar12;
    iVar1 = *(int *)(lVar8 + lVar14 * 4 + 0x20);
    fVar15 = (float)FUN_04f88e34(param_5,uVar12,&stack0x00000098);
    if (*(long *)(param_5 + 0xd0) == 0) goto LAB_04f88b24;
    if (*(uint *)(*(long *)(param_5 + 0xd0) + 0x18) <= uVar12) goto LAB_04f88b20;
    lVar8 = *(long *)puVar7;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar8 = *(long *)puVar7;
    }
    plVar10 = *(long **)(lVar8 + 0xb8);
    lVar11 = *plVar10;
    if (lVar11 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_04f88b20;
    uVar4 = *(uint *)(lVar11 + lVar14 * 4 + 0x20);
    lVar11 = lVar13 + (long)(int)uVar4 * 0x10;
    if (iVar1 == 1) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        plVar10 = *(long **)(*(long *)puVar7 + 0xb8);
      }
      lVar8 = plVar10[3];
      if (lVar8 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_04f88b20:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar9 = *(long *)puVar6;
      cVar3 = *(char *)(lVar8 + lVar14 + 0x20);
      if (cVar3 != '\0') {
        fVar32 = 0.0;
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar9 = *(long *)puVar6;
      }
      lVar8 = *(long *)(lVar9 + 0xb8);
      uVar22 = *(undefined8 *)(lVar8 + 0x24);
      fVar35 = *(float *)(lVar8 + 0x2c);
      uVar27 = *(undefined8 *)(lVar8 + 0x3c);
      fVar33 = *(float *)(lVar8 + 0x44);
      fVar23 = (float)((ulong)uVar22 >> 0x20);
      fVar20 = fVar23 * -90.0 * fVar32 * 0.017453292;
      fVar25 = fVar32 * fVar35 * -90.0 * fVar5;
      uVar28 = uVar27;
      fVar17 = (float)FUN_05c7b824(0);
      fVar34 = (float)uVar28;
      fVar31 = (fVar36 * fVar25 + fVar19 * fVar17 + fVar15 * fVar34) - fVar18 * fVar20;
      fVar30 = (fVar18 * fVar17 + fVar19 * fVar20 + fVar36 * fVar34) - fVar15 * fVar25;
      fVar29 = (fVar15 * fVar20 + fVar19 * fVar25 + fVar18 * fVar34) - fVar36 * fVar17;
      fVar36 = ((fVar19 * fVar34 - fVar15 * fVar17) - fVar36 * fVar20) - fVar18 * fVar25;
      in_stack_00000088 = CONCAT44(fVar30,fVar31);
      in_stack_00000090 = CONCAT44(fVar36,fVar29);
      if (lVar13 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
      fVar18 = (float)FUN_04f88ff4(lVar13 + 0x20 + (long)(int)uVar4 * 0x10,&stack0x00000088);
      if (fVar32 <= fVar18) {
        fVar32 = fVar18;
      }
      if (0.0 <= fVar18) {
        if (cVar3 != '\0') {
          if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
          fVar17 = *(float *)(lVar11 + 0x20);
          fVar25 = *(float *)(lVar11 + 0x24);
          fVar20 = *(float *)(lVar11 + 0x28);
          fVar34 = *(float *)(lVar11 + 0x2c);
          fVar19 = fVar25;
          fVar15 = fVar20;
          uVar16 = FUN_05c7bd38(0);
          uVar21 = FUN_05c7bd38(fVar31,fVar30,fVar29,fVar36,uVar22,fVar23,fVar35,0);
          fVar23 = (float)((ulong)uVar27 >> 0x20);
          FUN_05c7bd38(fVar17,fVar25,fVar20,fVar34,uVar27,fVar23,fVar33,0);
          fVar19 = (float)FUN_02cdfa10(uVar16,fVar19,fVar15,uVar21,fVar30,fVar29,0);
          fVar18 = fVar18 * *(float *)(param_5 + 0xb0);
          fVar36 = 1.0;
          if (fVar18 <= 1.0) {
            fVar36 = fVar18;
          }
          fVar36 = 1.0 - fVar36;
          fVar15 = 1.0;
          if (0.0 <= fVar18) {
            fVar15 = fVar36;
          }
          fVar30 = fVar23 * fVar19 * fVar15 * 0.017453292;
          fVar19 = fVar33 * fVar19 * fVar15 * fVar5;
          fVar18 = (float)FUN_05c7b824(0);
          if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
          *(float *)(lVar11 + 0x20) =
               (fVar25 * fVar19 + fVar34 * fVar18 + fVar17 * fVar36) - fVar20 * fVar30;
          *(float *)(lVar11 + 0x24) =
               (fVar20 * fVar18 + fVar34 * fVar30 + fVar25 * fVar36) - fVar17 * fVar19;
          *(float *)(lVar11 + 0x28) =
               (fVar17 * fVar30 + fVar34 * fVar19 + fVar20 * fVar36) - fVar25 * fVar18;
          *(float *)(lVar11 + 0x2c) =
               ((fVar34 * fVar36 - fVar17 * fVar18) - fVar25 * fVar30) - fVar20 * fVar19;
        }
      }
      else {
        if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
        uVar21 = *(undefined4 *)(lVar11 + 0x24);
        uVar24 = *(undefined4 *)(lVar11 + 0x28);
        uVar26 = *(undefined4 *)(lVar11 + 0x2c);
        uVar16 = FUN_05c7b59c(*(undefined4 *)(lVar11 + 0x20),0);
        if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
        *(undefined4 *)(lVar11 + 0x20) = uVar16;
        *(undefined4 *)(lVar11 + 0x24) = uVar21;
        *(undefined4 *)(lVar11 + 0x28) = uVar24;
        *(undefined4 *)(lVar11 + 0x2c) = uVar26;
      }
    }
    else if (iVar1 == 2) {
      if (lVar13 == 0) goto LAB_04f88b24;
      if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
      uVar21 = *(undefined4 *)(lVar11 + 0x24);
      uVar24 = *(undefined4 *)(lVar11 + 0x28);
      uVar26 = *(undefined4 *)(lVar11 + 0x2c);
      uVar16 = FUN_05c7b59c(*(undefined4 *)(lVar11 + 0x20),0);
      if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
      *(undefined4 *)(lVar11 + 0x20) = uVar16;
      *(undefined4 *)(lVar11 + 0x24) = uVar21;
      *(undefined4 *)(lVar11 + 0x28) = uVar24;
      *(undefined4 *)(lVar11 + 0x2c) = uVar26;
    }
    lVar8 = *(long *)(param_5 + 0x158);
    if (lVar8 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_04f88b20;
    if (*(int *)(lVar8 + lVar14 * 4 + 0x20) == 0) {
      lVar8 = *(long *)(param_5 + 0xe0);
    }
    else {
      lVar8 = *(long *)(param_5 + 0xd8);
    }
    if (lVar8 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_04f88b20;
    lVar8 = *(long *)(lVar8 + lVar14 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_04f88b24;
    FUN_04f0e0c4(lVar8,0);
    lVar8 = *(long *)(param_5 + 0x148);
    if (lVar8 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_04f88b20;
    if (lVar13 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
    lVar8 = lVar8 + lVar14 * 0x10;
    param_2 = (ulong)*(uint *)(lVar8 + 0x24);
    param_3 = (ulong)*(uint *)(lVar8 + 0x28);
    param_4 = (ulong)*(uint *)(lVar8 + 0x2c);
    uVar16 = FUN_05c7b59c(*(undefined4 *)(lVar8 + 0x20),0);
    if (*(uint *)(lVar13 + 0x18) <= uVar4) goto LAB_04f88b20;
    *(int *)(lVar11 + 0x24) = (int)param_2;
    *(int *)(lVar11 + 0x28) = (int)param_3;
    uVar2 = *(uint *)(lVar13 + 0x18);
    *(undefined4 *)(lVar11 + 0x20) = uVar16;
    *(int *)(lVar11 + 0x2c) = (int)param_4;
    if (uVar2 <= uVar4) goto LAB_04f88b20;
    lVar8 = *(long *)(param_5 + 0x150);
    if (lVar8 == 0) goto LAB_04f88b24;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_04f88b20;
    lVar8 = lVar8 + lVar14 * 0x10;
    uVar12 = uVar12 + 1;
    *(undefined4 *)(lVar8 + 0x20) = uVar16;
    *(int *)(lVar8 + 0x24) = (int)param_2;
    *(int *)(lVar8 + 0x28) = (int)param_3;
    *(int *)(lVar8 + 0x2c) = (int)param_4;
  } while( true );
}


